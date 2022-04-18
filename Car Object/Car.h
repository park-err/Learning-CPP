#pragma once
#include <iostream>
#include <string>
using std::cout;

class Car {
private:
	int year;
	std::string make;
	int speed;
public:
	// constructor
	Car(int y, std::string m) {
		year = y;
		make = m;
		speed = 0;
	}

	// accessors
	int getYear() {
		return year;
	}

	std::string getMake() {
		return make;
	}

	int getSpeed() {
		return speed;
	}

	// accelerate and brake methods
	void accelerate();
	void brake();

	// functionality methods
	void accelerateFiveTimes();
	void brakeFiveTimes();
};