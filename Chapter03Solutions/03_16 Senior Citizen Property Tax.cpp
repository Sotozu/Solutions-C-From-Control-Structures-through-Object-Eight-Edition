#include <iostream>
#include <iomanip>
using namespace std;

//16. Senior Citizen Property Tax

int main() {

	
	float value, tax, assesment, quarter, discount = 5000;
	float assesmentPercent = 0.6;

	cout << "This program will calculated the assesment value, tax rate and\nquartly payments of a property for an eligible senior citizen.\n\n";
	cout << "Please enter the value of the property: $";
	cin >> value;

	assesment = value * assesmentPercent;
	assesment -= discount;
	tax = (assesment / 100) * 2.64;
	quarter = tax / 4;

	cout << setprecision(2) << fixed << showpoint << endl;

	cout << left << setw(20) << "Actual Value:" << "$" << right << setw(10) << value << endl;
	cout << left << setw(20) << "Assesment Value:" << "$" << right << setw(10) << assesment << endl;
	cout << left << setw(20) << "Annual Tax:" << "$" << right << setw(10) << tax << endl;
	cout << left << setw(20) << "Quarterly Payments:" << "$" << right << setw(10) << quarter << endl;
	cout << endl << "Alex" << endl;
	return 0;
}