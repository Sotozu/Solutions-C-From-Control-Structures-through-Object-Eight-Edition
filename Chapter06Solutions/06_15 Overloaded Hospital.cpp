#include <iostream>
#include <iomanip>
using namespace std;

// 15. Overloaded Hospital

double totalCharges(double medication_cost, double service_cost);
void getOutPatInfo(double* medication_cost, double* service_cost);

double totalCharges(double medication_cost, double service_cost, int num_days, double daily_rate);
void getInPatInfo(double* medication_cost, double* service_cost, int* num_days, double* daily_rate);

int main() {

	int patient_type,
		num_days;

	double daily_rate,
		medication_cost,
		service_cost,
		total_charge;


	cout << "Is this patients an IN-PATIENT or and OUT-PATIENT?\n";
	cout << "PRESS '1' for IN-PATIENT and '2' for OUR-PATIENT\n";
	do {
		cout << "PATIENT TYPE: ";
		cin >> patient_type;
	} while (patient_type != 1 && patient_type != 2);

	switch (patient_type) {
	case 1://IN-PATIENT
		getInPatInfo(&medication_cost, &service_cost, &num_days, &daily_rate);
		total_charge = totalCharges(medication_cost, service_cost, num_days, daily_rate);
		cout << showpoint << setprecision(2) << fixed;
		cout << "TOTAL CHARGE: $" << total_charge;

		break;
	case 2: //OUT-PATIENT
		getOutPatInfo(&medication_cost, &service_cost);
		total_charge = totalCharges(medication_cost, service_cost);
		cout << showpoint << setprecision(2) << fixed;
		cout << "TOTAL CHARGE: $" << total_charge;
		break;
	default:
		break;
	}
	
	return 0;
}

// out-patient
double totalCharges(double medication_cost, double service_cost) {
	double total_cost;
	cout << endl;

	total_cost = medication_cost + service_cost;
	return total_cost;
}

// in-patient
double totalCharges(double medication_cost, double service_cost, int num_days, double daily_rate) {
	double total_cost;

	total_cost = (num_days * daily_rate) + medication_cost + service_cost;
	return total_cost;
}

void getOutPatInfo(double* medication_cost, double* service_cost) {
	cout << "\nOUT-PATIENT\n";
	cout << "Please enter the number of days the patient was in the hospital.\n";

	cout << "Please enter the medication costs for the patient.\n";
	do {
		cout << "MEDICATION COST: $";
		cin >> *medication_cost;
		if (*medication_cost < 0) {
			cout << " ERROR: Please enter a positive number.\n";
		}
	} while (*medication_cost < 0);

	cout << "Please enter the service costs for the patient.\n";
	do {
		cout << "SERVICE COST: $";
		cin >> *service_cost;
		if (*service_cost < 0) {
			cout << "ERROR: Please enter a positive number.\n";
		}
	} while (*service_cost < 0);
}

void getInPatInfo(double* medication_cost, double* service_cost, int* num_days, double* daily_rate) {
	cout << "\nIN-PATIENT\n";
	cout << "Please enter the number of days the patient was in the hospital.\n";
	do {
		cout << "DAYS: ";
		cin >> *num_days;
		if (*num_days < 0) {
			cout << "ERROR: Please enter a positive number.\n";
		}
	} while (*num_days < 0);

	cout << "Please enter th daily rate for a patient in the hosipital.\n";
	do {
		cout << "DAILY RATE: $";
		cin >> *daily_rate;
		if (*daily_rate < 0) {
			cout << "ERROR: Please enter a positive number.\n";
		}
	} while (*daily_rate < 0);
	do {
		cout << "MEDICATION COST: $";
		cin >> *medication_cost;
		if (*medication_cost < 0) {
			cout << " ERROR: Please enter a positive number.\n";
		}
	} while (*medication_cost < 0);

	cout << "Please enter the service costs for the patient.\n";
	do {
		cout << "SERVICE COST: $";
		cin >> *service_cost;
		if (*service_cost < 0) {
			cout << "ERROR: Please enter a positive number.\n";
		}
	} while (*service_cost < 0);
}
