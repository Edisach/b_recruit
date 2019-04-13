#include "pch.h"
#include "../recruitment/Room.h"
#include "../recruitment/Room.cpp"

TEST(RoomTest, FloorArea) {
	Room r1(1, 1, 1);
	Room r2(2, 2, 2);
	EXPECT_EQ(1, r1.floor_area());
	EXPECT_EQ(4, r2.floor_area());
}

TEST(RoomTest, PaintArea) {
	Room r1(1, 1, 1);
	Room r2(2, 2, 2);
	EXPECT_EQ(40, r1.paint_required());
	EXPECT_EQ(160, r2.paint_required());
}

TEST(RoomTest, Volume) {
	Room r1(1, 1, 1);
	Room r2(2, 2, 2);
	EXPECT_EQ(1, r1.volume());
	EXPECT_EQ(8, r2.volume());
}