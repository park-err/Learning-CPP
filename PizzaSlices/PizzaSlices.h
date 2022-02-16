#pragma once
class PizzaSlices {
public:
	double getDiameter();
	int getAttendees();
	double calcArea(double pizzaDiameter, double PI);
	double howManySlices(double pizzaArea);
	void howManyPizzas(double amountOfSlices, double attendees);

	char keepGoing();
};