#include <iostream>
using namespace std ;

// program function comment

int main()
{
	// program code
	int a , b ;

	cout << "Assign values: " ;
	cout << "a = " << (a = 8) << " " ;
	cout << "b = " << (b = 4) << " " ;

	cout << endl << "Add and assign: " ;
	cout << "a += b (8 += 4) then a = " << (a += b) ;
	cout << endl << "Subtract and assign: " ;
	cout << "a -= b (12 -= 4) then a = " << (a -= b) ;
	cout << endl << "Multiply and assign: " ;
	cout << "a *= b (8 *= 4) then a = " << (a *= b) ;
	cout << endl << "Divide and assign: " ;
	cout << "a /= b (32 /= 4) then a = " << (a /= b) ;
	cout << endl << "Modulus and assign: " ;
	cout << "a %= b (8 %= 4) then a = " << (a %= b) ;

	return 0 ;
}