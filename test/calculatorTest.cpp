#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include "calculator.hpp"

using namespace testing;

TEST(ADD,basicAdd)
{
    srand(0);
    for(int i=0; i<100; i++)
    {
        int num1 = rand();
        int num2 = rand();
        int result = num1 + num2;

        std::string snum1 = std::to_string(num1);
        std::string snum2 = std::to_string(num2);
        std::string sresult = Add(snum1, snum2);
        ASSERT_THAT(sresult, Eq(std::to_string(result)));
    }
}
int main(int argc, char **argv)
{
    testing::InitGoogleMock(&argc, argv);
    return RUN_ALL_TESTS();
}