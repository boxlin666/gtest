#include <gtest/gtest.h>

// 通过 extern "C" 声明 C 函数
extern "C" {
    #include "libft/libft.h"  // 引入 C 语言的头文件
}

// 测试加法函数
TEST(MathTest, StrlenTest) {
    EXPECT_EQ(ft_strlen("12345"), 5);
}

