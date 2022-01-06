#include <iostream>
using namespace std ;

// program function comment

int main()
{
	// Comparison values
	// returns 1 for true and 0 for false (bool type)

	int nil = 0, num = 0, max = 1 ; char cap = 'A', low = 'a' ;
	// must use ' instead of " for defining char var
	
	cout << "Equality comparisons: " ;
	cout << "(0 == 0)" << (nil == num) << "(true)" ;
	cout << "(A == a)" << (cap == low) << "(false)" ;

	cout << endl << "Inequality comparison: " ;
	cout << "(0 != 1)" << (nil != max) << "(true)" ;

	cout << endl << "Greater comparison: " ;
	cout << "(0 > 1)" << (nil > max) << "(false)" ;

	cout << endl << "Lesser comparison: " ;
	cout << "(0 < 1)" << (nil < max) << "(true)" ;

	cout << endl << "Greater than or equal to: " ;
	cout << "(0 >= 0)" << (nil <= num) << "(true)" ;
	cout << "(0 >= 1)" << (nil <= max) << "(false)" ;

	cout << endl << "Less than or equal to: " ;
	cout << "(0 <= 0)" << (nil <= num) << "(true)" ;

	// testing without parantheses
	// edit: cannot use nil <= max without parantheses
	cout << "(0 <= 1)" << (nil <= max) << "(true)" ;

	return 0 ;
}