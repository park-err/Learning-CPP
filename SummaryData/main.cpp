#include "SummaryData.h"

// this program will generate 50 random numbers between 5000 and 6000
// save these into a text file called myData.txt
// read the 100 random numbers into an array called myNumbers
// find the total and average of these 100 numbers
// write the total and average into a text file called mySummary.txt

int main() {
	SummaryData sd;
	sd.writeRN();
	sd.readRN();
	sd.calcTA();
	sd.writeTA();
	return 0;
}