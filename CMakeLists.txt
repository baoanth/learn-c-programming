cmake_minimum_required(VERSION 3.10)
project(MathOperationsTest)

# Add the GoogleTest submodule
# add_subdirectory(googletest)

# Add subdirectories
add_subdirectory(src)
add_subdirectory(tests)



# Link with GoogleTest and your project library
target_link_libraries(unit_tests gtest gtest_main mathoperator)
target_link_libraries(unit_tests mathoperator)
