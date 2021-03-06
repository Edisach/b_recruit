// recruitment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Room.h"
#include <sstream>

using namespace std;

int main(int argc, char **argv)
{
	// Define dimension array
	double dims[3]; // width, length, height
	Room *r = nullptr;

	// If command line input given
	if (argc == 4) {
		for (int i = 1; i < 4; ++i) {
			std::stringstream s_arg(argv[i]);
			s_arg >> dims[i];
		}
		r = &Room(dims[1], dims[2], dims[3]);
	}
	// Else begin by taking input and calculating floor area
	else {
		cout << "Input width, length, height respectively" << endl;
		cin >> dims[1] >> dims[2] >> dims[3];
		r = &Room(dims[1], dims[2], dims[3]);
	}
	// Print calculated data
	cout << "Floor area is: " << r->floor_area() << "m^2" << endl;
	cout << "Paint required: " << r->paint_required() << " litres" << endl;
	cout << "Room volume: " << r->volume() << "m^3" << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
