#pragma once
#include <string>
class BoilingAndFreezingPoints {
private:
	// constant variables
	// boiling points
	const int ETHYL_ALCOHOL_BOILING_POINT = 172,
		MERCURY_BOILING_POINT = 676,
		OXYGEN_BOILING_POINT = -306,
		WATER_BOILING_POINT = 212;

	// freezing points
	const int ETHYL_ALCOHOL_FREEZING_POINT = -173,
		MERCURY_FREEZING_POINT = -38,
		OXYGEN_FREEZING_POINT = -362,
		WATER_FREEZING_POINT = 32;

	// substance names
	const std::string ETHYL_ALCOHOL = "Ethyl Alcohol",
		MERCURY = "Mercury",
		OXYGEN = "Oxygen",
		WATER = "Water";

	// degree symbol
	const int DEGREE = 248;

	// global variables
	int userTemp;
public:
	void getUserTemp();
	void displayResults();
	void boiling();
	void freezing();
};