cmake_minimum_required(VERSION 3.10)
project(MathOperationsTest)

# Add the GoogleTest submodule
# add_subdirectory(googletest)

# Add subdirectories
add_subdirectory(src)
add_subdirectory(tests)



# Liên kết với thư viện Google Test và thư viện của bạn
target_link_libraries(unit_tests gtest gtest_main)
target_link_libraries(unit_tests mathoperator)
