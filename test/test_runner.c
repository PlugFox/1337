#include "unity/unity.h"

#include "../lib/sum.h"
// #include "../lib/src/sum.c"

void setUp(void) {
    // Empty function since we don't need any setup for the tests in this example
}

void tearDown(void) {
    // Empty function since we don't need any teardown for the tests in this
    // example
}

void test_sum(void) {
    TEST_ASSERT_EQUAL_INT(7, 7);
    TEST_ASSERT_EQUAL_INT(7, sum(3, 4));
    TEST_ASSERT_EQUAL_INT(0, sum(-5, 5));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_sum);
    return UNITY_END();
}
