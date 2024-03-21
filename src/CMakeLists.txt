cmake_minimum_required(VERSION 3.13)
project(MathOperationsTest)

add_subdirectory(my_lib)

# Configure the executable that links in my_lib
add_executable(runMain run_main.cpp)
target_link_libraries(runMain my_lib)