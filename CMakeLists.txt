cmake_minimum_required(VERSION 2.8)
project(tetris)

set(CMAKE_CXX_COMPILER "/opt/rh/devtoolset-7/root/usr/bin/g++")

aux_source_directory(. src)  #检查目录所有文件放入目录中
add_executable(tetris ${src})

find_package(Threads REQUIRED)
target_link_libraries(tetris PRIVATE Threads::Threads)