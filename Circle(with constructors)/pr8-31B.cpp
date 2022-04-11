// This version of Program 8-30 demonstrates how the default
// constructor initializes values for each object in an array.
#include <iostream>
#include <iomanip>
#include "Circle.h"              // Circle class declaration file
using namespace std;

const int NUM_CIRCLES = 4;

int main()
{	
	Circle circle[NUM_CIRCLES];  // Define an array of Circle objects
	   	              
	// Use a loop to initialize the radius of each object
	for (int index = 0; index < NUM_CIRCLES; index++)
	{   double r;
		int x, y;
		cout << "Enter the radius for circle " << (index+1) << ": ";
		cin  >> r;
		cout << "Enter the x-coordinate for circle " << (index + 1) << ": ";
		cin >> x;
		cout << "Enter the y-coordinate for circle " << (index + 1) << ": ";
		cin >> y;
		circle[index].setRadius(r);
		circle[index].setXcoord(x);
		circle[index].setYcoord(y);
	}
	
	// Use a loop to get and print out the area of each object
	cout << fixed << showpoint << setprecision(2);
	cout << "\nHere are the areas of the " << NUM_CIRCLES 
         << " circles.\n";
	for (int index = 0; index < NUM_CIRCLES; index++)
	{  cout << "circle " << (index+1) << setw(10) << 
		"radius: " << circle[index].getRadius() << setw(10) << 
		"center: (" << circle[index].getXcoord() << " , " << 
		circle[index].getYcoord() << ")" << setw(10) << 
		"area: " << circle[index].findArea() << endl;
	}
	return 0;
}
