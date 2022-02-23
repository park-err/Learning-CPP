#include "PhoneBillSavings.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	PhoneBillSavings s;
	char keepGoing = 'y';
	do {
		s.getUserInfo();
		s.planABill();

		s.save();
		s.displaySavings();

		cout << "Keep going (y or n)\n";
		cin >> keepGoing;
	} while (keepGoing != 'n');

	return 0;
}