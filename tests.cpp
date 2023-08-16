#include "util.h" // Dein Code
#include <gtest/gtest.h>
#include <iostream>

using namespace std;

TEST(SumTest, PositiveNumbers) {
    EXPECT_EQ(sum(3, 5), 8);
}

TEST(SumTest, NegativeNumbers) {
    EXPECT_EQ(sum(-3, -5), -8);
}

TEST(SumTest, MixedNumbers) {
    EXPECT_EQ(sum(5, -3), 2);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
