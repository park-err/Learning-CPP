#include "PhysicalProperties.h"
#include <iostream>
using namespace std;

void BoilingAndFreezingPoints::getUserTemp() {
	cout << "Please enter the temperature:\n";
	cin >> userTemp;
}

void BoilingAndFreezingPoints::boiling() {
	if (userTemp >= ETHYL_ALCOHOL_BOILING_POINT) {
		cout << ETHYL_ALCOHOL << endl;
	}

	if (userTemp >= MERCURY_BOILING_POINT) {
		cout << MERCURY << endl;
	}

	if (userTemp >= OXYGEN_BOILING_POINT) {
		cout << OXYGEN << endl;
	}

	if (userTemp >= WATER_BOILING_POINT) {
		cout << WATER << endl;
	}
}

void BoilingAndFreezingPoints::freezing() {
	if (userTemp <= ETHYL_ALCOHOL_FREEZING_POINT) {
		cout << ETHYL_ALCOHOL << endl;
	}

	if (userTemp <= MERCURY_FREEZING_POINT) {
		cout << MERCURY << endl;
	}

	if (userTemp <= OXYGEN_FREEZING_POINT) {
		cout << OXYGEN << endl;
	}

	if (userTemp <= WATER_FREEZING_POINT) {
		cout << WATER << endl;
	}
}

void BoilingAndFreezingPoints::displayResults() {
	cout << "\nThese substances will freeze at " << userTemp <<
		static_cast<char>(DEGREE) << "F:\n";
	freezing();
	cout << "\nThese substances will boil at " << userTemp <<
		static_cast<char>(DEGREE) << "F:\n";
	boiling();
}