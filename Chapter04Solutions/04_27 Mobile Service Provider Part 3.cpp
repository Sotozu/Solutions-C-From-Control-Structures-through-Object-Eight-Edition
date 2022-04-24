#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//27. Mobile Service Provider Part 3

int main() {

	string month;
	int minute_limit;
	bool check1 = false;

	cout << "What month are the minutes being charged to?" << endl;
	cout << "Please enter the name of the month: ";
	
	do {
		cin >> month;

		if (month == "January") {
			minute_limit = 44640;
			check1 = false;
		}
		else if (month == "February") {
			minute_limit = 40320;
			check1 = false;
		}
		else if (month == "March") {
			minute_limit = 44640;
			check1 = false;
		}
		else if (month == "April") {
			minute_limit = 43200;
			check1 = false;
		}
		else if (month == "May") {
			minute_limit = 44640;
			check1 = false;
		}
		else if (month == "June") {
			minute_limit = 43200;
			check1 = false;
		}
		else if (month == "July") {
			minute_limit = 44640;
			check1 = false;
		}
		else if (month == "August") {
			minute_limit = 44640;
			check1 = false;
		}
		else if (month == "September") {
			minute_limit = 43200;
			check1 = false;
		}
		else if (month == "October") {
			minute_limit = 44640;
			check1 = false;
		}
		else if (month == "November") {
			minute_limit = 43200;
			check1 = false;
		}
		else if (month == "December") {
			minute_limit = 44640;
			check1 = false;
		}
		else {
			check1 = true;
			cout << "\nPlease enter a month: ";
		}
	} while (check1 == true);


	char package;
	double base_charge;
	int minutes;
	int check2 = 0;
	int check3 = 0;
	double additional_rate = 0;

	cout << "\nPlease enter the subscription package you have with us." << endl;
	cout << "The packages are either 'A', 'B', or 'C'." << endl;
	cout << "Package: ";

	do {
		if (check2 > 0) {
			cout << "Please enter a correct subscription package type." << endl;
			cout << "Package: ";
		}
		cin >> package;
		check2++;
	} while (package != 'A' && package != 'B' && package != 'C');
	cout << "How many minutes has the customer used this month?" << endl;
	cout << "Minutes: ";

	do {
		check3 = 0;
		cin >> minutes;
		if (minutes > minute_limit) {
			check3 = 1;
			cout << "The amount of minutes is greater than the minutes in month. Please re-enter minutes within the range of the month." << endl;
			cout << "Minutes: ";
		}
	} while (check3 == 1);

	switch (package) {
	case 'A':

		base_charge = 39.99;

		if (minutes > 450) {
			additional_rate = (static_cast<double>(minutes) - 450)*0.45;
		}
		cout << fixed << setprecision(2) << showpoint;
		cout << "The bill for this customer is: $" << additional_rate + base_charge << endl;

		break;
	case 'B':

		base_charge = 59.99;

		if (minutes > 900) {
			additional_rate = (static_cast<double>(minutes) - 450) * 0.40;
		}
		cout << fixed << setprecision(2) << showpoint;
		cout << "The bill for this customer is: $" << additional_rate + base_charge << endl;

		break;
	case 'C':
		cout << fixed << setprecision(2) << showpoint;

		base_charge = 69.99;
		cout << "The bill for this customer is: $" << base_charge << endl;
		break;
		}
	return 0;
}