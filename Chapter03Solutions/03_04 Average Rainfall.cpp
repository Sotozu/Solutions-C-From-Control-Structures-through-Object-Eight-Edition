#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//4. Average Rainfall

int main() {


	string month1, month2, month3;
	float rain1, rain2, rain3;
	float averagerainfall;

	cout << "This program calculates the average rainfall in a period of 3 months.\n";
	cout << "Please enter the name of the first month: ";
	cin >> month1;
	cout << "How much rain fell during this month (inches): ";
	cin >> rain1;
	cout << endl;
	cout << "Please enter the name of the second month: ";
	cin >> month2;
	cout << "How much rain fell during this month (inches): ";
	cin >> rain2;
	cout << endl;
	cout << "Please enter the name of the third month: ";
	cin >> month3;
	cout << "How much rain fell during this month (inches): ";
	cin >> rain3;
	cout << endl;

	averagerainfall = (rain1 + rain2 + rain3) / 3;
	cout<< "The average rainfall for " << month1 << ", " << month2 << ", and " << month3 << " is "
		<< setprecision(2) << fixed << showpoint << averagerainfall << " inches.";

	cout << endl << "Alex" << endl;
	
	return 0;
}