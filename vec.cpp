#include <vector>
#include <iostream>
using namespace std ;

// learning vectors

int main()
{
	vector <int> vec(3, 100) ;

	cout << "Vector size:" << vec.size() << endl ;
	cout << "Is empty?:" << vec.empty() << endl ;	// returns 1 if empty and 0 if not
	cout << "First element:" << vec.at(0) << endl ;

	cout << "Remove last element" << endl ;
	
	// remove last element
	vec.pop_back() ;
	cout << "Vector size:" << vec.size() << endl ;
	cout << "First element:" << vec.back() << endl ; 
	
	cout << "Remove all elements" << endl ;

	// remove all elements
	vec.clear() ;
	cout << "Vector size:" << vec.size() << endl ;

	cout << "Add element" << endl ;

	// add element
	vec.push_back(200) ;
	cout << "Vector size:" << vec.size() << endl ;
	cout << "First element:" << vec.front() << endl ;
	return 0 ;
}