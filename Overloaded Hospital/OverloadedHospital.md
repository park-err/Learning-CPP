Overloaded Hospital
Write the program that computes and displays the charges for a patient's hospital stay.
First, the program should ask if the patient was admitted as an inpatient or an outpatient.
If the patient was an inpatient, the following data should be entered:

        - The number of days spent in the hospital
        - The daily rate
        - Charges for hospital services (lab tests, etc.)
        - Hospital medication charges

If the patient was an outpatient, the following data should be entered:

        - Charges for hospital services (lab tests, etc.)
        - Hospital medication charges

Use a single, separate function to validate that no input is less than zero.
If it is, it should be reentered before being returned.

Once the required data has been input and validated, 
the program should use two overloaded functions to calculate the total charges.
One of the functions should accept arguments for the inpatient data,
while the other function accepts the arguments for the outpatient data.
Both functions should return the total charges

Notes:
    Tasks
        1. Ask if patient is inpatient or outpatient
        2. run function according to patient status
        3. test data
        4. display total charges

    Variables:
        1. patientStatus - int (1 for inpatient and 2 for outpatient)
        2. dailyRate - double
        3. services - double
        4. medCharges - double
        5. total - double by pointer

    Methods:
        menu
        inpatientCharges
        outpatientCharges
        testInput
