# 项目不带gtest源码，采用系统目录的gtest进行链接编译

- gtest文件夹 在 `/usr/local/include/`下
- libgtest.a libggtest_main.a  在 `/usr/local/lib`下

```
cd build
cmake .. && make
```