#include <gtest/gtest.h>

int add(int a, int b);  // declare function

TEST(AddTest, HandlesPositive) {
    EXPECT_EQ(add(2, 3), 5);
}

TEST(AddTest, HandlesNegative) {
    EXPECT_EQ(add(-4, -6), -10);
}
