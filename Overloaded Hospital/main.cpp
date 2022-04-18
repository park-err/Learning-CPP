#include "OverloadedHospital.h"

int main() {
    double total = 0;
    OverloadedHospital oh;
    oh.menu(&total);
    oh.displayCharges(&total);
    return 0;
}