#include "CircleAreas.h"
#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
using namespace std;

void Circles::calcAreas() {
	unsigned seed;
	seed = time(0);
	srand(seed);

	for (int i = 0; i < 10; i++) {
		radii[i] = (rand() % (MAX - MIN + 1)) + MIN;
	}

	for (int i = 0; i < 10; i++) {
		areas[i] = PI * pow(radii[i], 2);
	}
}

void Circles::calcTotalAndAverage() {
	for (int i = 0; i < 10; i++) {
		totalArea += areas[i];
	}

	averageArea = totalArea;
	averageArea /= 4;

	cout << "\nTotal of areas: " << totalArea << endl;
	cout << "Average of areas: " << averageArea << endl;
}

void Circles::displayTable() {
	string row;
	string blankspace;
	row.assign(90, ROW_DECAL);
	blankspace.assign(20, ' ');

	cout << "Circle Area Table" << endl;
	cout << row << endl;

	// label row
	cout << "              " << "Radius (cm)";
	cout << "                 " << COLUMN_DECAL;
	cout << "                  " << "Area (cm^2)" << blankspace << endl;

	cout << row << endl;

	for (int i = 0; i < 10; i++) {
		cout << blankspace;
		
		cout << radii[i] << blankspace << COLUMN_DECAL << blankspace;
		cout << areas[i] << blankspace << endl;

		cout << row << endl;
	}
}