cmake_minimum_required(VERSION 3.13)

# Add your test source files
file(GLOB TEST_SOURCES "*.cpp")


# Specify the path to your project source files
target_include_directories(unit_tests PRIVATE ../src)


# Add an executable target for your tests
add_executable(unit_tests ${TEST_SOURCES})

