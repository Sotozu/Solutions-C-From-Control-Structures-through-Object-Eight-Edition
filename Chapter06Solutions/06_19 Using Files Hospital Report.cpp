#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

// 19. Using Files Hospital Report

void totalCharges(int, int);
void totalCharges(int, int, int, int);

void inPatient(int&, int&);
void outPatient(int&, int&, int&, int&);
int main() {
	

	int patient_type, num_days, daily_rate, medication_cost, service_cost;

	

	cout << "Is this patients an IN-PATIENT or and OUT-PATIENT?\n";
	cout << "PRESS '1' for IN-PATIENT and '2' for OUT-PATIENT\n";
	do {
		cout << "PATIENT TYPE: ";
		cin >> patient_type;
	} while (patient_type != 1 && patient_type != 2);

	switch (patient_type) {
	case 1:
		inPatient(num_days, daily_rate);
		totalCharges(num_days, daily_rate);
		break;
	case 2:
		outPatient(num_days, daily_rate, medication_cost, service_cost);
		totalCharges(num_days, daily_rate, medication_cost, service_cost);
		break;
	default:
		break;
	}

	cout << endl << "Report Generated (report.txt)" << endl;

	return 0;
}

void totalCharges(int num_days, int daily_rate) {
	int total = num_days * daily_rate;
	ofstream inFile;

	inFile.open("report.txt");
	inFile << fixed << showpoint << setprecision(2);
	inFile << "PATIENT REPORT\n";
	inFile << "Patient stayed for " << num_days << " days." << endl;
	inFile << "Daily Rate: $" << daily_rate << endl;
	inFile << "The total costs are: $" << total;

	inFile.close();
}

void totalCharges(int num_days, int daily_rate, int medication_cost, int service_cost) {
	int total = (num_days * daily_rate) + medication_cost + service_cost;
	ofstream inFile;

	inFile.open("report.txt");
	inFile << fixed << showpoint << setprecision(2);
	inFile << "PATIENT REPORT\n";
	inFile << "Patient stayed for " << num_days << " days." << endl;
	inFile << "Daily Rate: $" << daily_rate << endl;
	inFile << "Patient medication costs: $" << medication_cost << endl;
	inFile << "Patient service costs: $" << service_cost << endl;
	inFile << "The total costs are: $" << total;

	inFile.close();
}

void inPatient(int& num_days, int& daily_rate) {
	cout << "\nIN-PATIENT\n";
	cout << "Please enter the number of days the patient was in the hospital.\n";
	do {
		cout << "DAYS: ";
		cin >> num_days;
		if (num_days < 0) {
			cout << "ERROR: Please enter a positive number.\n";
		}
	} while (num_days < 0);

	cout << "Please enter th daily rate for a patient in the hosipital.\n";
	do {
		cout << "DAILY RATE: $";
		cin >> daily_rate;
		if (daily_rate < 0) {
			cout << "ERROR: Please enter a positive number.\n";
		}
	} while (daily_rate < 0);
}
void outPatient(int& num_days, int& daily_rate, int& medication_cost, int& service_cost) {
	cout << "\nOUT-PATIENT\n";
	cout << "Please enter the number of days the patient was in the hospital.\n";
	do {
		cout << "DAYS: ";
		cin >> num_days;
		if (num_days < 0) {
			cout << "ERROR: Please enter a positive number.\n";
		}
	} while (num_days < 0);

	cout << "Please enter th daily rate for a patient in the hospital.\n";
	do {
		cout << "DAILY RATE: $";
		cin >> daily_rate;
		if (daily_rate < 0) {
			cout << "ERROR: Please enter a positive number.\n";
		}
	} while (daily_rate < 0);

	cout << "Please enter the medication costs for the patient.\n";
	do {
		cout << "MEDICATION COST: $";
		cin >> medication_cost;
		if (medication_cost < 0) {
			cout << " ERROR: Please enter a positive number.\n";
		}
	} while (medication_cost < 0);

	cout << "Please enter the service costs for the patient.\n";
	do {
		cout << "SERVICE COST: $";
		cin >> service_cost;
		if (service_cost < 0) {
			cout << "ERROR: Please enter a positive number.\n";
		}
	} while (service_cost < 0);
}
