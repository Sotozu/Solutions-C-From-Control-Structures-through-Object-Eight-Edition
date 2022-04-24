#include <iostream>
#include <iomanip>

#include "15 Mortgage Payments.h"

using namespace std;

int main() {
	double loan, interest;
	int years;
	cout << "mortgage info" << endl << endl;

	do {
		cout << "enter the loan amount: $"; cin >> loan;
		if (loan < 0) {
			cout << "error: please enter a positive value.\n";
		}
	} while (loan < 0);

	do {
		cout << "enter the interest rate (10% is .10): "; cin >> interest;
		if (interest < 0) {
			cout << "error: please enter a positive value.\n";
		}
	} while (interest < 0);

	do {
		cout << "enter the number of years: "; cin >> years;
		if (years < 0) {
			cout << "error: please enter a positive value.\n";
		}
	} while (years < 0);


	MortgagePayment my_m(loan, interest, years);
	cout << showpoint << fixed << setprecision(2);
	cout << "your monthly payment: $" << my_m.monthlyPayment() << endl;
	cout << "your total payments: $" << my_m.totalPayment() << endl;

	return 0;
}
