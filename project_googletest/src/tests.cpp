#include <gmock/gmock.h>

using namespace ::testing;

TEST(Test, FailingDummyTest)
{
    ASSERT_THAT(true, Eq(false));
}

TEST(Test, PassingDummyTest)
{
    ASSERT_THAT(true, Eq(true));
}
