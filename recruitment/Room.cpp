#include "pch.h"
#include "Room.h"
#include <iostream>

double width, length, height;

Room::Room(double w, double l, double h) {
	width = w;
	length = l;
	height = h;
}

double Room::Area() {
	return (width*length);
}