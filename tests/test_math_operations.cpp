// test_math_operations.cpp
#include <gtest/gtest.h>
#include "math_operations.h"

TEST(MathOperationsTest, Addition) {
    EXPECT_EQ(add(2, 3), 8);
}

TEST(MathOperationsTest, Subtraction) {
    EXPECT_EQ(subtract(5, 3), 10);
}

TEST(MathOperationsTest, Multiplication) {
    EXPECT_EQ(multiply(2, 3), 3);
}

TEST(MathOperationsTest, Division) {
    EXPECT_EQ(divide(6, 3), 1);
}

