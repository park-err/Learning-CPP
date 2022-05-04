#pragma once
#include "Person.h"
#include <fstream>
using std::fstream; using std::ios;

class WriteReadSort {
private:
public:
	void writePerson();
	void readPerson();
	void sortPerson();
	// void calcAvgWt();
};