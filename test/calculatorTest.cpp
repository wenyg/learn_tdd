#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include "calculator.hpp"

using namespace testing;

TEST(ADD,basicAdd)
{
    ASSERT_THAT(Add("1","2"), Eq("3"));
    ASSERT_THAT(Add("100","100"), Eq("200"));
    ASSERT_THAT(Add("-100","50"), Eq("-50"));
    ASSERT_THAT(Add("-100","-100"), Eq("-200"));

}
int main(int argc, char **argv)
{
    testing::InitGoogleMock(&argc, argv);
    return RUN_ALL_TESTS();
}