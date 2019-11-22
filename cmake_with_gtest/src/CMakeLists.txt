PROJECT(demo)

SET(DEMO_SRCS
        linklist.cpp
        )
#将文件名赋值给变量DEMO_SRCS

ADD_LIBRARY(demo SHARED ${DEMO_SRCS})
ADD_LIBRARY(demo_static STATIC ${DEMO_SRCS})
#将DEMO_SRCS变量所代表的文件编译为共享库和静态库

SET_TARGET_PROPERTIES(demo_static PROPERTIES OUTPUT_NAME "demo")
#将静态库的名字输出为demo，这样就和共享库同名了，
#虽然它们的后缀名不一样，但是仍会冲突。

SET_TARGET_PROPERTIES(demo PROPERTIES CLEAN_DIRECT_OUTPUT 1)
SET_TARGET_PROPERTIES(demo_static PROPERTIES CLEAN_DIRECT_OUTPUT 1)
#设置这两个东西可以去除因生成库名称一样而导致的冲突