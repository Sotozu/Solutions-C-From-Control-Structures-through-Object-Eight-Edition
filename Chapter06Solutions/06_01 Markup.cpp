#include <iostream>
#include <iomanip>
using namespace std;

//1. Markup

double calculateRetail(double, double);

int main() {

	double sale, total, percent;

	do {
		cout << "Please enter the wholesale cost of the item: $";
		cin >> sale;
		if (sale < 0) {
			cout << "ERROR: Enter a positive value.\n";
		}
	} while (sale < 0); //check to not let negative values be set to sale

	do {
		cout << "Please enter the markup percent of item (%): ";
		cin >> percent;
		if (percent < 0) {
			cout << "ERROR: Enter a positive value.\n";
		}
	} while (percent < 0);//check to not let negative values be set to percent

	if (percent > 1) {
		percent = percent / 100;
	}

	total = calculateRetail(sale, percent);
	cout << fixed << showpoint << setprecision(2);
	cout << "The retail price for the item is: $" << total;

	return 0;
}


double calculateRetail(double sale, double percent) {
	int total = sale + (sale * percent);

	return total;
}