#pragma once
#include <string>

class Midterm {
private:
	const int NUM_ELEMENTS = 20;
	const double PI = 3.1415;
	const int MAX = 200;
	const int MIN = 100;
	int numbers[20], newNumbers[20];
	double area[20], circumference[20], averageArea = 0, averageCircumference = 0;
	std::string inputFileName = "numbers.txt";
	std::string outputFileName = "answers.txt";
public:
	void generateNumbers();	// stores random numbers into an array
	void writeNumbers();	// writes numbers to a file numbers.txt
	void readNumbers();		// read numbers.txt and add 30 and store in newNumbers
	void doCalc();			// use numbers as radii to find area of circles
	void displayAnswers();	// write average area and average circumference to answers.txt
};