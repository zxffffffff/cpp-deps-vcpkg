/****************************************************************************
** MIT License
**
** Author	: xiaofeng.zhu
** Support	: zxffffffff@outlook.com, 1337328542@qq.com
**
****************************************************************************/

#include "mysql/MySQLClient.h"
#include "gtest/gtest.h"

using namespace std::chrono_literals;

const char* host = "localhost";
int port = 33060;
const char* user = "root";
const char* pwd = "123456";
// database = 'test_db'
// table = 'test_table'

// DDL��Data Definition Language�����ݿⶨ������
TEST(MySQLClient, DDL) {
    MySQLClient client(host, port, user, pwd);

    // �������ݿ� schema - database
    ASSERT_TRUE(client.RunSQL("drop database test_db"));
    ASSERT_TRUE(client.RunSQL("create database test_db"));

    ASSERT_TRUE(client.RunSQL("use test_db"));

    // �������ݱ� collection - table
    std::string sql = R"(create table if not exists `test_table`(
            `id` int unsigned auto_increment,
            `title` varchar(100) not null,
            `author` varchar(40) not null,
            `submission_date` date,
            primary key ( `id` )
        )engine=innodb default charset=utf8;)";
    ASSERT_TRUE(client.RunSQL(sql));

    // ɾ�����ݱ�
    // DROP TABLE table_name ;
}

// DML��Data Manipulation Language�����ݲ�������
TEST(MySQLClient, DML) {
    MySQLClient client(host, port, user, pwd);
    ASSERT_TRUE(client.RunSQL("use test_db"));

    // �� insert
    std::stringstream ss;
    ss << "insert into test_table (title,author,submission_date) values";
    for (int i = 0; i < 10; ++i) {
        auto title = "\'title_" + std::to_string(i) + '\'';
        auto author = i % 2 ? "\'author_A\'" : "\'author_B\'";
        auto submission_date = "CURDATE()";
        if (i > 0)
            ss << ",";
        ss << " (" << title << "," << author << "," << submission_date << ")";
    }
    ss << ";";
    std::string sql = ss.str();
    ASSERT_TRUE(client.RunSQL(sql));

    // ɾ delete
    ASSERT_TRUE(client.RunSQL("delete from test_table where (id<=3);"));

    // �� update
    ASSERT_TRUE(client.RunSQL("update test_table set title='updated' where (id>=6);"));

    // �� select
    std::vector<std::vector<std::string>> ret;
    ASSERT_TRUE(client.RunSQL("select id,title,submission_date from test_table where (id>2 && id<8);", ret));
    ASSERT_EQ(ret.size(), 4);
    ASSERT_EQ(ret[0].size(), 3);

    ASSERT_EQ(ret[0][0], "4");
    ASSERT_EQ(ret[1][0], "5");
    ASSERT_EQ(ret[2][0], "6");
    ASSERT_EQ(ret[3][0], "7");

    ASSERT_EQ(ret[0][1], "title_3");
    ASSERT_EQ(ret[1][1], "title_4");
    ASSERT_EQ(ret[2][1], "updated");
    ASSERT_EQ(ret[3][1], "updated");

    // date ���ֽڱ��棬�޷�ֱ�Ӷ�ȡ string
    //ASSERT_EQ(ret[0][2], "2023-02-21");
    //ASSERT_EQ(ret[1][2], "2023-02-21");
    //ASSERT_EQ(ret[2][2], "2023-02-21");
    //ASSERT_EQ(ret[3][2], "2023-02-21");
}

// DCL��Data Control Language�����ݿ��������  ��Ȩ����ɫ���Ƶ�

// TCL��Transaction Control Language�������������
