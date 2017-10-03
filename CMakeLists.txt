cmake_minimum_required(VERSION 3.8)
project(10_03Lec)

set(CMAKE_CXX_STANDARD 11)

#set(SOURCE_FILES arrays.cpp)
#set(SOURCE_FILES multiDArray.cpp)
#set(SOURCE_FILES funcArray.cpp)
#set(SOURCE_FILES structArray.cpp)
set(SOURCE_FILES arrayAsClassMember.cpp)

add_executable(10_03Lec ${SOURCE_FILES})