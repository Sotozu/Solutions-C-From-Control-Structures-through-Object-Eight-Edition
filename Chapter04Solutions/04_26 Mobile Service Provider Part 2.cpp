#include <iostream>
#include <iomanip>
using namespace std;

//26. Mobile Service Provider Part 2

int main() {

	char package;
	double base_charge;
	int check1 = 0;
	int minutes;
	double additional_rate = 0;
	double total1, total2, total3;

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
			additional_rate = (static_cast<double>(minutes) - 450) * 0.45;
		}
		cout << fixed << setprecision(2) << showpoint;
		total1 = additional_rate + base_charge;

		base_charge = 59.99;
		if (minutes > 900) {
			additional_rate = (minutes - 900) * 0.40;
		}
		total2 = additional_rate + base_charge;

		total3 = 69.99;

		cout << "Package Type: " << package << endl;
		cout << "Total Minutes: " << minutes << endl;
		cout << "The bill for this customer is: $" << total1 << endl << endl;

		if (total1 > total2) {

			cout << "If the customer had instead chosen package 'B' then they would have saved: $" << total1 - total2 << endl;
		}

		if (total1 > total3) {
			cout << "If the customer had instead choosen package 'C' then they would have saved: $" << total1 - total3 << endl;
		}

		break;
	case 'B':


		base_charge = 59.99;
		if (minutes > 900) {
			additional_rate = (static_cast<double>(minutes) - 900) * 0.40;
		}
		total2 = additional_rate + base_charge;

		total3 = 69.99;

		cout << "Package Type: " << package << endl;
		cout << "Total Minutes: " << minutes << endl;
		cout << "The bill for this customer is: $" << total2 << endl << endl;

		if (total2 > total3) {

			cout << "If the customer had instead chosen package 'C' then they would have saved: $" << total2 - total3 << endl;
		}

		break;
	case 'C':
		cout << fixed << setprecision(2) << showpoint;

		base_charge = 69.99;
		cout << "The bill for this customer is: $" << base_charge << endl;
		break;

		return 0;
	}
}