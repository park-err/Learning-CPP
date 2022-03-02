#include "SummaryData.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
using namespace std;

int SummaryData::generateRN() {
	const int MIN = 5000;
	const int MAX = 6000;
	int r;

	// generate random number between 1000 and 2000
	r = (rand() % (MAX - MIN + 1)) + MIN;

	return r;
}

void SummaryData::writeRN() {
	// for random number
	unsigned seed;
	seed = time(0);
	srand(seed);

	int num;
	// fstream object for file streaming
	ofstream outputStream(outputFile);

	for (int i = 0; i < 50; i++) {
		// generate rand number
		num = generateRN();
		
		// write number to file
		outputStream << num << endl;
	}

	// close the file stream
	outputStream.close();

	cout << "Random numbers written to myData.txt" << endl;
}

void SummaryData::readRN() {

	ifstream inputStream(outputFile);

	for (int i = 0; i < 50; i++) {
		// reads numbers to array
		inputStream >> myNumbers[i];
	}

	inputStream.close();
	
	cout << "Array updated with random numbers" << endl;
}

void SummaryData::calcTA() {

	for (int i = 0; i < 50; i++) {
		// running total of the array
		total += myNumbers[i];
	}

	// calcs average using running total
	average = total / 50.0;

	cout << "Summary updated" << endl;
}

void SummaryData::writeTA() {
	ofstream outputStream(summaryFile);

	// create a summary.txt file to write the summary to
	outputStream << "Total value of 100 random numbers = " << total << endl;
	outputStream << "Average value of random numbers = " << average << endl;

	outputStream.close();

	cout << "Summary displayed in mySummary.txt" << endl;
}