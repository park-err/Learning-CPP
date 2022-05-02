#include "SearchTrees.h"

// find midpoint function
int SearchTrees::findMidPoint(int min, int max) {
	return ((max + min) / 2);
}

void SearchTrees::swap(int myNums[], int i) {
	int placeholder;
	placeholder = myNums[i];
	myNums[i] = myNums[i + 1];
	myNums[i + 1] = placeholder;
}

//	**********
//	ALGORITHMS
//	**********

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
			binarySearch(key, myNums, ++midpoint, max);
		}
		else if (myNums[midpoint] > key) {
			binarySearch(key, myNums, min, --midpoint);
		}
		else {
			return midpoint;
		}
	}
}

// selection sort algorithm
void SearchTrees::selectionSort(int myNums[], int sizeOfArray) {
	int min, placeholder;
	for (int i = 0; i < sizeOfArray - 1; i++) {
		min = i;
		for (int j = i + 1; j < sizeOfArray; j++) {
			if (myNums[j] < myNums[min]) {
				min = j;
			}
		}
		if (min != i) {
			swap(myNums, i);
		}
	}
}

// bubble sort algorithm
void SearchTrees::bubbleSort(int myNums[], int sizeOfArray) {
	// true means a swap occurred; false means no swap occurred
	bool flag; int placeholder;
	for (int k = 1; k < sizeOfArray; k++) {
		flag = false;
		for (int i = 0; i < (sizeOfArray - k); i++) {
			if (myNums[i] > myNums[i + 1]) {
				swap(myNums, i);
				flag = true;
			}
		}
		
		// if no swap occurred then break
		if (!flag) {
			break;
		}
	}
}

//	**************
//	IMPLEMENTATION
//	**************

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

	int min = 0, max = 8;
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

// implement sort algorithm
void SearchTrees::implementSelectionSort() {
	const int SIZE = 6;
	int numbers[SIZE] = { 4, 0, 2, 3, 6, 12 };

	cout << "Unsorted Array is: " << std::setw(5);
	for (int i = 0; i < SIZE; i++) {
		cout << numbers[i] << " ";
	}

	cout << "\nSorted Array is: " << std::setw(5);
	selectionSort(numbers, SIZE);
	for (int i = 0; i < SIZE; i++) {
		cout << numbers[i] << " ";
	}

	cout << "\n";
}

// implement bubble sort
void SearchTrees::implementBubbleSort() {
	const int SIZE = 6;
	int numbers[SIZE] = { 7, 1, 0, 4, 8, 3 };

	cout << "Unsorted Array is: " << std::setw(5);
	for (int i = 0; i < SIZE; i++) {
		cout << numbers[i] << " ";
	}

	cout << "\nSorted Array is: " << std::setw(5);
	bubbleSort(numbers, SIZE);
	for (int i = 0; i < SIZE; i++) {
		cout << numbers[i] << " ";
	}
}

// show menu and run until the user quits
void SearchTrees::menu() {
	int selection;
	cout << "\nSearch Trees!\n\n";
	cout << "1. " << std::setw(2) << "Linear\n";
	cout << "2. " << std::setw(2) << "Binary\n";
	cout << "3. " << std::setw(2) << "Selection sort\n";
	cout << "4. " << std::setw(2) << "Bubble sort\n";
	cout << "5. " << std::setw(2) << "Quit\n";

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
		implementSelectionSort();
		menu();
		break;
	case 4:
		implementBubbleSort();
		menu();
		break;
	case 5:
		cout << "Thank you!\n\n";
		break;
	default:
		cout << "Please enter the number selection from the menu";
	}
}