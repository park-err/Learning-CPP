#include "PhysicalProperties.h"
#include <iostream>
using namespace std;

int main() {
	// create vars
	BoilingAndFreezingPoints physical;
	char keepGoing = 'y';

	// start program
	cout << "Physcial Properties: Boiling and Freezing Points\n\n";
	cout << "--------------------------------------------\n\n";

	// create a keep going function
	do {
		physical.getUserTemp();

		physical.displayResults();

		cout << "\nKeep going? (y/n)\n";
		cin >> keepGoing;
	} while (keepGoing != 'n');

	// display an exit message
	cout << "\nThank You!\n";
}