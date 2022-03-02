#pragma once
#include <string>
class SummaryData {
private:
	int myNumbers[50];
	int total = 0;
	double average;
	std::string outputFile = "myData.txt";
	std::string summaryFile = "mySummary.txt";

public:
	int generateRN();		// generate random numbers
	void writeRN();			// write random numbers into txt file
	void readRN();			// read random numbers into an array
	void calcTA();			// calc the total and average
	void writeTA();			// write the total and average into txt file
};