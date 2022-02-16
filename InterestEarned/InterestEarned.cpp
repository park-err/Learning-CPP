#include "InterestEarned.h"
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void InterestEarned::annualReport() {
	// name vars
	double interestRate, principal, interestAccumulated, finalBalance;
	int timesCompounded;

	// define and vars with user input
	cout << "What is the principal? ";
	cin >> principal;

	cout << "What is the annual interest rate: ";
	cin >> interestRate;

	cout << "How many times is the interest compounded: ";
	cin >> timesCompounded;

	// do calculations
	// final balance = principal * (1 + rate/t)^t
	finalBalance = principal * pow((1 + ((interestRate / 100) / timesCompounded)), timesCompounded);
	interestAccumulated = finalBalance - principal;

	// format
	cout << showpoint << fixed << setprecision(2);

	// display 
	cout << endl << "Report:" << endl << endl;
	cout << "Interest rate:			" << interestRate << "%" << endl;
	cout << "Times Compounded		" << timesCompounded << endl;
	cout << "Principal:			$" << principal << endl;
	cout << "Interest:			$" << interestAccumulated << endl;
	cout << "Final balance:			$" << finalBalance << endl;
}