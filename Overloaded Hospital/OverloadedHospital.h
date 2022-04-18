#include <iostream>
#include <iomanip>
using namespace std;

class OverloadedHospital {
    private:
        int patientStatus;
    public:
        void menu(double *total);
        double inpatientCharges(double *total);
        double outpatientCharges(double *total);
        bool testInput(double value);
        void displayCharges(double *total);
};