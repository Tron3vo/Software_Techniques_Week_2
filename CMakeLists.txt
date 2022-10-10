cmake_minimum_required(VERSION 3.22)
project(Software_Techniques_Week_2)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Software_Techniques_Week_2
        addition.cpp
        addition.h
        main.cpp
        multiplication.cpp
        multiplication.h
        operation.h
        subtraction.cpp
        subtraction.h)
