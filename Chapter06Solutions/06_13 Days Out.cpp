#include <iostream>
using namespace std;

// 13. Days Out

int employees();
int sickDays(int);
double averageDaysAbsent(int, int);

int main() {

	int num_empl;
	int total_sick_days;
	double average_sick_days;
	
	num_empl = employees();
	total_sick_days = sickDays(num_empl);
	average_sick_days = averageDaysAbsent(num_empl, total_sick_days);

	cout << "\nThe average amount of sicks days each employee took.\n";
	cout << "AVERAGE # OF SICK DAYS: " << average_sick_days;


	return 0;

}
int employees() {
	int employees;
	cout << "How many employees does the company have?\n";
	do {
		cout << "# EMPLOYEES: ";
		cin >> employees;
		if (employees < 1) {
			cout << "ERROR: Please enter 1 employee or more.\n";
		}
	} while (employees < 1);
	return employees;
}
int sickDays(int employees) {
	int sick_days;
	int total = 0;

	cout << "Please enter the number of days sick for each employee.\n";

	for (int i = 0; i < employees; i++) {
		do {
			cout << "EMPLOYEE " << i+1 << ": ";
			cin >> sick_days;
			if (sick_days < 0) {
				cout << "ERROR: Please enter positive integers\n";
			}
		} while (sick_days < 0);
		total += sick_days;

	}

	return total;
}
double averageDaysAbsent(int num_empl, int total_sick_days) {

	double average_sick_days = static_cast<double>(total_sick_days) / num_empl;

	return average_sick_days;

}
