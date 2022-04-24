#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//14.Monthly Sales Tax

int main() {
	
	string month, year;
	float totalCollected, totalSales, totalCountyTax, totalStateTax, totalSalesTax;

	float countyTaxRate = 0.02, stateTaxRate = 0.04;

	int width1 = 25, width2 = 15;

	cout << "This program will display formated information detailing the sales and taxes of a retail company for the end of the month.\n\n";
	cout << "Please enter the month: ";
	getline(cin, month);
	cout << "Please enter the year: ";
	getline(cin, year);
	cout << "Please enter the total collected at the cash register this month (USD): $";
	cin >> totalCollected;

	totalCountyTax = totalCollected * countyTaxRate;
	totalStateTax = totalCollected * stateTaxRate;
	totalSalesTax = totalStateTax + totalCountyTax;
	totalSales = totalCollected - totalSalesTax;

	cout << setprecision(2) << fixed << showpoint;

	cout << "\nYear: " << year << endl;
	cout << "Month: " << month <<endl;
	cout << "-----------------\n";
	cout << left << setw(width1) << "Total Collected:" << "$" << right << setw(width2) << totalCollected << endl;
	cout << left << setw(width1) << "Sales:" << "$" << right << setw(width2) << totalSales << endl;
	cout << left << setw(width1) << "County Sales Tax:" << "$" << right << setw(width2) << totalCountyTax << endl;
	cout << left << setw(width1) << "State Sales Tax:" << "$" << right << setw(width2) << totalStateTax << endl;
	cout << left << setw(width1) << "Total Sales Tax:" << "$" << right << setw(width2) << totalSalesTax << endl;
	cout << endl << "Alex" << endl;

	return 0;
}