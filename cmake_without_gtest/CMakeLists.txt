# 工程名
set(PROJECT_NAME demo)
PROJECT(${PROJECT_NAME})

cmake_minimum_required(VERSION 3.0)
set(CMAKE_CXX_STANDARD 11)

#头文件目录
include_directories(
	${PROJECT_SOURCE_DIR}/include
	/usr/local/include/
)

#链接库目录
link_directories(
	/usr/local/lib/
)

#生成的可执行文件所在目录，PROJECT_BINARY_DIR即为外部编译目录，这里即为build目录
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

#生成的库文件所在目录
set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)

#添加三个要编译的子文件夹
add_subdirectory(src)
add_subdirectory(test)
add_subdirectory(unittest)
