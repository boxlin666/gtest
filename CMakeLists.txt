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

add_custom_target(
    build_sub_makefile ALL
    COMMAND ${CMAKE_MAKE_PROGRAM} -C ${CMAKE_CURRENT_SOURCE_DIR}/libft
    COMMENT "Building external project using its Makefile"
)

# 添加可执行文件
add_executable(test_libft test_libft.cpp)

add_dependencies(test_libft build_sub_makefile)
# 链接 Google Test 和 pthread
target_link_libraries(test_libft gtest gtest_main pthread ${CMAKE_CURRENT_SOURCE_DIR}/libft/libft.a)

include(GoogleTest)
gtest_discover_tests(test_libft)