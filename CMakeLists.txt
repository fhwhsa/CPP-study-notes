cmake_minimum_required(VERSION 3.0)

project(practice)

include_directories(header)

set(SRC_LIST source/myComplex.cpp source/myString.cpp source/myFraction.cpp)

add_executable(main main.cpp ${SRC_LIST})

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall")

set(CMAKE_BUILD_TYPE Debug)