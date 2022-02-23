#include "PhoneBillSavings.h"
#include <iostream>
#include <string>
using namespace std;

void PhoneBillSavings::getUserInfo() {
	// get the users name
	cout << "What is your name?\n";
	getline(cin, customerName);

	cout << endl;

	// get the user's plan
	cout << "What is your plan? (please enter A, B, or C)\n";
	cin >> customerPlan;

	switch (customerPlan) {
	case 'A': cout << "You entered Plan A." << endl;
		break;
	case 'B': cout << "You entered Plan B." << endl;
		break;
	case 'C': cout << "You entered Plan C." << endl;
		break;
	default: cout << "You did not enter A, B, or C.";
	}

	cout << endl;

	// get the user's data usage
	cout << "How much data have you used in GB\n";
	cin >> customerDataUsed;
}

void PhoneBillSavings::planABill() {

	// if the data usage is over the plan limitations, add charges
	if (customerDataUsed > planABaseData) {
		aBill += ((customerDataUsed - planABaseData) * 8);
	}

}

void PhoneBillSavings::planBBill() {

	// if the data usage is over the plan limitations, add charges
	if (customerDataUsed > planBBaseData) {
		bBill += ((customerDataUsed - planBBaseData) * 8);
	}

}

void PhoneBillSavings::save() {

	// assign numbers to the savings array based on plan type
	switch (customerPlan) {
	case 'A': 
		savings[0] = aBill - bBill;
		savings[1] = aBill - cBill;
		break;
	case 'B':
		savings[0] = 0;
		savings[1] = bBill - cBill;
		break;
	default: 
		savings[0] = 0;		// default will be used in the case of 
		savings[1] = 0;
	}

}

void PhoneBillSavings::displaySavings() {

	switch (customerPlan) {
	case 'A':
		if (customerDataUsed > planABaseData) {
			for (int i = 0; i < 2; i++) {
				if (savings[i] > 0) {
					cout << "Save $" << savings[i];
				}

				if (i == 0) {
					cout << " by switching to plan B" << endl;
				}
				else if (i == 1) {
					cout << " by switching to plan C" << endl;
				}

			}
		}

		else {
			cout << "No savings could be found." << endl;
		}
		break;

	case 'B':
		if (customerDataUsed > planBBaseData) {
			for (int i = 0; i < 2; i++) {
				if (savings[i] > 0) {
					cout << "Save $" << savings[i] << " by switching to plan C" << endl;
				}

			}
		}

		else if (customerDataUsed < planBBaseData && customerDataUsed > planABaseData) {
			cout << "No savings could be found." << endl;
		}
		else if (customerDataUsed < planABaseData) {
			cout << "You can save $" << bBill - aBill << " by switching to plan A." << endl;
		}
		break;
	default:
		cout << "No savings could be found\n";
	}
	

}