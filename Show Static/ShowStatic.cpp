#include "ShowStatic.h"

void ShowStatic::showStatic() {
    static int numCalls = 0;
    cout << "This function has been called " << ++numCalls << " times.\n";
}

void ShowStatic::counter() {
    for (int count = 0; count < 5; count++) {
        showStatic();
    }
}