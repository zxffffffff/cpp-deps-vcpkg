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

/* HTTP Parser ����ӿ�
 * ����ʹ�� llhttp��boost::beast::http �ȵ�����ʵ��
 * �����߳����У����̰߳�ȫ
 */
class IHttpParser
{
public:
    virtual ~IHttpParser() {}

    virtual Error ParseReq(Buffer buffer, HttpRequest &out_req) = 0;

    virtual std::string MakeRes(const std::string &body) = 0;
};
