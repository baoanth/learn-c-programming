cmake_minimum_required(VERSION 3.13)
project(MathOperationsTest)

# Add your source files
file(GLOB SOURCES "math_operations.cpp")

#Add library
add_library(mathoperator ${SOURCES})

# Add an executable target for your project
add_executable(runMain math_operations.cpp)


