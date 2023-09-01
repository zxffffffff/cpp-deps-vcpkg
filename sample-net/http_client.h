/****************************************************************************
** MIT License
**
** Author	: xiaofeng.zhu
** Support	: zxffffffff@outlook.com, 1337328542@qq.com
**
****************************************************************************/
#pragma once
#include "interface/http_interface.h"
#include "interface/threadpool_interface.h"

#if defined(_MSC_VER) && (_MSC_VER >= 1500 && _MSC_VER < 1900)
/* msvc兼容utf-8: https://support.microsoft.com/en-us/kb/980263 */
#if (_MSC_VER >= 1700)
#pragma execution_character_set("utf-8")
#endif
#pragma warning(disable:4566)
#endif

template <class IHttpClientImpl, class IThreadPoolImpl>
class HttpClient
{
    std::unique_ptr<IHttpClient> client = std::make_unique<IHttpClientImpl>();
    std::unique_ptr<IThreadPool> threadPool = std::make_unique<IThreadPoolImpl>();

private:
    HttpClient()
    {
        client->InitOnce();
    }

    ~HttpClient()
    {
        client->CleanupOnce();
    }

    /* url重复的部分作为前缀 */
    std::string urlPrefix;

public:
    static HttpClient &Singleton()
    {
        static HttpClient ins;
        return ins;
    }

    void SetPrefix(const std::string &urlPrefix) { this->urlPrefix = urlPrefix; }
    const std::string &GetPrefix() const { return urlPrefix; }

    /* 拼接参数 */
    std::string ParseParam(const std::map<std::string, std::string> &params)
    {
        std::stringstream ss;
        for (auto ite = params.begin(); ite != params.end(); ++ite)
        {
            if (ite != params.begin())
                ss << '&';
            ss << ite->first << '=' << URLEncode(ite->second);
        }
        return ss.str();
    }

    std::string URLEncode(const std::string &msg) const
    {
        return client->URLEncode(msg);
    }

    std::string URLDecode(const std::string &msg) const
    {
        return client->URLDecode(msg);
    }

    /* 异步请求 future/cbk  */
    std::future<HttpResponse> Get(
        const std::string &url,
        const std::map<std::string, std::string> &params,
        double timeout_sec = 10,
        std::function<void(HttpResponse)> cbk = nullptr)
    {
        auto onThread = [=]
        {
            auto response = GetSync(url, params, timeout_sec);
            if (cbk)
                cbk(response);
            return response;
        };
        return threadPool->MoveToThread<HttpResponse>(onThread);
    }

    std::future<HttpResponse> Post(
        const std::string &url,
        const std::map<std::string, std::string> &params,
        const std::string &body,
        double timeout_sec = 10,
        std::function<void(HttpResponse)> cbk = nullptr)
    {
        auto onThread = [=]
        {
            auto response = PostSync(url, params, body, timeout_sec);
            if (cbk)
                cbk(response);
            return response;
        };
        return threadPool->MoveToThread<HttpResponse>(onThread);
    }

    /* 同步请求 */
    HttpResponse GetSync(
        const std::string &url,
        const std::map<std::string, std::string> &params,
        double timeout_sec = 10)
    {
        std::stringstream ss;
        if (urlPrefix.size())
            ss << urlPrefix;
        ss << url;
        if (params.size())
            ss << '?' << ParseParam(params);
        return client->Get(ss.str(), timeout_sec);
    }

    HttpResponse PostSync(
        const std::string &url,
        const std::map<std::string, std::string> &params,
        const std::string &body,
        double timeout_sec = 10)
    {
        std::stringstream ss;
        if (urlPrefix.size())
            ss << urlPrefix;
        ss << url;
        if (params.size())
            ss << '?' << ParseParam(params);
        return client->Post(ss.str(), body.c_str(), timeout_sec);
    }
};
