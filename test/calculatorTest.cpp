#include <gmock/gmock.h>
#include <gtest/gtest.h>

using namespace testing;

TEST(ADD,basicAdd)
{
    std::string result = Add("1", "2");
    ASSERT_THAT(result, Eq("3"));
}
int main(int argc, char **argv)
{
    testing::InitGoogleMock(&argc, argv);
    return RUN_ALL_TESTS();
}