#include "NameAge.h"
#include <iostream>
#include <string>
using namespace std;

void NameAge::interactWithUserV1() {
	// name vars: name
	string name;

	// ask user for input and attach it to name var
	cout << "Enter your name: ";
	cin >> name; cout << endl;

	// display personalized message
	cout << "Hello " << name << "!" << endl;
}

void NameAge::interactWithUserV2() {

	// name vars
	string name;
	int age;

	// develop loop that determines when to ask for age and when to ask for name
	// ^^ check requirements
	for (int i = 0; i < 8; i++) {
		if (i % 2 == 0) {	// if iteration is even ask for age
			cout << "Enter age: ";
			cin >> age;
			cout << "So you are " << age << " years old!" << endl;
		}

		else {
			cout << "Enter name: ";
			cin >> name;
			cout << "Hello " << name << "!" << endl;
			cout << endl << "-------------" << endl << endl;
		}
	}
}

void NameAge::interactWithUserV3() {
	string myName;
	int myAge;

	for (int i = 0; i < 5; i++) {
		cout << "What is your name and age? ";
		cin >> myName >> myAge;
		cout << "Hello " << myName << "! So you are " << myAge << " years old!" << endl;
		cout << endl << "-----------" << endl << endl;
	}
}