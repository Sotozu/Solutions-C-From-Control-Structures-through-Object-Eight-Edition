#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// 10. Average Rainall

int main() {

	int years, inches, total = 0;
	double avg;
	string month;

	do {
		cout << "Please enter the number of years: ";
		cin >> years;
		if (years < 1) {
			cout << "\nPlease enter years equal to or greater than 1.\n";
		}
	} while (years < 1);

	for (int i = 0; i < years; i++) {
		cout << endl;
		cout << "YEAR: " << i+1 << endl;
		for (int j = 0; j < 12; j++) {

			switch (j) {
			case (0): month = "January";
					break;
			case (1): month = "February";
				break;
			case (2): month = "March";
				break;
			case (3): month = "April";
				break;
			case (4): month = "May";
				break;
			case (5): month = "June";
				break;
			case (6): month = "July";
				break;
			case (7): month = "August";
				break;
			case (8): month = "September";
				break;
			case (9): month = "October";
				break;
			case (10): month = "November";
				break;
			case (11): month = "December";
				break;
			}
			do {
				cout << "Inches of rainfall in " << month << ": ";
				cin >> inches;

				if (inches >= 0) {
					total += inches;
				}

				if (inches < 0) {
					cout << "Please enter a positive integer for inches of rainfall.\n";
				}

			} while (inches < 0);
		}
	}
	cout << setprecision(2) << fixed << showpoint;
	cout << "There are " << years * 12 << " months of rainfall.\n";
	avg = static_cast<double>(total) / (static_cast<double>(years) * 12);
	cout << "The average rainfall per month for the entire period is " << avg << " inches.";
	cout << endl << "Alex" << endl;

	return 0;
}