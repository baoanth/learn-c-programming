#include <CUnit/Basic.h>
#include "quadratic_equation_solver.c"

void testSolveQuadratic() {
    double x1, x2;

    // Test case for two distinct real roots
    solveQuadratic(1, -3, 2, &x1, &x2);
    CU_ASSERT_DOUBLE_EQUAL(x1, 2.0, 0.01);
    CU_ASSERT_DOUBLE_EQUAL(x2, 1.0, 0.01);

    // Test case for two equal and real roots
    solveQuadratic(1, -6, 9, &x1, &x2);
    CU_ASSERT_DOUBLE_EQUAL(x1, 3.0, 0.01);
    CU_ASSERT_DOUBLE_EQUAL(x2, 3.0, 0.01);

    // Test case for two complex roots
    solveQuadratic(1, 2, 5, &x1, &x2);
    CU_ASSERT_DOUBLE_EQUAL(x1, -1.0, 0.01);
    CU_ASSERT_DOUBLE_EQUAL(x2, 2.0, 0.01);
}

int main() {
    CU_initialize_registry();
    CU_pSuite suite = CU_add_suite("Quadratic Equation Solver Test Suite", NULL, NULL);
    CU_add_test(suite, "testSolveQuadratic", testSolveQuadratic);
    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();
    return 0;
}
