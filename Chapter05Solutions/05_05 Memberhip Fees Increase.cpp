#include <iostream>
#include <iomanip>
using namespace std;

//5. Membership Fees Increase

int main() {


	double new_rate;
	double addition = 0;
	double base_charge = 2500;
	double rate_change = 0.04;

	for (int i = 0; i <= 5; i++) {

		base_charge = base_charge + addition; //setting the initial base charge to 2500 BUT this will change as we iterate
		addition = base_charge * rate_change; //calcualted what to add to the base charge
		base_charge = base_charge + addition; //Sets the base charge equal to itself plus the addition.

		cout << fixed << setprecision(2) << showpoint;
		cout << "Year "<< i <<": $" << base_charge << endl;
	}
	cout << endl << "Alex" << endl;

	return 0;
}