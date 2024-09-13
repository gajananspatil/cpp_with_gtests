#include <add.h>
#include <multiply.h>
#include "gtest/gtest.h"

TEST(AddTest, AddPositive)
{

ASSERT_EQ(5 , add(2,3));
ASSERT_EQ(10 , add(7,3));

}

TEST(AddTest, AddNegative)
{

ASSERT_EQ(-5 , add(-2,-3));
ASSERT_EQ(-11 , add(-7,-4));

}

TEST(AddTest, AddMixed)
{

ASSERT_EQ(1 , add(-2,3));
ASSERT_EQ(-3 , add(-7,4));

}

TEST(AddTest, AddString)
{

ASSERT_EQ(std::string("Gajanan Patil") , add(std::string("Gajanan"), std::string("Patil") ) );
ASSERT_EQ(std::string("Sharayu Patil" ), add(std::string("Sharayu"), std::string("Patil") ) );

}

TEST(MultplyTest, MultiplayIntNegative)
{

ASSERT_EQ(6 , multiply(-2, -3));
ASSERT_EQ(28 , multiply(-7, -4));

}

TEST(MultplyTest, MultiplyDouble)
{

ASSERT_DOUBLE_EQ(6 , multiply(2.0, 3.0));
ASSERT_DOUBLE_EQ((double)29.11 , (double)multiply(7.1, 4.1));

}