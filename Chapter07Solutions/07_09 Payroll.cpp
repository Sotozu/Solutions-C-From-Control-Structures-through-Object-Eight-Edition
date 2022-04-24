#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	const int SIZE = 7;

	long int empID[SIZE] = { 5658845,  4520125,  7895122,  8777541, 8451277,  1302850, 7580489 };
	int hours[SIZE];
	double payRate[SIZE];
	double wages[SIZE];

	int hours_worked;
	int pay_rate;

	cout << "Please enter the following employee information.\n";

	for (int i = 0; i < SIZE; i++) {
		cout << "Employee: " << i + 1 << endl;
		do {
			cout << "Hours Worked: ";
			cin >> hours_worked;
			if (hours < 0) {
				cout << "ERROR: Please enter hours greater than 0.\n";
			}
		} while (hours < 0);

		do {
			cout << "Wage An Hour: $";
			cin >> pay_rate;
			if (pay_rate < 15.00) {
				cout << "ERROR: Please enter a payrate that's $15.00 minimum.\n";
			}
		} while (pay_rate < 15.00);
		hours[i] = hours_worked;
		payRate[i] = pay_rate;

		wages[i] = static_cast<double>(hours_worked)* pay_rate;

	}

	cout << endl;
	for (int i = 0; i < SIZE; i++) {
		cout << "EMPLOYEE " << i + 1 << " INFORMATION.\n";
		cout << "empID: " << empID[i] << endl;
		cout << showpoint << fixed << setprecision(2);
		cout << "Gross Wage: $" << wages[i] << endl << endl;

	}
	return 0;
}