#include <iostream>
#include <iomanip>
using namespace std;

//12. Software Sales

int main() {

	cout << "This program determines the total cost of sale given a discount based on number of units sold!\n\n";

	int numberUnits, unitCost = 99;
	float discount1 = .20, discount2 = .30, discount3 = .40, discount4 = .50, total;

	cout << "Please eneter the number of units being sold ($99 ea): ";
	cin >> numberUnits;

	total = numberUnits * unitCost;

	cout << showpoint << fixed << setprecision(2);

	if (numberUnits == 0) {
		cout << "\nPlease try again. The program only works when you input at least 1 unit.\n";
	}
	else if (numberUnits < 10) {
		cout << "\nThe total cost of the purchase is: $" << total<<endl;
	}
	else if (numberUnits >= 10 && numberUnits <= 19) {
		cout << "\nThe total cost of the purchase is: $" << total + (total * discount1)<<endl;
	}
	else if (numberUnits >= 20 && numberUnits <= 49) {
		cout << "\nThe total cost of the purchase is: $" << total + (total * discount2)<<endl;
	}
	else if (numberUnits >= 50 && numberUnits <= 99) {
		cout << "\nThe total cost of the purchase is: $" << total + (total * discount3)<<endl;
	}
	else if (numberUnits >= 100 ) {
		cout << "\nThe total cost of the purchase is: $" << total + (total * discount4)<<endl;
	}


	return 0;
}