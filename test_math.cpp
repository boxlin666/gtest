#include <gtest/gtest.h>

// 通过 extern "C" 声明 C 函数
extern "C" {
    #include "include/math.h"  // 引入 C 语言的头文件
}

// 测试加法函数
TEST(MathTest, AddTest) {
    EXPECT_EQ(add(3, 5), 8);  // 期望 3 + 5 = 8
    EXPECT_EQ(add(-1, 1), 0); // 期望 -1 + 1 = 0
    EXPECT_EQ(add(-3, -5), -8); // 期望 -3 + -5 = -8
}

// 测试减法函数
TEST(MathTest, SubtractTest) {
    EXPECT_EQ(subtract(10, 5), 5);  // 期望 10 - 5 = 5
    EXPECT_EQ(subtract(0, 0), 0);   // 期望 0 - 0 = 0
    EXPECT_EQ(subtract(5, 10), -5); // 期望 5 - 10 = -5
}
