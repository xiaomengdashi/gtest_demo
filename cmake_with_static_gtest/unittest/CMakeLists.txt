set(GTEST ./gtest-1.10.0)

# 包含GTest的头文件与库文件目录
include_directories(${GTEST}/include)
link_directories(${GTEST}/lib)

# 包含项目的头文件目录
include_directories(${PROJECT_SOURCE_DIR})

# 编译源文件
add_executable(add_test add_test.cpp)

#链接add_lib,这个是src项目生成的静态库
#链接${GTEST_LIBRARY},这个是gtest的库文件
#链接${CMAKE_THREAD_LIBS_INIT},即-lpthread
target_link_libraries(add_test add_lib gtest gtest_main pthread)