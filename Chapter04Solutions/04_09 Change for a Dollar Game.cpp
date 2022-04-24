#include <iostream>
using namespace std;

//9. Change for a Dollar Game

int main() {

	cout << "This program asks the user to enter a number of coins given their worth. If it totals $1.00 they are congradulated!\n\n";

	int pennies, nickles, dimes, quarters;
	int pen = 1, nic = 5, dim = 10, qua = 25, sum;

	cout << "Please enter a number of pennies: ";
	cin >> pennies;
	cout << "\nPlease enter a number of nickles: ";
	cin >> nickles;
	cout << "\nPlease enter a number of dimes: ";
	cin >> dimes;
	cout << "\nPlease enter a number of quarters: ";
	cin >> quarters;

	sum = (pen * pennies) + (nic * nickles) + (dim * dimes) + (qua * quarters);

	if (sum == 100)

		cout << "\nCongradulations! The total is equal to $1.00!\n";
	else

		cout << "\nSorry the total is" << (sum > 100 ? " greater " : " less " )<< "than a dollar.\n";
		
	return 0;
}