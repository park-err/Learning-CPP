#include "ASCIIAlph.h"
#include <iostream>
using namespace std;

void ASCIIAlph::alphabet() {
	int capNums[26];
	int lowNums[26];

	cout << "ASCII Alphabet: " << endl;
	cout << "Capital Letters: " << endl;
	int j = 65;
	for (int i = 0; i < 26; i++) {
		capNums[i] = j;
		cout << static_cast<char>(capNums[i]) << " ";
		j++;
	}
	cout << "\nLowercase Letters: " << endl;
	j = 97;
	for (int i = 0; i < 26; i++) {
		lowNums[i] = j;
		cout << static_cast<char>(lowNums[i]) << " ";
		j++;
	}
}