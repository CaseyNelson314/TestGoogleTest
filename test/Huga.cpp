#include <gtest/gtest.h>
#include <iostream>
#include <Udon/HogeHoge.hpp>


TEST(HelloTest, BasicAssertions)
{
	EXPECT_STRNE("hello", "world");
	EXPECT_EQ(7 * 6, 42);
}

TEST(HogeHogeTest, hoasdjasfjhakjdshfjkadjkfhj)
{
	EXPECT_EQ(0, Udon::return0());
}

