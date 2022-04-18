#pragma once
#include <iostream>
#include <iomanip>
using std::cout;
using std::cin;

class SearchTrees {
private:
	int findMidPoint(int min, int max);
public:
	void menu();
	void implementLinearSearch();
	void implementBinarySearch();
	void implementSelectionSearch();
	int linearSearch(int key, int myNums[], int sizeOfArray);
	int binarySearch(int key, int myNums[], int min, int max);
	void selectionSort(int myNums[], int sizeOfArray);
};