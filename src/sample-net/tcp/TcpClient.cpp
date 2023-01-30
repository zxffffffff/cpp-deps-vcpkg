#include "TcpClient.h"
#include <uv.h>

class TcpClientPrivate
{
    friend class TcpClient;
private:
    // param
    const char* ip;
    int port;
    HandleRun handleRun;
    HandleClose handleClose;
    HandleNewConn handleNewConn;
    HandleCloseConn handleCloseConn;
    HandleConnOnRead handleConnOnRead;

    // tcp
    std::atomic_bool running{ false };
    std::shared_ptr<uv_loop_t> loop = std::make_shared<uv_loop_t>();
    std::shared_ptr<uv_async_t> async_close = std::make_shared<uv_async_t>();
    std::shared_ptr<uv_tcp_t> socket = std::make_shared<uv_tcp_t>();
    sockaddr_in dest{ 0 };
    std::shared_ptr<uv_connect_t> connect = std::make_shared<uv_connect_t>();

public:
    TcpClientPrivate(const char* ip, int port)
        : ip(ip), port(port)
    {
    }

    ~TcpClientPrivate()
    {
    }

    static void onRun(void* arg)
    {
        auto priv = (TcpClientPrivate*)arg;
        uv_loop_init(priv->loop.get());

        do {
            uv_tcp_init(priv->loop.get(), priv->socket.get());
            priv->socket->data = priv;

            uv_ip4_addr(priv->ip, priv->port, &priv->dest);

            int r = uv_tcp_connect(priv->connect.get(), priv->socket.get(), (const struct sockaddr*)&priv->dest, onConnection);
            if (r) {
                LOG(ERROR) << std::format("Connect error {}", uv_strerror(r));
                break;
            }
            priv->connect->data = priv;
            priv->running = true;

            priv->async_close->data = priv;
            uv_async_init(priv->loop.get(), priv->async_close.get(), TcpClientPrivate::onAsyncClose);

            LOG(INFO) << std::format("client run {}:{}", priv->ip, priv->port);
            uv_run(priv->loop.get(), UV_RUN_DEFAULT);
            LOG(INFO) << std::format("client stop {}:{}", priv->ip, priv->port);
        } while (0);

        uv_loop_close(priv->loop.get());
    }

    static void onAsyncClose(uv_async_t* handle)
    {
        LOG(INFO) << std::format("onAsyncClose");
        auto priv = (TcpClientPrivate*)handle->data;
        uv_close((uv_handle_t*)priv->socket.get(), TcpClientPrivate::onClose);
    }

    static void onClose(uv_handle_t* socket)
    {
        LOG(INFO) << std::format("onClose");
        auto priv = (TcpClientPrivate*)socket->data;
        priv->running = false;
    }

    static void onConnection(uv_connect_t* connect, int status)
    {
        if (status < 0) {
            LOG(ERROR) << std::format("onConnection error {}", uv_strerror(status));
            return;
        }

        LOG(INFO) << std::format("onConnection");
        auto priv = (TcpClientPrivate*)connect->data;
        uv_read_start((uv_stream_t*)priv->socket.get(), onReadAllocCbk, onReadCbk);
    }

    static void onCloseConnection(uv_handle_t* connect)
    {
        LOG(INFO) << std::format("onCloseConnection");
        auto priv = (TcpClientPrivate*)connect->data;
    }

    static void onReadAllocCbk(uv_handle_t* socket, size_t suggested_size, uv_buf_t* buf)
    {
        *buf = uv_buf_init(new char[suggested_size], suggested_size);
    }

    static void onReadCbk(uv_stream_t* socket, ssize_t nread, const uv_buf_t* buf)
    {
        auto priv = (TcpClientPrivate*)socket->data;
        if (nread > 0) {
            LOG(INFO) << std::format("onReadCbk {}", std::string(buf->base, nread));
            if (priv->handleConnOnRead) {
                priv->handleConnOnRead((size_t)socket, buf->base, nread);
            }
        }
        if (nread < 0 || nread == UV_EOF) {
            LOG(INFO) << std::format("onReadCbk close {}", nread);
            uv_close((uv_handle_t*)socket, onCloseConnection);
        }
    }
};

TcpClient::TcpClient(const char* ip, int port)
    : priv(std::make_unique<TcpClientPrivate>(ip, port))
{
}

TcpClient::~TcpClient()
{
}

void TcpClient::SetHandleRun(HandleRun f)
{
    priv->handleRun = f;
}

void TcpClient::SetHandleClose(HandleClose f)
{
    priv->handleClose = f;
}

void TcpClient::SetHandleNewConn(HandleNewConn f)
{
    priv->handleNewConn = f;
}

void TcpClient::SetHandleCloseConn(HandleCloseConn f)
{
    priv->handleCloseConn = f;
}

void TcpClient::SetHandleConnOnRead(HandleConnOnRead f)
{
    priv->handleConnOnRead = f;
}

void TcpClient::Run()
{
    uv_thread_t thread_id;
    uv_thread_create(&thread_id, TcpClientPrivate::onRun, priv.get());
}

void TcpClient::Close()
{
    if (!priv->running)
        return;
    ::uv_async_send(priv->async_close.get());
}

bool TcpClient::IsRunning() const
{
    return priv->running;
}

void TcpClient::Write(const char* buf, int len)
{
    if (!IsRunning()) {
        LOG(INFO) << std::format("Write !IsRunning");
        return;
    }

    LOG(INFO) << std::format("Write {}", std::string(buf, len));
    auto req = new uv_write_t;
    auto bufs = uv_buf_init(const_cast<char*>(buf), len);
    int r = ::uv_write(req, (uv_stream_t*)priv->socket.get(), &bufs, 1, [](uv_write_t* req, int status) { delete req; });
    if (r) {
        LOG(INFO) << std::format("Write error {}", r);
        delete req;
    }
}
