#include <gtest/gtest.h>

TEST(INPUT, ARGC) {
    //ASSERT_TRUE(BOOL_EXP)
    //ASSERT_FALSE(BOOL_EXP)
    //ASSERT_EQ(BOOL_EXP)
}

int main(int argc, char**argv) {

    testing::InitGoogleTest(&argc, argv);

    return RUN_ALL_TESTS();
}