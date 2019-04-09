#include "pch.h"
#include "Room.h"
#include <iostream>

double Room::floor_area() {
	return (width*length);
}

double Room::volume()
{
	return (width*length*height);
}

double Room::paint_required()
{
	return PAINTPERM2 * wall_area();
}

double Room::wall_area()
{
	return 2 * (width * height + height * length);
}
