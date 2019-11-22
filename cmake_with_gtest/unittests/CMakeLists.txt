PROJECT(demo)
ADD_SUBDIRECTORY(googletest-1.10.0)
#添加gtest子目录

SET(GTEST_ROOT ${PROJECT_SOURCE_DIR}/googletest-1.10.0)
#将gtest目录赋值给变量GTEST_ROOT变量

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
 

ADD_EXECUTABLE(linklist_unittest linklist_unittest.cpp)
#将cpp文件编译成可执行程序

TARGET_LINK_LIBRARIES(linklist_unittest gtest gtest_main demo)
#编译成可执行程序时需要链接的库