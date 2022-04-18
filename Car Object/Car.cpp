#include "Car.h"

void Car::accelerate() {
	// indicate that the method was called
	cout << "\nAccelerating............\n";

	// add five to the speed
	speed += 5;
}

void Car::brake() {
	// indicate that the method was called
	cout << "\nBraking.................\n";

	// sub five to the speed
	speed -= 5;
}

void Car::accelerateFiveTimes() {
	for (int i = 0; i < 5; i++) {
		accelerate();
		cout << "Current speed: " << getSpeed();
	}
}

void Car::brakeFiveTimes() {
	for (int i = 0; i < 5; i++) {
		brake();
		cout << "Current speed: " << getSpeed();
	}
}