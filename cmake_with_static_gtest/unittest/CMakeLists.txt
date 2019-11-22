enable_testing()

set(GTEST ./gtest-1.10.0)

find_package(Threads) #查找Threads

#一些调试信息
message(gtest_include_dir=${GTEST_INCLUDE_DIR})
message(gtest_library=${GTEST_LIBRARY})
message(threads=${CMAKE_THREAD_LIBS_INIT})

#包含GTest的库文件
include_directories(${GTEST_INCLUDE_DIR})

#包含src的项目文件
include_directories(../src)

add_executable(gtest_simple_test main.cpp add_test.cpp)


#链接gtest_simple_lib,这个是src项目生成的静态库
#链接${GTEST_LIBRARY},这个是gtest的库文件
#链接${CMAKE_THREAD_LIBS_INIT},即-lpthread
target_link_libraries(gtest_simple_test PUBLIC gtest_simple_lib ${GTEST_LIBRARY} ${CMAKE_THREAD_LIBS_INIT})

add_test(NAME gtest_simple_test COMMAND gtest_simple_test)