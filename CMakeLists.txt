cmake_minimum_required(VERSION 3.10)
project(MyTest)

include(FetchContent)

# 下载 GoogleTest
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/heads/main.zip
)

FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(test_sample test_sample.cpp main.cpp)
target_link_libraries(test_sample gtest gtest_main pthread)

include(GoogleTest)
gtest_discover_tests(test_sample)