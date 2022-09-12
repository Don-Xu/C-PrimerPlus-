cmake_minimum_required(VERSION 3.23)
project(CppPrimerPlus)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(CppPrimerPlus
        test.cpp
        test.h)
