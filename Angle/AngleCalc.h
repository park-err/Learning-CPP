#pragma once
class AngleCalc {
private:
public:
	// methods
	double getUserAngle(double userAngle);
	double calcCos(double userAngle);
	double calcSin(double userAngle);
	double calcTan(double userAngle);
	bool testCalc(double userAngle, double sin, double cos, double tan);
	void printCalc(double userAngle, double sin, double cos, double tan);
	char keepGoing();
};