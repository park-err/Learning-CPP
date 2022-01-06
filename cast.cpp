#include <iostream>
using namespace std ;

// casting data types

int main()
{
	// there are two ways to cast data types in c++
	// one way is similar to Java and C languages
	// var = (data-type) var;
	// another way is to use static cast (only avail in C++)
	// var = static_cast < data-type > var;

	int num = 7, factor = 2;
	char letter = 'A'; float result = 0.0;

	cout << "Integer division: " << (num / factor) << endl;
	
	result = (float) (num) / factor;
	cout << "Cast division float: " << result << endl;
	
	num = static_cast <int> (letter);
	cout << "Cast character int: " << num << endl;
	
	letter = static_cast <char> (70);
	cout << "Cast integer char: " << letter << endl;
	return 0 ;
}