#include <iostream>
using namespace std;

// 11. Population

int main() {
		int orig, days;
		double growth_rate;

		cout << "Please enter the starting population of the orginisim.\n";
		cout << "Population: ";
		cin >> orig;

		cout << "\nPlease enter the daily growth rate of this population.\n";
		cout << "Growth Rate (example: 2 is 2%): ";
		cin >> growth_rate;

		growth_rate = growth_rate / 100;


		cout << "\nPlease enter the total amount of days that the population will be experiencing growth.\n";
		cout << "Days: ";
		cin >> days;

		for (int i = 0; i < days; i++) {
			orig = orig + (orig*growth_rate);
		}

		cout << "The size of the population after " << days << " days is " << orig;
		cout << endl << "Alex" << endl;

		return 0;
}