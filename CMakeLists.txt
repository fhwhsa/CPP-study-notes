cmake_minimum_required(VERSION 3.0)

project(practice)

include_directories(header)

set(SRC_LIST source/myComplex.cpp)

add_executable(main main.cpp ${SRC_LIST})