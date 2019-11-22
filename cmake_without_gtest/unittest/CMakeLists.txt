project(demo)

# 需包含的头文件目录
include_directories(${PROJECT_SOURCE_DIR})

# 查找gtest
find_package(gtest MODULE REQUIRED)

# 查找Threads
find_package(Threads)

#一些调试信息
message(gtest_include_dir=${GTEST_INCLUDE_DIR})
message(gtest_library=${GTEST_LIBRARY})
message(threads=${CMAKE_THREAD_LIBS_INIT})

#包含GTest的库文件
include_directories(${GTEST_INCLUDE_DIR})

# #包含src的项目文件
# include_directories(../src)

set(SOURCE_FILES add_unittest.cpp)

#将cpp文件编译成可执行程序
add_executable(add_unittest ${SOURCE_FILES})

#链接gtest_simple_lib,这个是src项目生成的静态库
#链接${GTEST_LIBRARY},这个是gtest的库文件
#链接${CMAKE_THREAD_LIBS_INIT},即-lpthread
target_link_libraries(add_unittest ${GTEST_LIBRARY} ${CMAKE_THREAD_LIBS_INIT} ${PROJECT_NAME})
