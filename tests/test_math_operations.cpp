// test_math_operations.cpp
#include <gtest/gtest.h>
#include "math_operations.cpp"

TEST(MathOperationsTest, Addition) {
    EXPECT_EQ(add(2, 3), 8);
}

TEST(MathOperationsTest, Subtraction) {
    EXPECT_EQ(subtract(5, 3), 2);
}

TEST(MathOperationsTest, Multiplication) {
    EXPECT_EQ(multiply(2, 3), 6);
}

TEST(MathOperationsTest, Division) {
    EXPECT_EQ(divide(6, 3), 2);
}

/*int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    // Thực hiện các công việc trước khi chạy các test case nếu cần
    return RUN_ALL_TESTS();
}
*/