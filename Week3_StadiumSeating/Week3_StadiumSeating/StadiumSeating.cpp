#include "StadiumSeating.h"
#include <iostream>
#include <iomanip>
using namespace std;

void StadiumSeating::genRevenue(double PRICE_OF_A, double PRICE_OF_B, double PRICE_OF_C) {
	// name vars
	int soldA = 0, soldB = 0, soldC = 0;
	double totalRev = 0;

	// ask user for sales and define sold vars
	cout << "How many tickets were sold for Class A, B, and C? ";
	cin >> soldA >> soldB >> soldC;

	// calc totalRev var
	totalRev += PRICE_OF_A * soldA;
	totalRev += PRICE_OF_B * soldB;
	totalRev += PRICE_OF_C * soldC;

	// format cout for dollar output
	cout << showpoint << fixed << setprecision(2);

	// display the total revenue
	cout << "\nTotal income from game: $" << totalRev;
}