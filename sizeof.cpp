#include <iostream>
using namespace std ;

// establishing size

int main()
{
	// size of data can be found using the sizeof operator
	// will return an integer the number of bytes allocated to that
	// data type

	// create variables
	int num;	int nums[50];		float decimal;
	bool isTrue;	unsigned int max;	char letter;
	double pi;	short int number;	char letters[50];
	short int numbers[50];

	cout << "int size: " << sizeof num << endl;
	// array of 50 ints
	cout << "50 int size: " << sizeof (nums) << endl;
	cout << "float size: " << sizeof decimal << endl;
	cout << "boolean size: " << sizeof isTrue << endl;
	// any positive int (without negative sign)
	cout << "unsigned int size: " << sizeof max << endl;
	cout << "char size: " << sizeof letter << endl;
	cout << "double size: " << sizeof pi << endl;
	// short vs long (int by default is long)
	// using short can clear up space of the program by
	// reducing the amount of bytes the variable takes up
	cout << "short int size: " << sizeof number << endl;
	// array of 50 chars
	cout << "50 char size: " << sizeof letters << endl;
	// 50 short ints compare with array of 50 long ints
	cout << "50 short ints: " << sizeof numbers << endl;
	return 0 ;
}