#include <iostream>
using namespace std ;

// my first if else statement in C++

int main()
{
	int num = 8;
	char letter = 'A';
	
	if (num > 5) {
		cout << "Number exceeds 5" << endl;
	}
	else {
		cout << "Number is five or less" << endl;
	}
	
	if (letter == 'A') {cout << "Letter is A" << endl;}

	letter = 'B';
	
	if (num > 5) {
		cout << "Number exceeds 5" << endl;
	}
	else {
		cout << "Number is five or less" << endl;
	}
	
	if (letter == 'A') {cout << "Letter is A" << endl;}

	num = 2;
	
	if (num > 5) {
		cout << "Number exceeds 5" << endl;
	}
	else {
		cout << "Number is five or less" << endl;
	}
	
	if (letter == 'A') {cout << "Letter is A" << endl;}
	return 0 ;
}