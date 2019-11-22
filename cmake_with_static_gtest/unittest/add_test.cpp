#include "gtest/gtest.h"

#include "add.h"

TEST(blaTest, test1)
{

    EXPECT_EQ(add(0, 0), 0);

    EXPECT_EQ(add(10, 10), 20);

    EXPECT_EQ(add(40, 65), 100);
}