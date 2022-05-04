#include "NameSelector.h"

void Name::getName(char* line, int LENGTH) {
    // Read a string into the character array
    cout << "Enter a name of no more than "
        << LENGTH - 1 << " characters:\n";
    cin.getline(line, LENGTH);
}

void Name::selectName(char* line, char* fname, char* lname) {
    int start_i = 0;
    for (int i = 0; !isspace(line[i]); i++) {
        fname[i] = line[i];

        if (isspace(line[i + 1])) {
            start_i = i + 2;
            fname[i + 1] = '\0';
        }
    }

    int j = 0;
    for (int i = start_i; line[i] != '\0'; i++) {
        lname[j] = line[i];

        if (line[i + 1] == '\0') {
            lname[j + 1] = '\0';
        }
        j++;
    }
}

void Name::deleteName(char* name) {
    delete[] name;
    name = nullptr;
}