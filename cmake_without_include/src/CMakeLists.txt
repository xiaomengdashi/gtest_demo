cmake_minimum_required(VERSION 3.6)
# 打印当前目录
message("源程序工程当前目录: "  ${CMAKE_CURRENT_SOURCE_DIR})
 
# 头文件目录
include_directories(
    ./googletest-1.7.0/include
)

aux_source_directory(. DIR_SRCS)
add_library(src ${DIR_SRCS})
 
add_executable(src_sult ${DIR_SRCS})
 