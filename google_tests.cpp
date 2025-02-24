#include <gtest/gtest.h>

int add(int a, int b) {
    return a + b;
}

TEST(add, positive) {
    ASSERT_EQ(10, add(5, 5));
}

TEST(add, negative) {
    ASSERT_EQ(-10, add(-5, -5));
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    RUN_ALL_TESTS();
    return 0;
}