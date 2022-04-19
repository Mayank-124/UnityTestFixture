#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(TestGroup1); 

TEST_SETUP(TestGroup1)
{
}

TEST_TEAR_DOWN(TestGroup1)
{
}

TEST(TestGroup1, Test1)
{
    TEST_ASSERT_EQUAL(10, 10);
}

TEST(TestGroup1, Test2)
{
    TEST_ASSERT_EQUAL(20, 20);
}

TEST(TestGroup1, Test3)
{
    TEST_ASSERT_EQUAL(30, 30);
}

/**************************************** Runner of TestGroup1 ****************************************/

TEST_GROUP_RUNNER(TestGroup1)
{
  RUN_TEST_CASE(TestGroup1, Test1);
  RUN_TEST_CASE(TestGroup1, Test2);
  RUN_TEST_CASE(TestGroup1, Test3);
}
 
/**************************************** Runner of TestGroup1 ****************************************/

