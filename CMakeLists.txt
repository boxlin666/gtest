cmake_minimum_required(VERSION 3.10)
project(CMathTest)

include(FetchContent)

# 下载 GoogleTest
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/heads/main.zip
)

FetchContent_MakeAvailable(googletest)

enable_testing()

# 包含 C 语言的头文件
include_directories(${gtest_SOURCE_DIR}/include)

# 添加可执行文件
add_executable(test_math test_math.cpp src/math.c)

# 链接 Google Test 和 pthread
target_link_libraries(test_math gtest gtest_main pthread)

include(GoogleTest)
gtest_discover_tests(test_math)