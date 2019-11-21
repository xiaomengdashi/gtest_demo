# 工程名
set (PROJECT_NAME gtest-demo)
PROJECT(${PROJECT_NAME})

set(CMAKE_CXX_STANDARD 11) # Mac下需要指定C++标准
 
message("工程名: " ${PROJECT_NAME})
message("工程目录: " ${PROJECT_SOURCE_DIR}) 
 
 
# 最低版本需求
cmake_minimum_required(VERSION 3.6)
 
set(CMAKE_BUILD_TYPE "DEBUG")

set (EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

set (LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)
 
message("编译后可执行程序目录: " ${EXECUTABLE_OUTPUT_PATH})
message("编译后库程序文件目录: " ${LIBRARY_OUTPUT_PATH})

add_subdirectory(src)
add_subdirectory(gtest)
 