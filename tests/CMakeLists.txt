cmake_minimum_required(VERSION 3.13)
enable_testing()
# Add your test source files
file(GLOB TEST_SOURCES "main.cpp")


# Specify the path to your project source files



# Add an executable target for your tests
add_executable(unit_tests ${TEST_SOURCES})

target_include_directories(unit_tests PRIVATE ../src)
