#include "Car.h"

int main() {
	cout << "Welcome to Car Class!\n\n";

	cout << "creating a car class with year 2014 and make Kia\n" <<
		"..........................\n";

	Car kia(2014, "Kia");
	kia.accelerateFiveTimes();
	kia.brakeFiveTimes();
	cout << "\n\nEnd of tests for " << kia.getMake() << " " << kia.getYear() << "\n";

	cout << "\ncreating a car class with year 2003 and make Honda\n" <<
		"..........................\n";

	Car honda(2003, "Honda");
	honda.accelerateFiveTimes();
	honda.brakeFiveTimes();
	cout << "\n\nEnd of tests for " << honda.getMake() << " " << honda.getYear() << "\n";

	return 0;
}