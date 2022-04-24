#include <iostream>
#include <iomanip>
using namespace std;

//15. Payroll Report

int main() {

	int empnum, width = 20;
	double state_tax, fed_tax, fica, netpay, gross_pay, sum_tax_fica;
	bool check = false;

	do {
		cout << "Enter '0' to terminate the program.\n";
		cout << "Please enter the employee number: ";

		cin >> empnum;
		if (empnum == 0) {
			cout << "Terminiating Program";
		}
		else {

			do {
				do {
					cout << "Enter Pay: $";
					cin >> gross_pay;
					if (gross_pay < 0) {
						cout << "\nPlease enter a positive number for 'Pay'\n";
					}
				} while (gross_pay < 0);

				do {
					cout << "Enter State Tax: ";
					cin >> state_tax;
					if (state_tax < 0) {
						cout << "\nPlease enter a positive number for 'State Tax'\n";
					}
				} while (state_tax < 0);

				if (state_tax >= 1) { //If the use enterd a whole number like 7 for 0.07%. Do this.
					state_tax /= 100;
				}

				do {
					cout << "Enter Federal Tax: ";
					cin >> fed_tax;
					if (fed_tax < 0) {
						cout << "\nPlease enter a positive number for 'Federal Tax'\n";
					}
				} while (fed_tax < 0);

				if (fed_tax >= 1) { //If the use enterd a whole number like 7 for 0.07%. Do this.
					fed_tax /= 100;
				}

				do {
					cout << "Enter FICA Withholdings (ex. 1750): $";
					cin >> fica;
					if (fica > gross_pay) {
						cout << "\nPlease enter a number LESS than Gross Pay for 'FICA'\n";
					}
				} while (fica > gross_pay);


				netpay = gross_pay - (gross_pay * state_tax) - (gross_pay * fed_tax) - fica;
				sum_tax_fica = (gross_pay * state_tax) + (gross_pay * fed_tax) + fica;

				if (sum_tax_fica > gross_pay) {
					check = true;
					cout << "\nThere was error. Please re-enter data for employee.\n";
				}



			} while (sum_tax_fica > gross_pay);
			cout << showpoint << setprecision(2) << fixed;

			cout << "\nFIANCIAL ANALYSIS\n";
			cout << setw(width) << left << "Gross Pay:" << "$" << gross_pay << endl;
			cout << setw(width) << left << "State Tax:" << "$" << state_tax * gross_pay << endl;
			cout << setw(width) << left << "Federal Tax:" << "$" << fed_tax * gross_pay << endl;
			cout << setw(width) << left << "FICA Withhodings:" << "$" << fica << endl;
			cout << "__________________\n";
			cout << setw(width) << left << "Net Pay:" << "$" << netpay << endl;
			cout << endl;
		}
		

	} while (empnum != 0);

	cout << endl << "Alex" << endl;

	return 0;
}