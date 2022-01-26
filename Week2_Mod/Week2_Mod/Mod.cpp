#include <iostream>
#include "Mod.h"
using namespace std;

void Mod::mod() {

	// name and define variables
	int n1 = 5, n2 = 2;

	// this will return 2 because the data type is int
	cout << n1 << " divided by " << n2 << " = " << (n1 / n2) << endl;

	// this will return 1 because it is the remainder
	cout << n1 << " divide by " << n2 << " has a remainder of " << (n1 % n2) << endl;
	
}

void Mod::evenOdd() {

	// name and define variables
	int n1 = 17, n2 = 22;

	// find if number 1 is odd or even
	if (n1 % 2 == 1) {
		cout << endl << n1 << " is odd." << endl;
	}
	else {
		cout << endl << n1 << " is even." << endl;
	}

	// find if number 2 is odd or even
	if (n2 % 2 == 1) {
		cout << endl << n2 << " is odd." << endl;
	}
	else {
		cout << endl << n2 << " is even." << endl;
	}
}