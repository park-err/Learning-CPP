#include <iostream>
using namespace std ;

// precedence

int main()
{
	// order of operations
	// note in the book which expressions are right to left
	// and which are left to right

	int a, b, c, d;

	a = 1 + 4 * 3;
	b = (1 + 4) * 3;
	c = 7 - 4 + 2;
	d = 7 - (4 + 2);

	cout << "default " << a << endl;
	cout << "forced order " << b << endl;
	cout << "default " << c << endl;
	cout << "forced direction " << d << endl;
	return 0 ;
}