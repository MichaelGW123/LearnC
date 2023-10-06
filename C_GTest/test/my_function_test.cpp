#include <gtest/gtest.h>
extern "C"
{
#include "../src/my_function.h" // Include C headers from your project
}

// Write your Google Test test cases here
TEST(MyFunctionTestSuite, AddTest)
{
    int result = add(2, 3);
    ASSERT_EQ(result, 5);
}

// More test cases...
