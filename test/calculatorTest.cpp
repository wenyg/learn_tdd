#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include "calculator.hpp"

using namespace testing;

TEST(ADD,basicAdd)
{
    ASSERT_THAT(Add("1","2"), Eq("3"));
    ASSERT_THAT(Add("100","100"), Eq("200"));
}

TEST(ADD,AddBigNumber)
{
    ASSERT_THAT(Add("1234567887654321","8765432112345678"), Eq("9999999999999999"));
}

TEST(ADD,AddSuperBigNumber)
{
    std::stringstream num1, num2;
    std::stringstream result;
    for(int i=0; i<100; i++)
    {
        num1 << 1;
        num2 << 2;
        result << 3;
    }

    ASSERT_THAT(Add(num1.str(),num2.str()), Eq(result.str()));
}
int main(int argc, char **argv)
{
    testing::InitGoogleMock(&argc, argv);
    return RUN_ALL_TESTS();
}