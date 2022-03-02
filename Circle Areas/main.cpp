#include "CircleAreas.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	Circles c;

	cout << fixed << showpoint << setprecision(2);
	c.calcAreas();
	c.displayTable();
	c.calcTotalAndAverage();
	return 0;
}