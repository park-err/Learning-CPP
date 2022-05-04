#pragma once
// import necessary libraries
#include <iostream>
using std::cout; using std::string;

class Person {
private:
	// initialize variables
	string fname;
	string lname;
	double weight;

public:
	// default
	Person() {
		setFname("first_name");
		setLname("last_name");
		setWeight(-1.0);
	}

	// overloaded constructor
	Person(string f, string l, double w) {
		setFname(f);
		setLname(l);
		setWeight(w);
	}

	// destructor
	~Person() {
		cout << "\nPerson object being destroyed. Done!\n";
	}

	// setter methods
	void setFname(string n) {
		fname = n;
	}
	void setLname(string n) {
		lname = n;
	}
	void setWeight(double n) {
		weight = n;
	}

	// getter methods
	string getFname() {
		return fname;
	}
	string getLname() {
		return lname;
	}
	double getWeight() {
		return weight;
	}
};