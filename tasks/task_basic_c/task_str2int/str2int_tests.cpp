// NOLINTBEGIN
#include <gtest/gtest.h>
// NOLINTEND
#include "str2int.h"

<<<<<<< HEAD
TEST(str2int, BasicTest)
{
	EXPECT_EQ(str2int("0"), 0);
=======
TEST(str2int, BasicTest) {
    EXPECT_EQ(str2int("0"), 0);
>>>>>>> d0aae5aa09ea330c5b7a4362ae24fa27e5604db8
}

TEST(str2int, BasicTestZero)
{
	EXPECT_EQ(str2int("+0"), 0);
}

TEST(str2int, BasicTestZeroNext)
{
	EXPECT_DEATH(str2int("-"), "");
}

TEST(str2int, BasicTestEmptyString)
{
	EXPECT_DEATH(str2int(""), "");
}

TEST(str2int, BasicTestNumbers)
{
	EXPECT_EQ(str2int("-5"), -5);
	EXPECT_EQ(str2int("-66"), -66);
	EXPECT_EQ(str2int("-123"), -123);
	EXPECT_EQ(str2int("2147483647"), 2147483647);
	EXPECT_EQ(str2int("-2147483648"), -2147483648);
}

TEST(str2int, BasicTestDeath)
{
	EXPECT_DEATH(str2int("-2147483649"), "");
	EXPECT_DEATH(str2int("2147483648"), "");
	EXPECT_DEATH(str2int("214748364999"), "");
}
