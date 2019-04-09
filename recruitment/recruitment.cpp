// recruitment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Room.h"

using namespace std;

int main()
{
	// Define dimensions
	double width;
	double length;
	double height;

	// Begin by taking input and calculating floor area
	cout << "Input width, length, height respectively" << endl;
	cin >> width >> length >> height;
	Room r(width, length, height);
	cout << "Floor area is: " << r.floor_area() << "m^2" << endl;
	cout << "Paint required: " << r.paint_required() << " litres" << endl;
	cout << "Room volume: " << r.volume() << "m^3" << endl;
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
