cmake_minimum_required(VERSION 3.13)
project(MathOperationsTest)

include(${CMAKE_CURRENT_SOURCE_DIR}/my_lib/MyLib_AllTests.cmake)

set(GTEST_MAIN
        gtest_main.cpp
)

add_executable(runUnitTests ${GTEST_MAIN} ${MYLIB_UNIT_TESTS_SOURCE_FILES})

# set_target_properties(runUnitTests)
target_link_libraries(runUnitTests my_lib gtest gtest_main pthread)