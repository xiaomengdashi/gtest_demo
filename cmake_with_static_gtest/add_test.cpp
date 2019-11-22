#include <gtest/gtest.h>
#include "add.h"

using namespace std;

TEST(Test_Calc, Add)
{
    int a = 0;
    EXPECT_TRUE(add(2, 5) == 7);
}