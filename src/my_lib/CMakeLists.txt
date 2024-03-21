cmake_minimum_required(VERSION 3.5)
project(MathOperationsTest)

# Configure a library that contains all C modules
set(HEADERS
    math_operations.h
    )

set(SOURCES 
    math_operations.cpp
    )

add_library(my_lib ${HEADERS} ${SOURCES})
set_target_properties(my_lib PROPERTIES LINKER_LANGUAGE CXX)