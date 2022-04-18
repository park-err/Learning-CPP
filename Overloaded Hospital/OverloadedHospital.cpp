#include "OverloadedHospital.h"

void OverloadedHospital::menu(double *total) {
    cout << "OVERLOADED HOSPITAL\n\n";
    cout << "Options:\n";
    cout << setw(5) << "1. Inpatient\n";
    cout << setw(5) << "2. Outpatient\n";
    cout << "\nPlease select patient status:\n";
    cin >> patientStatus;

    switch (patientStatus)
    {
    case 1:
        inpatientCharges(total);
        break;
    
    case 2:
        outpatientCharges(total);
        break;
    
    default:
        cout << "\nError: Please select 1 or 2\n";
        break;
    }
}

double OverloadedHospital::inpatientCharges(double *total) {
    bool badInput = true;
    double numDays = 0, dailyRate = 0, services = 0, medCharges = 0;

    do {
        cout << "\nHow many days did the patient spend in the hospital?\n";
        cin >> numDays;

        if (testInput(numDays)) {
            badInput = false;
        }
        else {
            badInput = true;
        }
    } while(badInput);

    do {
        cout << "\nWhat is the daily rate?\n";
        cin >> dailyRate;

        if (testInput(dailyRate)) {
            badInput = false;
        }
        else {
            badInput = true;
        }
    } while(badInput);

    do {
        cout << "\nTotal charges for hospital services (lab tests, etc.):\n";
        cin >> services;

        if (testInput(services)) {
            badInput = false;
        }
        else {
            badInput = true;
        }
    } while(badInput);

    do {
        cout << "\nTotal charges for medications:\n";
        cin >> medCharges;

        if (testInput(medCharges)) {
            badInput = false;
        }
        else {
            badInput = true;
        }
    } while(badInput);

    *total = (numDays * dailyRate) + services + medCharges;
    return *total;

}

double OverloadedHospital::outpatientCharges(double *total) {
    bool badInput = true;
    double numDays = 0, dailyRate = 0, services = 0, medCharges = 0;

    do {
        cout << "\nTotal charges for hospital services (lab tests, etc.):\n";
        cin >> services;

        if (testInput(services)) {
            badInput = false;
        }
        else {
            badInput = true;
        }
    } while(badInput);

    do {
        cout << "\nTotal charges for medications:\n";
        cin >> medCharges;

        if (testInput(medCharges)) {
            badInput = false;
        }
        else {
            badInput = true;
        }
    } while(badInput);

    *total = services + medCharges;
    return *total;
}

bool OverloadedHospital::testInput(double value) {
    if (value > 0) {
        return false;
    }
    else {
        return true;
    }
}

void OverloadedHospital::displayCharges(double *total) {
    cout << endl;
    cout << "Total: ";
    cout << total;
    cout << endl;
}