#include <gtest/gtest.h>

extern "C" {
    #include "libft/libft.h"
    #include <string.h>
}

TEST(StrchrTest, FoundInMiddle) {
    const char* str = "hello";
    EXPECT_EQ(ft_strchr(str, 'e' +256), str + 1);
}

TEST(StrchrTest, FoundAtBeginning) {
    const char* str = "world";
    EXPECT_EQ(ft_strchr(str, 'w'), str);
}

TEST(StrchrTest, FoundAtEnd) {
    const char* str = "abcde";
    EXPECT_EQ(ft_strchr(str, 'e'), str + 4);
}

TEST(StrchrTest, NullTerminator) {
    const char* str = "test";
    EXPECT_EQ(ft_strchr(str, '\0'), str + strlen(str));
}

TEST(StrchrTest, NotFound) {
    const char* str = "abcdef";
    EXPECT_EQ(ft_strchr(str, 'z'), nullptr);
}

TEST(StrchrTest, EmptyString) {
    const char* str = "";
    EXPECT_EQ(ft_strchr(str, 'a'), nullptr);
    EXPECT_EQ(ft_strchr(str, '\0'), str);  // '\0' 是有效字符
}

TEST(StrchrTest, MultipleOccurrences) {
    const char* str = "banana";
    EXPECT_EQ(ft_strchr(str, 'a'), str + 1);  // 只返回第一次出现的位置
}