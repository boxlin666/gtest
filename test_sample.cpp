#include <gtest/gtest.h>

// 一个简单的测试函数
TEST(SampleTest, AddTest) {
    int a = 2;
    int b = 3;
    EXPECT_EQ(a + b, 5);  // 期望 a + b 的结果是 5
}

TEST(SampleTest, SubtractTest) {
    int a = 5;
    int b = 3;
    EXPECT_EQ(a - b, 2);  // 期望 a - b 的结果是 2
}
