cmake_minimum_required(VERSION 3.10)
project(MathOperationsTest)

# Add your source files
file(GLOB SOURCES "*.cpp")

# Add an executable target for your project
add_executable(runMain math_operations.cpp)


