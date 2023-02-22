/****************************************************************************
** MIT License
**
** Author	: xiaofeng.zhu
** Support	: zxffffffff@outlook.com, 1337328542@qq.com
**
****************************************************************************/

#pragma once
#include "Common.h"
#include <mysqlx/xdevapi.h>
#include "Chrono.h"

using namespace ::mysqlx;

/* https://dev.mysql.com/doc/dev/connector-cpp/8.0/devapi_ref.html
 * ֧�����µ� X DevAPI��MySQL 5.7 �Ժ�Ĭ���� 33060 ���� X Protocol��ʹ�� protobuf �Ż����䣩
 * ������ Session Object��coll.execute����Ҳ������ SQL��sess.sql��
 */
class MySQLClientPrivate
{
private:
    /* Client from_uri("mysqlx://user:pwd\@host:port/db?ssl-mode=disabled");
     * ---- or ----
     * SessionOption::USER, "user",
     * SessionOption::PWD,  "pwd",
     * SessionOption::HOST, "host",
     * SessionOption::PORT, port,
     * SessionOption::DB,   "db",
     * SessionOption::SSL_MODE, SSLMode::DISABLED
     * ClientOption::POOLING, true,
     * ClientOption::POOL_MAX_SIZE, 10,
     * ClientOption::POOL_QUEUE_TIMEOUT, 1000,
     * ClientOption::POOL_MAX_IDLE_TIME, 500,
     */
    Client client;

public:
    MySQLClientPrivate(const char* host, int port, const char* user, const char* pwd)
        :client(SessionOption::HOST, host, SessionOption::PORT, port,
            SessionOption::USER, user, SessionOption::PWD, pwd,
            ClientOption::POOLING, true, ClientOption::POOL_MAX_SIZE, 10)
    {
        CheckVersion();
    }

    ~MySQLClientPrivate()
    {
        client.close();
    }

    bool CheckVersion()
    {
        Session sess = client.getSession();
        RowResult res = sess.sql("show variables like 'version'").execute();
        std::stringstream version;

        version << res.fetchOne().get(1).get<std::string>();
        int major_version;
        version >> major_version;

        if (major_version < 8)
        {
            LOG(ERROR) << "[mysqlx error] version=" << major_version << " < 8";
            return false;
        }
        return true;
    }

    bool RunSQL(const std::string& sql, std::vector<std::vector<std::string>>& ret)
    {
        LOG(INFO) << "[RunSQL sql] " << sql;
        try
        {
            Session sess = client.getSession();
            Chrono chrono;
            RowResult res = sess.sql(sql.c_str()).execute();
            auto use_time = chrono.stop();
            auto rows = res.fetchAll();

            ret.clear();
            for (auto row : rows) {
                std::vector<std::string> fields;
                for (size_t i = 0; i < row.colCount(); ++i) {
                    auto field = row.get(i);
                    auto type = field.getType();
                    std::string s_val;
                    switch (type)
                    {
                    case mysqlx::abi2::r0::Value::UINT64:
                        s_val = std::to_string(field.get<uint64_t>());
                        break;
                    case mysqlx::abi2::r0::Value::INT64:
                        s_val = std::to_string(field.get<int64_t>());
                        break;
                    case mysqlx::abi2::r0::Value::FLOAT:
                        s_val = std::to_string(field.get<float>());
                        break;
                    case mysqlx::abi2::r0::Value::DOUBLE:
                        s_val = std::to_string(field.get<double>());
                        break;
                    case mysqlx::abi2::r0::Value::BOOL:
                        s_val = field.get<bool>() ? "1" : "0";
                        break;
                    case mysqlx::abi2::r0::Value::STRING:
                        s_val = field.get<std::string>();
                        break;
                    case mysqlx::abi2::r0::Value::RAW:
                        s_val = field.get<std::string>();
                        break;
                    default:
                        LOG(WARNING) << "[RunSQL warning] type=" << type;
                        break;
                    }
                    fields.push_back(s_val);
                }
                ret.push_back(std::move(fields));
            }
            LOG(INFO) << "[RunSQL res] use_time=" << use_time << "ms size=" << ret.size();
            return true;
        }
        catch (const std::exception& e)
        {
            LOG(ERROR) << "[RunSQL error] " << e.what();
            return false;
        }
    }
};
