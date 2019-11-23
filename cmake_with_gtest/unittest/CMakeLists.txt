# 需包含的头文件目录
include_directories(${PROJECT_SOURCE_DIR})

#添加googletest子目录, 编译时生成libgtest.a静态库
add_subdirectory(googletest-1.10.0)

# 将googletest的头文件gtest.h 包含到include路径中
include_directories(${googletst_SOURCE_DIR}/include ${googletest_SOURCE_DIR})

find_package(Threads)

set(SOURCE_FILES add_unittest.cpp)

#将cpp文件编译成可执行程序
add_executable(add_unittest ${SOURCE_FILES})

#编译成可执行程序时需要链接的库
target_link_libraries(add_unittest gtest gtest_main pthread ${PROJECT_NAME})
