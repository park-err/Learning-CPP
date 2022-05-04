// This program cycles through a character array, displaying
// each element until a null terminator is encountered. 
#include "NameSelector.h"
int main()
{
    Name name;
    const int LENGTH = 80;
    char* line = new char[LENGTH];
    char* fname = new char[LENGTH];
    char* lname = new char[LENGTH];

    name.getName(line, LENGTH);
    name.selectName(line, fname, lname);
    
    // print last name then first name
    cout << "\nName: ";
    cout << lname << ", " << fname << "\n";

    name.deleteName(line);
    name.deleteName(fname);
    name.deleteName(lname);
    return 0;
}
