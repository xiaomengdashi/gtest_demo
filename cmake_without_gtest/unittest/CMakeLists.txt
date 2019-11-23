# 设置需要编译的源文件
set(SOURCE_FILES add_unittest.cpp)

# 将cpp文件编译成可执行程序
add_executable(add_unittest ${SOURCE_FILES})

# 编译成可执行程序时需要链接的库，系统自带的gtest
target_link_libraries(add_unittest gtest gtest_main pthread ${PROJECT_NAME})
