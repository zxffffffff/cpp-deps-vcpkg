/****************************************************************************
** MIT License
**
** Author	: xiaofeng.zhu
** Support	: zxffffffff@outlook.com, 1337328542@qq.com
**
****************************************************************************/
#pragma once
#include "net_common.h"

struct HttpRequest
{
    std::string method; // "GET"
    std::string path;   // "/api/search"
    std::map<std::string, std::string> parameters;
    std::string post_body;
};

/* HTTP Parser 抽象接口
 * 可以使用 llhttp、boost::beast::http 等第三方实现
 * 工作线程运行，非线程安全
 */
class IHttpParser
{
public:
    virtual ~IHttpParser() {}

    virtual Error ParseReq(Buffer buffer, std::shared_ptr<HttpRequest> out_req) = 0;

    virtual std::string MakeRes(std::string body) = 0;
};
