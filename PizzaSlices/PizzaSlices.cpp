#include "PizzaSlices.h"
#include <iostream>
#include <cmath>
using namespace std;

double PizzaSlices::getDiameter() {
	double pizzaDiam;

	cout << "What is the pizza diameter?		";
	cin >> pizzaDiam;

	return pizzaDiam;
}

int PizzaSlices::getAttendees() {
	int attendees;

	cout << "How many people are attending the party?	";
	cin >> attendees;
	return attendees;
}

double PizzaSlices::calcArea(double d, double PI) {
	double r = d / 2, area = PI * pow(r, 2.0);
	return area;
}

double PizzaSlices::howManySlices(double pizzaArea) {
	double amountOfSlices = pizzaArea / 14.125;
	cout << "You can get " << floor(amountOfSlices) << " slices from this pizza" << endl;
	return amountOfSlices;
}

void PizzaSlices::howManyPizzas(double amountOfSlices, double attendees) {
	double slicesNeeded = attendees * 4, slicesCounter = amountOfSlices;
	int howManyPizzas = 1;

	while (slicesCounter < slicesNeeded) {
		howManyPizzas++;
		slicesCounter += amountOfSlices;
	}

	cout << "The amount of pizzas to order for a party of " << attendees <<
		" is " << ceil(howManyPizzas) << " pizzas. " << endl;
}

char PizzaSlices::keepGoing() {
	char keepGoing;
	cout << "Keep going? (y/n)		";
	cin >> keepGoing;
	return keepGoing;
}