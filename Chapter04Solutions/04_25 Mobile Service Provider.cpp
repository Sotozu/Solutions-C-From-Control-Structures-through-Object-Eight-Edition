#include <iostream>
#include <iomanip>
using namespace std;

//25. Mobile Service Provider

int main() {
	
	char package;
	double base_charge;
	int check1 = 0;
	int minutes;
	double additional_rate = 0;

	cout << "Please enter the subscription package you have with us." << endl;
	cout << "The packages are either 'A', 'B', or 'C'." << endl;
	cout << "Package: ";

	do {
		if (check1 > 0) {
			cout << "Please enter a correct subscription package type." << endl;
			cout << "Package: ";
		}
		cin >> package;
		check1++;
	} while (package != 'A' && package != 'B' && package != 'C');
	cout << "How many minutes has the customer used this month?" << endl;
	cout << "Minutes: ";
	cin >> minutes;
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