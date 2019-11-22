project(demo)

#将文件名赋值给变量DEMO_SRCS
set(DEMO_SRCS
    add.cpp
)

#将DEMO_SRCS变量所代表的文件编译为共享库和静态库
add_library(demo SHARED ${DEMO_SRCS})
add_library(demo_static STATIC ${DEMO_SRCS})

#将静态库的名字输出为demo，这样就和共享库同名了，
#虽然它们的后缀名不一样，但是仍会冲突。
set_target_properties(demo_static PROPERTIES OUTPUT_NAME "demo")

#设置这两个东西可以去除因生成库名称一样而导致的冲突#设置这两个东西可以去除因生成库名称一样而导致的冲突
set_target_properties(demo PROPERTIES CLEAN_DIRECT_OUTPUT 1)
set_target_properties(demo_static PROPERTIES CLEAN_DIRECT_OUTPUT 1)
