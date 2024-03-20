cmake_minimum_required(VERSION 3.10)
project(MathOperationsTest)

# Add the GoogleTest submodule
# add_subdirectory(googletest)

# Add subdirectories
add_subdirectory(src)
add_subdirectory(tests)


# Thêm các tệp nguồn của dự án
file(GLOB SOURCES "*.cpp")

# Tạo target cho ứng dụng của bạn
add_executable(mathoperator ${SOURCES})

# Thêm các test case vào target
add_executable(unit_tests test_math_operations.cpp)

# Liên kết với thư viện Google Test và thư viện của bạn
target_link_libraries(unit_tests gtest gtest_main)
target_link_libraries(unit_tests mathoperator)
