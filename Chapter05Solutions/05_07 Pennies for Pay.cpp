#include <iostream>
#include <iomanip>
using namespace std;

// 7. Pennies for Pay

int main() {


		double total_penies = 0;
		double total_dollars;
		int days;
		cout << "Please enter the number of days worked: ";
		cin >> days;

		for (int i = 0; i <= days; i++) {
			total_penies += i;
		}
		if (total_penies < 100) {
			cout << "In " << days << " days you have earned: " << total_penies << " penies.";
			return 0;
		}
		cout << fixed << showpoint << setprecision(2);

		total_dollars = (total_penies / 100);
		cout << "In " << days << " days you have earned: $" << total_dollars;
		cout << endl << "Alex" << endl;

		return 0;
}