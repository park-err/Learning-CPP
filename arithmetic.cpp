#include <iostream>
using namespace std ;

// arithmetic

int main()
{
	int a = 8, b = 4 ;

	cout << "Sum: " << (a + b) << endl ;
	cout << "Difference: " << (a - b) << endl ;
	cout << "Product: " << (a * b) << endl ;
	cout << "Quotient: " << (a / b) << endl ;

	cout << "Postfix increment: " << a++ << endl ;
	cout << "Postfix result: " << a << endl ;
	cout << "Prefix increment: " << ++b << endl ;
	cout << "Prefix result: " << b << endl ;

	return 0 ;
}