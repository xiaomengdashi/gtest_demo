project(demo)
#工程名

cmake_minimum_required(VERSION 2.8)
#最低版本号

include_directories(
	${PROJECT_SOURCE_DIR}/include
)
#头文件目录

link_directories(
	${PROJECT_SOURCE_DIR}/lib
)
#链接库目录

SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
#生成的可执行文件所在目录，PROJECT_BINARY_DIR即为外部编译目录，这里即为Build目录

SET(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)

add_subdirectory(src)
add_subdirectory(tests)
add_subdirectory(unittests)
#添加三个要编译的子文件夹