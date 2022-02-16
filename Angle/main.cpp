#include "AngleCalc.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	// global vars
	AngleCalc angle;
	double userAngle = 0;
	double sinAngle = 0;
	double cosAngle = 0;
	double tanAngle = 0;
	char keepGoing = 'y';

	// format cout
	cout << showpoint << fixed << setprecision(4);

	while (keepGoing == 'y') {
		// call methods
		userAngle = angle.getUserAngle(userAngle);
		sinAngle = angle.calcSin(userAngle);
		cosAngle = angle.calcCos(userAngle);
		tanAngle = angle.calcTan(userAngle);
		
		if (angle.testCalc(userAngle, sinAngle, cosAngle, tanAngle)) {
			angle.printCalc(userAngle, sinAngle, cosAngle, tanAngle);
		}
		else {
			cout << "That number did not work." << endl;
		}

		keepGoing = angle.keepGoing();
	}

	cout << endl << "----------------------------" << endl;
	cout << "Thank you" << endl;
}	