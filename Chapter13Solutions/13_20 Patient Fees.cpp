#include <iostream>

#include "20 Patient Fees.h"

using namespace std;

void showMainMenu();
int main() {
	int user_m_choice, user_s_choice, user_p_choice, num_days;
	PatientAccount alex;
	do {

		showMainMenu();
		do {
			cout << "ENTER CHOICE: "; cin >> user_m_choice;
			if (user_m_choice < 1 || user_m_choice > 3) {
				cout << "ERROR: Please enter a valid option.\n";
			}
		} while (user_m_choice < 1 || user_m_choice > 3);


		switch (user_m_choice) {
		case 1:
			cout << endl;
			alex.showSurgePnN();
			cout << endl;
			do {
				cout << "ENTER CHOICE: "; cin >> user_s_choice;
				if (user_s_choice < 1 || user_s_choice > 5) {
					cout << "ERROR: Please enter a valid option.\n";
				}
			} while (user_s_choice < 1 || user_s_choice > 5);
			
			alex.addSurgeCost(user_s_choice-1);

			cout << endl;
			break;
		case 2:
			cout << endl;
			alex.showPharmacyPnN();
			cout << endl;
			do {
				cout << "ENTER CHOICE: "; cin >> user_p_choice;
				if (user_p_choice < 1 || user_p_choice > 5) {
					cout << "ERROR: Please enter a valid option.\n";
				}
			} while (user_p_choice < 1 || user_p_choice > 5);

			alex.addPharmCost(user_p_choice-1);

			cout << endl;

			break;
		case 3:
			cout << endl;
			cout << "How long has the patient stayed in the hospital?" << endl;
			cout << "NUM DAYS: "; cin >> num_days;
			alex.addDailyRate(num_days);
			break;
		default:
			break;
		}

	} while (user_m_choice != 3);

	cout << "TOTAL CHARGES COME TO..." << endl;
	cout << "$" << alex.getTotalCharges() << endl;

	return 0;
}
void showMainMenu() {
	cout << "-----------------------" << endl;
	cout << "       Main Menu       " << endl;
	cout << "-----------------------" << endl;

	cout << "1. Add Surgery Type" << endl;
	cout << "2. Add Medication Type" << endl;
	cout << "3. Check Patient Out" << endl;
	cout << endl;
}