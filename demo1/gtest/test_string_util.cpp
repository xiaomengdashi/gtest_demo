#include <gtest/gtest.h>
#include "src/string_util.cpp"

TEST(Test_StringUtil, ToInt)
{
    //int b=0;
    EXPECT_TRUE(StringUtil::ToInt("345") == 345);
}