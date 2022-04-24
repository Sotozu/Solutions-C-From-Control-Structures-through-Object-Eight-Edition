#include <iostream>
#include <string>
#include <iomanip>
using namespace std;


int main() {
	const int MONTHS = 12;
	double rainfall_amounts[MONTHS];

	double max, min, total = 0;
	int max_month, min_month; //index for month_name[MONTHS]
	double average;

	string month_name[MONTHS] = { "January", "February", "March", "April", "May", "June", "July", "August",
	"September", "October", "November", "Decemeber" };

	cout << "Please enter the rainfall for the following months.\n";

	for (int i = 0; i < MONTHS; i++) {
		do {
			cout << month_name[i] << " rainfall (inches): ";
			cin >> rainfall_amounts[i];

			if (rainfall_amounts[i] < 0) {
				cout << "ERROR: Please enter a positive number.\n";
			}

		} while (rainfall_amounts[i] < 0);

		total += rainfall_amounts[i];
	}

	max = rainfall_amounts[0];
	min = rainfall_amounts[0];

	max_month = 0;
	min_month = 0;

	for (int i = 1; i < MONTHS; i++) {
		if (max < rainfall_amounts[i]) {
			max = rainfall_amounts[i];
			max_month = i;
		}
		if (min > rainfall_amounts[i]) {
			min = rainfall_amounts[i];
			min_month = i;
		}
	}

	average = total / MONTHS;
	cout << setprecision(2) << showpoint << fixed;
	cout << "Total Rainfall: " << total << endl;
	cout << "Month with the least rainfall: " << month_name[min_month] << " with " << min << " inches" << endl;
	cout << "Month with the most rainfall: " << month_name[max_month] << " with " << max << " inches" << endl;
	cout << "Average rainfall: " << average << endl;

	return 0;

}