cmake_minimum_required(VERSION 3.6)
# 打印当前目录
message("测试工程当前目录: "  ${CMAKE_CURRENT_SOURCE_DIR})
 
# 需包含的头文件
include_directories(
    ${PROJECT_SOURCE_DIR}
    ./googletest-1.10.0/include
	./googletest-1.10.0
)
 
# 需包含的库文件
link_directories(
    ${PROJECT_BINARY_DIR}/lib
    ./googletest-1.10.0
)

add_subdirectory(./googletest-1.10.0)

find_package(Threads)

aux_source_directory(. DIR_SRC_TESTS)

add_executable(test_sult ${DIR_SRC_TESTS})

target_link_libraries(test_sult gtest gtest_main)

target_link_libraries(test_sult ${CMAKE_THREAD_LIBS_INIT})
 