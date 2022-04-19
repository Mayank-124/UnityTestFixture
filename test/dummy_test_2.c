#include "unity.h"
#include "unity_fixture.h"

TEST_GROUP(TestGroup2); 

TEST_SETUP(TestGroup2)
{
}

TEST_TEAR_DOWN(TestGroup2)
{
}

TEST(TestGroup2, Test1)
{
    TEST_ASSERT_EQUAL(10, 10);
}

TEST(TestGroup2, Test2)
{
    TEST_ASSERT_EQUAL(20, 20);
}

TEST(TestGroup2, Test3)
{
    TEST_ASSERT_EQUAL(30, 30);
}

/**************************************** Runner of TestGroup2 ****************************************/

TEST_GROUP_RUNNER(TestGroup2)
{
  RUN_TEST_CASE(TestGroup2, Test1);
  RUN_TEST_CASE(TestGroup2, Test2);
  RUN_TEST_CASE(TestGroup2, Test3);
}

/**************************************** Runner of TestGroup2 ****************************************/
