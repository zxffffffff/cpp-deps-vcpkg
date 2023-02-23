/****************************************************************************
** MIT License
**
** Author	: xiaofeng.zhu
** Support	: zxffffffff@outlook.com, 1337328542@qq.com
**
****************************************************************************/

#include "mysql/MySQLClient.h"
#include "gtest/gtest.h"

namespace MySQLClientTest
{
    // ��������
    constexpr bool skip_test = 1;

    const char* host = "localhost";
    int port = 33060;
    const char* user = "root";
    const char* pwd = "123456";
    // database = 'test_db'
    // table = 'test_table'
}
using namespace MySQLClientTest;

// DDL��Data Definition Language�����ݿⶨ������
TEST(MySQLClient, DDL) {
    if (skip_test) return;

    MySQLClient client(host, port, user, pwd);

    // �������ݿ⣨schema��create database ...
    ASSERT_TRUE(client.RunSQL("create database test_db"));

    ASSERT_TRUE(client.RunSQL("use test_db"));

    // ������collection��create table ...
    std::string sql = R"(create table if not exists `test_table`(
            `id` int unsigned auto_increment,
            `title` varchar(100) not null,
            `author` varchar(40) not null,
            `submission_date` date,
            primary key ( `id` )
        )engine=innodb default charset=utf8;)";
    ASSERT_TRUE(client.RunSQL(sql));

    // ɾ���� drop table ...
    ASSERT_TRUE(client.RunSQL("drop table test_table"));

    // ɾ�����ݿ� drop database ...
    ASSERT_TRUE(client.RunSQL("drop database test_db"));
}

// DML��Data Manipulation Language�����ݲ�������
TEST(MySQLClient, DML) {
    if (skip_test) return;

    MySQLClient client(host, port, user, pwd);

    // ��ʼ��
    ASSERT_TRUE(client.RunSQL("create database test_db"));
    ASSERT_TRUE(client.RunSQL("use test_db"));
    std::string sql = R"(create table if not exists `test_table`(
            `id` int unsigned auto_increment,
            `title` varchar(100) not null,
            `author` varchar(40) not null,
            `submission_date` date,
            primary key ( `id` )
        )engine=innodb default charset=utf8;)";
    ASSERT_TRUE(client.RunSQL(sql));

    // �� insert into table ... values ...
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
    sql = ss.str();
    ASSERT_TRUE(client.RunSQL(sql));

    // ɾ delete from table where ...
    ASSERT_TRUE(client.RunSQL("delete from test_table where (id<=3);"));

    // �� update table set ... where ...
    ASSERT_TRUE(client.RunSQL("update test_table set title='updated' where (id>=6);"));

    // �� select ... from table where ...
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

    // ɾ�����ݿ�
    ASSERT_TRUE(client.RunSQL("drop database test_db"));
}

// DCL��Data Control Language�����ݿ��������  ��Ȩ����ɫ���Ƶ�
TEST(MySQLClient, DCL) {
    if (skip_test) return;

    MySQLClient client(host, port, user, pwd);

    /* �����û� create user ... identified by ...
     * �����û�'user_foo'��ֻ�Ǵ����û���û��Ȩ��
     * 'localhost'��ʾֻ���ڱ��ص�¼��'%'ͨ�����ʾ����Զ������
     * ������'123456'
     */
    ASSERT_TRUE(client.RunSQL(R"(create user 'user_foo'@'localhost' identified by '123456';)"));

    // ��Ȩ grant ... on ... to
    // todo ...

    /* ɾ���û� drop user ...
     */
    ASSERT_TRUE(client.RunSQL(R"(drop user 'user_foo'@'localhost';)"));
}

// TCL��Transaction Control Language�������������
TEST(MySQLClient, TCL) {
    if (skip_test) return;

    MySQLClient client(host, port, user, pwd);

    // ��ʼ��
    ASSERT_TRUE(client.RunSQL("create database test_db"));
    ASSERT_TRUE(client.RunSQL("use test_db"));
    std::string sql = R"(create table if not exists `test_table`(
            `id` int unsigned auto_increment,
            `title` varchar(100) not null,
            `author` varchar(40) not null,
            `submission_date` date,
            primary key ( `id` )
        )engine=innodb default charset=utf8;)";
    ASSERT_TRUE(client.RunSQL(sql));

    /* ACID��
     * ԭ���ԣ�Atomicity��   ����
     * һ���ԣ�Consistency�� binlog��¼��ṹ��������ָ�ʽ
     * �����ԣ�Isolation��   �������ָ��뼶��    ���  �����ض�  �ö�
     *                       - Read Uncommitted      1       1       1      ������
     *                       - Read Committed                1       1      ����
     *                       - Repeatable Read                       1      InnoDB Ĭ��ʹ��
     *                       - Serializable                                 
     * �־��ԣ�Durability��  ������־ redo log��undo log
     */

    std::thread t1([] {
        MySQLClient client(host, port, user, pwd);
        ASSERT_TRUE(client.RunSQL("use test_db"));

        // ����һ������ BEGIN��START TRANSACTION
        ASSERT_TRUE(client.RunSQL("begin;"));

        // ���ﱣ��㣬֧�ֶ�� SAVEPOINT 
        // ...

        // ִ��ҵ��
        std::stringstream ss;
        ss << "insert into test_table (title,author,submission_date) values";
        for (int i = 0; i < 1000; ++i) {
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

        // �ύ���� COMMIT �ع����� ROLLBACK
        ASSERT_TRUE(client.RunSQL("commit;"));

        // ���뼶�� SET TRANSACTION
    });

    std::thread t2([] {
        MySQLClient client(host, port, user, pwd);
        ASSERT_TRUE(client.RunSQL("use test_db"));

        // read
    });

    t1.join();
    t2.join();

    // ɾ�����ݿ�
    ASSERT_TRUE(client.RunSQL("drop database test_db"));
}

TEST(MySQLClient, DeadTest) {
    if (skip_test) return;

    MySQLClient client(host, port, user, pwd);

    // ��ʼ��
    ASSERT_TRUE(client.RunSQL("create database test_db"));
    ASSERT_TRUE(client.RunSQL("use test_db"));
    std::string sql = R"(create table if not exists `test_table`(
            `id` int unsigned auto_increment,
            `title` varchar(100) not null,
            `author` varchar(40) not null,
            `submission_date` date,
            primary key ( `id` )
        )engine=innodb default charset=utf8;)";
    ASSERT_TRUE(client.RunSQL(sql));

    // todo ...


    // ɾ�����ݿ�
    ASSERT_TRUE(client.RunSQL("drop database test_db"));
}
