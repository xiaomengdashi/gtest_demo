add_executable(gtest_simple_run main.cpp add.cpp add.h)

add_library(gtest_simple_lib STATIC main.cpp add.cpp add.h)