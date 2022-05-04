#include "WriteReadSort.h"

void WriteReadSort::writePerson() {
	// to open file for input
	fstream inputFile("names.txt", ios::in);
	fstream weightsFile("people.dat", ios::out | ios::binary);
	fstream namesFile("people.txt", ios::out);
	// helper vars
	string f, l;
	double w;

	// open file
	if (!inputFile) {
		cout << "Error opening file";
	}

	while (!inputFile.eof()) {
		// take the first three inputs to the helper vars
		inputFile >> f;
		inputFile >> l;
		inputFile >> w;

		// create person object
		Person p(f, l, w);

		// write to files
		if (!weightsFile) {
			cout << "Error opening people.dat";
		}
		if (!namesFile) {
			cout << "Error opening people.txt";
		}

		namesFile << p.getFname() << " " << p.getLname() << " ";

		weightsFile << p.getWeight() << " ";
	}

	inputFile.close();
	namesFile.close();
	weightsFile.close();
}

void WriteReadSort::readPerson() {
	fstream weightsFile("people.dat", ios::in | ios::binary);
	fstream namesFile("people.txt", ios::in);
	// helper vars
	string f, l;
	double w;

	// test files to open
	if (!weightsFile) {
		cout << "Error opening people.dat";
	}
	if (!namesFile) {
		cout << "Error opening people.txt";
	}

	while (!namesFile.eof() || !weightsFile.eof()) {
		weightsFile >> w;	// taking inputs
		namesFile >> f;
		namesFile >> l;

		// displaying inputs on the terminal
		cout << "Weight: " << w << "\n";
		cout << "Name: " << f << " " << l << "\n";

		// FIXME there is a known bug where the iteration reads the end space as
		// part of the file so it will iterate one more time than it needs to
	}

	weightsFile.close();
	namesFile.close();
}

void WriteReadSort::sortPerson() {
	const int SIZE = 10;
	Person* person = new Person[SIZE];
	fstream weightsFile("people.dat", ios::in | ios::binary);
	fstream namesFile("people.txt", ios::in);
	// helper vars
	string f, l;
	double w;


	if (!weightsFile) {
		cout << "Error opening people.dat";
	}
	if (!namesFile) {
		cout << "Error opening people.txt";
	}

	while (!namesFile.eof() || !weightsFile.eof()) {
		for (int i = 0; i < 10; i++) {
			weightsFile >> w;
			namesFile >> f;
			namesFile >> l;
			person[i].setFname(f);
			person[i].setLname(l);
			person[i].setWeight(w);
			cout << person[i].getFname() << "\n";
		}
	}

	delete[] person;
	person = nullptr;
	weightsFile.close();
	namesFile.close();
}