# 工程名
set (PROJECT_NAME gtest-demo)
project(${PROJECT_NAME})

set(CMAKE_CXX_STANDARD 11) # Mac下需要指定C++标准
 
cmake_minimum_required(VERSION 3.1.0)

# 需包含的头文件
include_directories(
    ${PROJECT_SOURCE_DIR}
    ./googletest-1.10.0/include
    ./googletest-1.10.0
    .
)

# 需包含的库文件
link_directories(
    ./googletest-1.10.0/lib
    )

add_executable(add_test add_test.cpp)
target_link_libraries(add_test gtest gtest_main)