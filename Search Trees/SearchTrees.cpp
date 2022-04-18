#include "SearchTrees.h"

// find midpoint function
int SearchTrees::findMidPoint(int min, int max) {
	return ((max + min) / 2);
}

// linear search of an array
int SearchTrees::linearSearch(int key, int myNums[], int sizeOfArray) {
	for (int i = 0; i < sizeOfArray; i++) {
		if (myNums[i] == key) {
			return i;
		}
	}

	return -1;
}

// binary search of an array
int SearchTrees::binarySearch(int key, int myNums[], int min, int max) {
	if (max < min || key > max || key < min) {
		return -1;
	}
	else {
		int midpoint = findMidPoint(min, max);

		if (myNums[midpoint] < key) {
			binarySearch(key, myNums, midpoint + 1, max);
		}
		else if (myNums[midpoint] > key) {
			binarySearch(key, myNums, min, midpoint -1);
		}
		else {
			return midpoint;
		}
	}
}

// implement the linear search function
void SearchTrees::implementLinearSearch() {
	const int sizeOfArray = 8;
	int myNums[sizeOfArray] = { 2, 4, 0, 5, 3, 7, 8, 1 }, key;

	cout << "Give me a number: ";
	cin >> key;

	int linear = linearSearch(key, myNums, sizeOfArray);
	if (linear == -1) {
		cout << "\n\nThe number is not in the array.\n";
	}
	else {
		cout << "\n\nThe number " << key << " is at the index " <<
			linear << " in the array" << "\n";
	}
}

//implement the binary search method
void SearchTrees::implementBinarySearch() {
	const int sizeOfArray = 8;
	int myNums[sizeOfArray] = { 0, 1, 2, 3, 4, 5, 6, 8 }, key;

	int min = 0, max = 7;
	cout << "Give me a number: ";
	cin >> key;

	int binary = binarySearch(key, myNums, min, max);
	if (binary == -1) {
		cout << "\n\nThe number is not in the array.\n";
	}
	else {
		cout << "\n\nThe number " << key << " is at the index " <<
			binary << " in the array" << "\n";
	}
}

// Sort algorithm
void SearchTrees::selectionSort(int myNums[], int sizeOfArray) {
	int min, placeholder;
	for (int i = 1; i < sizeOfArray; i++) {
		min = i;
		for (int j = i + 1; j < (sizeOfArray + 1); j++) {
			if (myNums[j] < myNums[min]) {
				min = j;
			}
		}
		if (min != i) {
			placeholder = myNums[min];
			myNums[min] = myNums[i];
			myNums[i] = placeholder;
		}
	}
}

// implement sort algorithm
void SearchTrees::implementSelectionSearch() {
	const int SIZE = 6;
	int numbers[SIZE] = { 4, 8, 2, 3, 6, 12 };

	cout << "Unsorted Array is: " << std::setw(5);
	for (int i = 0; i < SIZE; i++) {
		cout << "W"
	}
}

// show menu and run until the user quits
void SearchTrees::menu() {
	int selection;
	cout << "\nSearch Trees!\n\n";
	cout << "1." << std::setw(10) << "Linear\n";
	cout << "2." << std::setw(10) << "Binary\n";
	cout << "3." << std::setw(10) << "Selection search\n";
	cout << "4." << std::setw(10) << "Quit\n";

	cout << "\n\nSelection: ";
	cin >> selection;

	switch (selection) {
	case 1:
		implementLinearSearch();
		menu();
		break;
	case 2:
		implementBinarySearch();
		menu();
		break;
	case 3:
		implementSelectionSearch();
		menu();
		break;
	case 4:
		cout << "Thank you!\n\n";
		break;
	default:
		cout << "Please enter the number selection from the menu";
	}
}