#include <iostream>
using namespace std ;

// Assessing logic

int main()
{
	int a = 1 , b = 0 ;

	// a and b will act as booleans
	// a is true and b is false

	cout << "AND operator: " << endl ;
	cout << "Both true (a && a) " << (a && a) << " (true) " ;
	cout << "One is true but the other is false (a && b) " << 
		(a && b) << " (false) " ;
	cout << "Both false (b && b) " << (b && b) << " (false) " <<
		endl ;

	// && must take in two boolean values and will only return
	// true if both values are true

	cout << "OR operator: " << endl ;
	cout << "Both true (a || a) " << (a || a) << " (true) " ;
	cout << "One is true but the other is false (a || b) " << 
		(a || b) << " (true) " ;
	cout << "Both false (b || b) " << (b || b) << " (false) " <<
		endl ;

	// || must take in two boolean values and will only return
	// true if at least one of the values is true

	cout << "NOT operator: " << endl ;
	cout << "a = " << a << " !a = " << !a << endl ;
	cout << "b = " << b << " !b = " << !b << endl ;

	// a practical use for a not operator could be if
	// an if statement is false then we want the program to
	// do work. so if !b then blah blah blah
	return 0 ;
}