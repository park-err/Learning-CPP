#include "SalesTax.h"
#include <iostream>
#include <iomanip> // for setprecision()
using namespace std;

// Qn3 Sales tax chapter 2

void SalesTax::doCalculations(){
	
	// name and define variables
	double purchasePrice = 95.0,
		stateTax = 6.5 / 100,
		countyTax = 2.0 / 100,
		totalTax = (stateTax * purchasePrice) + (countyTax * purchasePrice);

	// calculate and display the purchase price
	cout << showpoint << fixed << setprecision(2);	// two decimals for entire cout
	cout << "Purchase Price: $" << purchasePrice << endl;
	cout << "Total Tax: $" << totalTax << endl;
	cout << "Total of purchase: $" << (purchasePrice += totalTax) << endl;


	// showpoint tells the program to display the decimal no matter what
	// fixed sets the entire cout to follow this formula
	// setprecision() determines how many decimal places in the output
}