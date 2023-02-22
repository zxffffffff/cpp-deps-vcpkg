/****************************************************************************
** MIT License
**
** Author	: xiaofeng.zhu
** Support	: zxffffffff@outlook.com, 1337328542@qq.com
**
****************************************************************************/

#pragma once
#include "RedisCommon.h"
#include "hiredis/hiredis.h"
#include "Chrono.h"

using namespace SampleRedis;

/* ֧��ͬ�����첽�ص��ķ�ʽ��Ϊ�˷�������ʹ��ͬ������
 * ����3����redisConnect -> redisCommand -> freeReplyObject
 * ֧�� libuv��glib��qt �ȶ��� C �⹲ͬʹ��
 */
class RedisClientPrivate
{
private:
    /* Unix �ṩ�˶���Ľӿ�
     * redisConnect / redisConnectUnix
     */
    redisContext* ctx = NULL;

public:
    RedisClientPrivate(const char* host, int port)
    {
        ctx = redisConnect(host, port);
        if (ctx == NULL || ctx->err) {
            if (ctx) {
                LOG(ERROR) << "[redisConnect] " << ctx->errstr;
                redisFree(ctx);
                ctx = NULL;
            }
            else {
                LOG(ERROR) << "[redisConnect] Can't allocate redis context";
            }
        }
    }

    ~RedisClientPrivate()
    {
        if (ctx) {
            redisFree(ctx);
        }
    }

    ReplyPtr RunCmd(const std::string& cmd)
    {
        LOG(INFO) << "[RunCmd cmd] " << cmd;

        if (ctx == NULL || ctx->err) {
            LOG(ERROR) << "[RunCmd] ctx err";
            return nullptr;
        }

        Chrono chrono;
        redisReply* reply = (redisReply*)redisCommand(ctx, cmd.c_str());
        auto use_time = chrono.stop();
        if (reply == NULL || ctx->err) {
            LOG(ERROR) << "[RunCmd] " << ctx->errstr;
            return nullptr;
        }

        auto p = ParseReply(reply);
        LOG(INFO) << "[RunCmd ret] use_time=" << use_time << "ms type=" << reply->type << (p->str.empty() ? "" : " str=" + p->str);
        freeReplyObject(reply);
        return p;
    }

private:
    ReplyPtr ParseReply(redisReply* reply)
    {
        ReplyPtr p = std::make_shared<Reply>();
        switch (reply->type)
        {
        case REDIS_REPLY_INTEGER:
            p->str = std::to_string(reply->integer);
            break;
        case REDIS_REPLY_ERROR:
        case REDIS_REPLY_STRING:
        case REDIS_REPLY_VERB:      // ֧�� char[4] �� string 
        case REDIS_REPLY_DOUBLE:    // ֧�� double �� string
        case REDIS_REPLY_STATUS:
            p->str = std::string(reply->str);
            break;
        case REDIS_REPLY_ARRAY:
            p->arr.resize(reply->elements);
            for (size_t i = 0; i < reply->elements; ++i) {
                redisReply* ele = reply->element[i];
                p->arr[i] = ParseReply(ele);
            }
            break;
        case REDIS_REPLY_NIL:
            break;
        default:
            if (reply->str)
                p->str = std::string(reply->str);
            LOG(WARNING) << "[ParseReply warning] type=" << reply->type << " str=" << p->str;
            break;
        }
        return p;
    }
};
