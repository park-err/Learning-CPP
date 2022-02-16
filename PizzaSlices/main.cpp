#include "PizzaSlices.h"
#include <iostream>
using namespace std;

int main() {
	const double PI = 3.1415926535;
	int attendees;
	double pizzaDiameter, pizzaArea, amountOfSlices;
	char keepGoing = 'y';
	PizzaSlices pizza;

	while (keepGoing == 'y') {
		pizzaDiameter = pizza.getDiameter();
		attendees = pizza.getAttendees();

		pizzaArea = pizza.calcArea(pizzaDiameter, PI);

		cout << endl << endl;

		amountOfSlices = pizza.howManySlices(pizzaArea);
		pizza.howManyPizzas(amountOfSlices, attendees);
		
		keepGoing = pizza.keepGoing();
	}

	cout << "Thank you.";
	
	return 0;
}