#include "pch.h"
#include "../recruitment/Room.h"

class RoomTest : public ::testing::Test{
protected:
	RoomTest() {};
	void SetUp() override {
		Room r1(1, 1, 1);
	}

	Room r1;
};


TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

TEST_F(RoomTest, FloorArea) {
	EXPECT_EQ(r1.floor_area(), 1);
}