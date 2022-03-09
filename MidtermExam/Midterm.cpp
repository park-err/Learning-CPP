#include "Midterm.h"
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

void Midterm::generateNumbers() {
	// get seed for random numbers
	unsigned seed;
	seed = time(0);
	srand(seed);

	// generate random numbers within range and assign them to numbers array
	for (int i = 0; i < NUM_ELEMENTS; i++) {
		numbers[i] = ((rand() % (MAX - MIN + 1)) + MIN);
	}
}

void Midterm::writeNumbers() {
	// open ofstream to numbers.txt for writing
	ofstream output(inputFileName);

	// makes the terminal easier to read
	cout << "numbers[" << NUM_ELEMENTS << "]:\n";

	for (int i = 0; i < NUM_ELEMENTS; i++) {
		// print the numbers in the array to the file and the terminal
		output << numbers[i] << endl;
		cout << numbers[i] << endl;
	}

	// close the file
	output.close();
	cout << endl;
}

void Midterm::readNumbers() {
	// open ifstream to numbers.txt for reading
	ifstream input(inputFileName);
	int num;	// temporary storage for numbers

	cout << "newNumbers[" << NUM_ELEMENTS << "]:\n";

	for (int i = 0; i < NUM_ELEMENTS; i++) {
		input >> num;
		// add 30 to the value and add it to newNumbers
		newNumbers[i] = num + 30;
		// display on terminal
		cout << newNumbers[i] << endl;
	}

	// close the file
	input.close();
	cout << endl;
}

void Midterm::doCalc() {
	for (int i = 0; i < NUM_ELEMENTS; i++) {
		// calc the areas for each circle and add to running total
		area[i] = 2 * PI * pow(newNumbers[i], 2);
		averageArea += area[i];
		// calc the circumferences for each circle and add to running total
		circumference[i] = 2 * PI * newNumbers[i];
		averageCircumference += circumference[i];
	}

	// divide the running totals by the amount of elements
	averageArea /= NUM_ELEMENTS;
	averageCircumference /= NUM_ELEMENTS;
}

void Midterm::displayAnswers() {
	// open ofstream to answers.txt for writing
	ofstream output(outputFileName);

	// format the outputs for the file and the terminal
	output << fixed << showpoint << setprecision(2);
	cout << fixed << showpoint << setprecision(2);
	cout << "Averages: \n";

	// output the averages to the terminal and the file
	output << "Average area: " << averageArea << endl;
	cout << "Average area: " << averageArea << endl;
	output << "Average circumference: " << averageCircumference;
	cout << "Average circumference: " << averageCircumference;
	
	// close the file
	output.close();
}