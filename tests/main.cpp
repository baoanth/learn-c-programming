#include <gtest/gtest.h>

// Include your test files here
#include "test_math_operations.h"

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}