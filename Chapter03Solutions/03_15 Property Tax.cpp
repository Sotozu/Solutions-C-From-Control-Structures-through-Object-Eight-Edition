#include <iostream>
#include <iomanip>
using namespace std;

//15. Property Tax

int main() {
	float value, tax, assesment;
	float assesmentPercent = 0.6;


	cout << "This program takes in the actual value of an acre and then computes its assesment value and property tax.\n\n";
	cout << "Please enter the actual value of the property: $";
	cin >> value;

	assesment = value * assesmentPercent;
	tax = (assesment / 100) * .75;

	cout << setprecision(2) << fixed << showpoint;

	cout << left << setw(20)<<"Actual Value:" << "$" << right << setw(8) << value << endl;
	cout << left << setw(20)<<"Assesment Value:" << "$" << right << setw(8) << assesment << endl;
	cout << left << setw(20)<<"Tax:" << "$" << right << setw(8) << tax << endl<< endl;
	cout << endl << "Alex" << endl;

	return 0;
}