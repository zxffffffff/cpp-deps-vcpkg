/****************************************************************************
** MIT License
**
** Author	: xiaofeng.zhu
** Support	: zxffffffff@outlook.com, 1337328542@qq.com
**
****************************************************************************/

#include "redis/RedisClient.h"
#include "gtest/gtest.h"

namespace RedisClientTest
{
    // ��������
    constexpr bool skip_test = 1;

    const char* host = "127.0.0.1";
    int port = 6379;
}
using namespace RedisClientTest;

TEST(RedisClient, ping_pong) {
    if (skip_test) return;

    RedisClient client(host, port);
    ReplyPtr p;

    ASSERT_TRUE(p = client.RunCmd("PING"));
    ASSERT_EQ(p->str, "PONG");
}

TEST(RedisClient, cmd) {
    if (skip_test) return;

    RedisClient client(host, port);
    ReplyPtr p;

    // ��ʼ��
    ASSERT_TRUE(p = client.RunCmd("KEYS test-key-*"));
    for (auto sub : p->arr) {
        ReplyPtr p2;
        ASSERT_TRUE(p2 = client.RunCmd("DEL " + sub->str));
        EXPECT_EQ(p2->str, "1");
    }

    // �� SET
    for (int i = 0; i < 5; ++i) {
        std::string k = "test-key-" + std::to_string(i);
        std::string v = "test-val-" + std::to_string(i);
        std::stringstream ss;
        ss << "SET " << k << " " << v;
        ASSERT_TRUE(p = client.RunCmd(ss.str()));
        EXPECT_EQ(p->str, "OK");
    }
    
    // ɾ DEL
    ASSERT_TRUE(p = client.RunCmd("DEL test-key-0"));
    EXPECT_EQ(p->str, "1");
    ASSERT_TRUE(p = client.RunCmd("DEL test-key-1"));
    EXPECT_EQ(p->str, "1");

    // �� SET��RENAME
    ASSERT_TRUE(p = client.RunCmd("RENAME test-key-2 test-key-renamed"));
    EXPECT_EQ(p->str, "OK");

    ASSERT_TRUE(p = client.RunCmd("SET test-key-3 test-val-changed"));
    EXPECT_EQ(p->str, "OK");

    // �� GET��EXISTS��KEYS��SCAN
    // ע�⣺KEYS ���ܵ��� Redis ����������ʹ�� SCAN �����ʽ�ı������м�
    ASSERT_TRUE(p = client.RunCmd("EXISTS test-key-0"));
    EXPECT_EQ(p->str, "0");
    ASSERT_TRUE(p = client.RunCmd("EXISTS test-key-1"));
    EXPECT_EQ(p->str, "0");
    ASSERT_TRUE(p = client.RunCmd("EXISTS test-key-2"));
    EXPECT_EQ(p->str, "0");
    ASSERT_TRUE(p = client.RunCmd("EXISTS test-key-3"));
    EXPECT_EQ(p->str, "1");
    ASSERT_TRUE(p = client.RunCmd("EXISTS test-key-renamed"));
    EXPECT_EQ(p->str, "1");

    ASSERT_TRUE(p = client.RunCmd("GET test-key-1"));
    EXPECT_EQ(p->str, "");
    ASSERT_TRUE(p = client.RunCmd("GET test-key-renamed"));
    EXPECT_EQ(p->str, "test-val-2");
    ASSERT_TRUE(p = client.RunCmd("GET test-key-3"));
    EXPECT_EQ(p->str, "test-val-changed");
    ASSERT_TRUE(p = client.RunCmd("GET test-key-4"));
    EXPECT_EQ(p->str, "test-val-4");

    ASSERT_TRUE(p = client.RunCmd("KEYS test-key-*"));
    EXPECT_EQ(p->arr.size(), 5 - 2);
}

TEST(RedisClient, TTL) {
    if (skip_test) return;

    RedisClient client(host, port);
    ReplyPtr p;

    // ��ʼ��
    ASSERT_TRUE(p = client.RunCmd("KEYS test-key-*"));
    for (auto sub : p->arr) {
        ReplyPtr p2;
        ASSERT_TRUE(p2 = client.RunCmd("DEL " + sub->str));
        EXPECT_EQ(p2->str, "1");
    }

    for (int i = 0; i < 10; ++i) {
        std::string k = "test-key-" + std::to_string(i);
        std::string v = "test-val-" + std::to_string(i);
        std::stringstream ss;
        ss << "SET " << k << " " << v;
        ASSERT_TRUE(p = client.RunCmd(ss.str()));
        EXPECT_EQ(p->str, "OK");
    }

    // ���� EXPIRE��PERSIST��TTL
    for (int i = 0; i < 10; ++i) {
        std::string k = "test-key-" + std::to_string(i);
        std::stringstream ss;
        ss << "EXPIRE " << k << " " << std::to_string(i);
        ASSERT_TRUE(p = client.RunCmd(ss.str()));
        EXPECT_EQ(p->str, "1");
    }

    for (int i = 0; i < 10; ++i) {
        std::string k = "test-key-" + std::to_string(i);
        std::stringstream ss;
        ss << "TTL " << k;
        ASSERT_TRUE(p = client.RunCmd(ss.str()));
        EXPECT_LE(std::stoi(p->str), i);
    }
}

TEST(RedisClient, dump_restore) {
    if (skip_test) return;

    // ���л� - �����л�
}
