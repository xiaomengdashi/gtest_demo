#include <gtest/gtest.h>
#include "src/calc.cpp"
using namespace std;

TEST(Test_Calc, Add)
{
    int a = 0;
    //int a = Calc::Add(3, 5);
    EXPECT_TRUE(Calc::Add(2, 5) == 8);
    //EXPECT_TRUE(6==8);
}