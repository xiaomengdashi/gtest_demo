# googletest的源码

- googletest-1.10.0
  - 下载 googeltest源码
  - `git clone git@github.com:google/googletest.git`

- gtest-1.10.0
  - 下载 googeltest源码
  - 编译  
  ```
  mkdir build
  cd build
  cmake .. && make
  ```
  - 提取单元测试需要的**静态链接库文件**和**头文件**
  - 常用的文件为`googletest/include/`和`build/lib/`
  - libgtest_main.a 为 单元测试的main函数入口，可以在单元测试中自己写，也可以链接该库

- 系统目录下安装gtest
  - sudo cp -a include/gtest /usr/include
  - sudo cp -a lib/libgtest_main.a /lib/libgtest.a  /usr/local/lib/
  - sudo ldconfig -v | grep gtest   //查询是否链接成功
  - 如果看到下述输出，则表示成功
  ```
  libgtest_main.a  > libgtest_main.a
  libgtest.a     >    libgtest.a
  ```
