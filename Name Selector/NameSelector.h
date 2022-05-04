#pragma once
#include <iostream>
using std::cout;
using std::cin;

class Name {
private:
public:
	void getName(char*, int length);
	void selectName(char*, char*, char*);
	void deleteName(char*);
};