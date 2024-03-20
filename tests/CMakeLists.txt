cmake_minimum_required(VERSION 3.10)

# Add your test source files
file(GLOB TEST_SOURCES "*.cpp")

# Add an executable target for your tests
add_executable(unit_tests ${TEST_SOURCES})

# Link with GoogleTest and your project library
target_link_libraries(unit_tests gtest gtest_main)

# Specify the path to your project source files
target_include_directories(unit_tests PRIVATE ../src)
target_link_libraries(unit_tests runMain)
