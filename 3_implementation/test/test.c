#include "unity.h"
#include "add_num_h_"

void setUp()
{
}

void tearDown()
{
    
}

void test_sum()
{
    int n1;
    int n2;
    int actual_result;
    TEST_ASSERT_EQUAL(sum(n1,n2),actual_result);
}
int test_main()
{
    UNITY_BEGIN();
     RUN_TEST(test_sum);
     return UNITY_END();
}
