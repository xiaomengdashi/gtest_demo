#include "add.h"
#include "gtest/gtest.h"

TEST(AddTest, AddTure)
{
    EXPECT_TRUE(3 == add(1, 2));
    EXPECT_TRUE(4 == add(1, 2));
}

TEST(AddTest, AddFault)
{
    EXPECT_TRUE(-4 == add(-2, -2));
}

// int main(int argc, char **argv)
// {
//     testing::InitGoogleTest(&argc, argv);
//     return RUN_ALL_TESTS();
// }