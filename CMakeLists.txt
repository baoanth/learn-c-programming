cmake_minimum_required(VERSION 3.13)
project(MathOperationsTest)
include(CTest)

# Add the GoogleTest submodule
add_subdirectory(googletest)

enable_testing()

# Add subdirectories
add_subdirectory(src)
add_subdirectory(tests)


# Link with GoogleTest and your project library
target_link_libraries(unit_tests gtest gtest_main mathoperator)
target_link_libraries(unit_tests mathoperator)

add_test(NAME unit_tests COMMAND unit_tests)