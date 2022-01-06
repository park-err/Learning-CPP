#include <iostream>
using namespace std ;

// experimenting with the ternary operator

int main()
{
	// SYNTAX FOR TERNARY
	// (test-expression) ? if-true-return-this : if-false-return-this ;
	
	int a , b , max ;
	a = 1, b = 2 ;
	
	// examine the value and parity of the variables
	cout << "Variable a is : " ;
	cout << ((a != 1) ? "not one, " : "one, ") ;
	cout << ((a % 2 == 0) ? "even" : "odd") << endl ;

	// only use comparitive values here. must be boolean
	cout << "Variable b is : " ;
	cout << ((b == 1) ? "one, " : "not one, ") ;
	cout << ((b % 2 != 0) ? "odd" : "even") << endl ;

	// examine both values and assign the greater one to
	// the max variable

	max = (a > b) ? a : b ;
	cout << "Max value: " << max << endl ;
	return 0 ;
}