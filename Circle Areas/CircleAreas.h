#pragma once
class Circles {
private:
	const double PI = 3.14;
	const char COLUMN_DECAL = '|';
	const char ROW_DECAL = '-';
	// for random numbers
	const int MAX = 90;
	const int MIN = 10;

	int radii[10];
	double areas[10];
	double totalArea = 0;
	double averageArea;

public:
	void calcAreas();
	void calcTotalAndAverage();
	void displayTable();
};