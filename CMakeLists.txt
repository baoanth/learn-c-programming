cmake_minimum_required(VERSION 3.13)
project(MathOperationsTest)
include(CTest)



enable_testing()

# Add subdirectories
add_subdirectory(src)
add_subdirectory(tests)


# Link with GoogleTest and your project library
target_link_libraries(unit_tests gtest gtest_main)

target_link_libraries(unit_tests mathoperator)

add_test(NAME unit_tests COMMAND unit_tests)