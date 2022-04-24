#include <iostream>
#include <iomanip>

using namespace std;

enum TypePay { HOURLY = 1, SALARY };

struct HourlyPaid {  // size 100
	int hours_worked;
	double hourly_rate;
};

struct Salaried { //size 150
	double salary;
	double bonus;
};

union Hires { // max size = 150

	HourlyPaid worker;
	Salaried manager;

};

bool InputValidation(int);
bool InputValidation(double);

int main() {

	Hires employee;

	int user_choice;
	double total = 0;

	cout << "Worker Type" << endl;
	cout << "1. Wage" << endl;
	cout << "2. Salary" << endl;
	cout << endl;
	do {
		cout << "ENTER OPTION (1 OR 2): ";
		cin >> user_choice;
		if (user_choice != 1 && user_choice != 2) {
			cout << "ERROR: Please enter a valid choice.\n";
		}
	} while (user_choice != 1 && user_choice != 2);

	cout << setprecision(2) << fixed << showpoint;

	if (user_choice == HOURLY) {
		do {
			cout << "Hourly Wage: $";
			cin >> employee.worker.hourly_rate;
		} while (!InputValidation(employee.worker.hourly_rate));
		do {
			cout << "Hours Worked: ";
			cin >> employee.worker.hours_worked;
		} while (!InputValidation(employee.worker.hours_worked));

		total = employee.worker.hourly_rate * employee.worker.hours_worked;

		cout << "--------Wages Employee--------" << endl;
		cout << "Total Pay for The Period: $" << total << endl;
		cout << endl;
	}
	else if (user_choice == SALARY) {

		do {
			cout << "Yearly Salary: $";
			cin >> employee.manager.salary;
		} while (!InputValidation(employee.manager.salary));

		cout << "Yearly Bonus: $";
		cin >> employee.manager.bonus;
		cout << endl;

		total = employee.manager.salary + employee.manager.bonus;

		cout << "--------Salaried Employee--------" << endl;
		cout << "Total Yearly Pay: $" << total << endl;
		cout << endl;
	}
	cout << "GOOD BYE.\n";

	return 0;
}

bool InputValidation(int hours_worked) {
	if (hours_worked < 0 || hours_worked > 80) {
		cout << "ERROR: Please enter between 0-80 hours.\n";
		return false;
	}
	else {
		return true;
	}
}
bool InputValidation(double money_amount) {
	if (money_amount < 0) {
		cout << "ERROR: Please enter a positive value.\n";
		return false;
	}
	else {
		return true;
	}
}