# 工程名
set (PROJECT_NAME gtest-demo)
PROJECT(${PROJECT_NAME})

set(CMAKE_CXX_STANDARD 11) # Mac下需要指定C++标准
 
message("工程名: " ${PROJECT_NAME})
message("工程目录: " ${PROJECT_SOURCE_DIR}) 

# 最低版本需求
cmake_minimum_required(VERSION 3.6)
 
set(CMAKE_BUILD_TYPE "DEBUG")

#生成的可执行文件所在目录，PROJECT_BINARY_DIR即为外部编译目录，这里即为Build目录
set (EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

#生成的库文件所在目录
set (LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)
 
message("编译后可执行程序目录: " ${EXECUTABLE_OUTPUT_PATH})
message("编译后库程序文件目录: " ${LIBRARY_OUTPUT_PATH})

add_subdirectory(src)
add_subdirectory(uni)
 