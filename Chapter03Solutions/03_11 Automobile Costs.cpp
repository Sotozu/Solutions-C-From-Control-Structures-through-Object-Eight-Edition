#include <iostream>
#include <iomanip>
using namespace std;

//11.Automobile Costs

int main() {

	
	float loanPayment, insurance, gas, oil, tires, maintenance, MonthlyCost, yearlyCost;
	int width = 0;

	cout << "This program determines the monthly and yearly expenses of you car given the following factors:\n\n";
	cout << right << setw(width) << "Monthly loan payment: $";
	cin >> loanPayment;
	cout << setw(width) << "Monthly insurance payment: $";
	cin >> insurance;
	cout << setw(width) << "Monthly gas costs: $";
	cin >> gas;
	cout << setw(width) << "Monthly oil costs: $";
	cin >> oil;
	cout << setw(width) << "Monthly tire costs: $";
	cin >> tires;
	cout << setw(width) << "Monthly maintenance costs: $";
	cin >> maintenance;

	MonthlyCost = loanPayment + insurance + gas + oil + tires + maintenance;
	yearlyCost = MonthlyCost * 12;

	cout << "\n\nThe total monthly costs of owning the car comes out to $" << MonthlyCost << ".\n";
	cout << "The yearly cost of owning this car comes out to be $" << yearlyCost << ".\n";
	
	cout << endl << "Alex" << endl;
	return 0;
}