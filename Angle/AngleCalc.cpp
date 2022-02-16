#include "AngleCalc.h"
#include <iostream>
#include <cmath>
using namespace std;

double AngleCalc::getUserAngle(double userAngle) {
	cout << "What is the angle in radians: ";
	cin >> userAngle;
	cout << endl;
	return userAngle;
}

double AngleCalc::calcSin(double angle) {
	double sinAngle = sin(angle);
	return sinAngle;
}

double AngleCalc::calcCos(double angle) {
	double cosAngle = cos(angle);
	return cosAngle;
}

double AngleCalc::calcTan(double angle) {
	double tanAngle = tan(angle);
	return tanAngle;
}

bool AngleCalc::testCalc(double angle, double sinAngle, double cosAngle, double tanAngle) {
	bool correctCalc;

	if (sinAngle == sin(angle)) {
		correctCalc = true;
	}
	else {
		correctCalc = false;
	}

	if (cosAngle == cos(angle)) {
		correctCalc = true;
	}
	else {
		correctCalc = false;
	}

	if (tanAngle == tan(angle)) {
		correctCalc = true;
	}
	else {
		correctCalc = false;
	}

	return correctCalc;
}

void AngleCalc::printCalc(double angle, double sinAngle, double cosAngle, double tanAngle) {
	cout << "sin(" << angle << ") = " << sinAngle << endl;
	cout << "cos(" << angle << ") = " << cosAngle << endl;
	cout << "tan(" << angle << ") = " << tanAngle << endl;
}

char AngleCalc::keepGoing() {
	char keepGoing;
	cout << "Would you like to try another number? (y/n)	";
	cin >> keepGoing;
	return keepGoing;
}