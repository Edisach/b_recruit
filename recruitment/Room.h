#pragma once
class Room
{
public:
	Room() = default;
	Room(double w, double l, double h) : width(w), length(l), height(h) {};
	double floor_area();
	double volume();
	double paint_required();
private:
	const double PAINTPERM2 = 10; // According to B&Q
	double wall_area();
protected:
	double width, length, height;
};

