#pragma once

#pragma once
#include <iostream>
#include <iomanip>
using std::cout;
using std::cin;

class SearchTrees {
private:
	int findMidPoint(int min, int max);
	void swap(int myNums[], int i);
public:
	void menu();
	// implementation
	void implementLinearSearch();
	void implementBinarySearch();
	void implementSelectionSort();
	void implementBubbleSort();

	// algorithms
	int linearSearch(int key, int myNums[], int sizeOfArray);
	int binarySearch(int key, int myNums[], int min, int max);
	void selectionSort(int myNums[], int sizeOfArray);
	void bubbleSort(int myNums[], int sizeOfArray);
};