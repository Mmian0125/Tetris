cmake_minimum_required(VERSION 2.8)
project(tetris)

set(CXX_STANDARD 11)

aux_source_directory(. src)  #检查目录所有文件放入目录中
add_executable(tetris ${src})