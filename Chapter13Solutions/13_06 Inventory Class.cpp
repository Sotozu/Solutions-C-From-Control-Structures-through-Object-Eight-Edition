#include <iostream>
#include <iomanip>
#include "06 Inventory Class.h"

using namespace std;

int main() {
	int x;
	double y;

	const int SIZE = 3;
	Inventory inv[SIZE];
	
	for (int i = 0; i < SIZE; i++) {
		cout << "ENTRY " << i + 1 << endl;
		do {
			cout << "Item Number: "; cin >> x;
		} while (!inv[i].validData(x));
		inv[i].setItemNumber(x);

		do {
			cout << "Quantity: "; cin >> x;
		} while (!inv[i].validData(x));
		inv[i].setQuantity(x);

		do {
			cout << "Cost: $"; cin >> y;
		} while (!inv[i].validData(y));

		inv[i].setCost(x);
		inv[i].setTotalCost(x, y);
		cout << endl;
	}
	cout << "OBJECT INFORMATION" << endl;
	cout << fixed << showpoint << setprecision(2);
	for (int i = 0; i < SIZE; i++) {
		cout << "ENTRY " << i + 1 << endl;
		cout << "Item Number: " << inv[i].getItemNumber() << endl;
		cout << "Quantity: " << inv[i].getQuantity() << endl;
		cout << "Cost: $" << inv[i].getCost() << endl;
		cout << "TOTAL COST: $" << inv[i].getTotalCost() << endl;
		cout << endl;
	}

	return 0;
}
