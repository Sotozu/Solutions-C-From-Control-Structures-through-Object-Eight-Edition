#include <iostream>
#include <iomanip>

#include "17 Cash Register.h"
#include "17 Inventory Item.h"

using namespace std;

void showItems(InventoryItem*);
const int SIZE = 5;
int item_num, item_quan;
double subtotal = 0, tax = 0, total = 0;
char cont, up_cont;
int main() {
	InventoryItem item[SIZE] = { 
		InventoryItem("Towels", 8.50, 200),
		InventoryItem("Bed Covers", 20.00, 150),
		InventoryItem("Curtain", 15.50, 75),
		InventoryItem("Pillows", 10.00, 500),
		InventoryItem("Shower Curtain", 12.50, 125) 
		};

	CashRegister register1;
	bool end = false;
	showItems(item);
	cout << endl;
	do {


		do {
			cout << "Add an Item to The Cart" << endl;
			cout << "Item Number #: "; cin >> item_num;
			if (item_num < 1 || item_num > 5) {
				cout << "ERROR: Please enter a valid item number.\n";
			}
		} while (item_num < 1 || item_num > 5);
		item_num -= 1;
		do {
			cout << "How many of the item?" << endl;
			cout << "Item Quantity: "; cin >> item_quan;
			if (item_quan < 0) {
				cout << "ERROR: Please enter a positive value.\n";
			}
			if ((item[item_num].getUnits() - item_quan) < 0) {
				cout << "ERROR: Not enough units in inventory.\n";
				cout << item[item_num].getUnits() << " left.\n";
			}
		} while (item_quan < 0 || (item[item_num].getUnits() - item_quan) < 0);
		cout << endl;
		cout << "Enter new item?" << endl;

		/*
		Update the variables;
		*/
		item[item_num].setUnits(item[item_num].getUnits() - item_quan); // sets the new unit amount left for that item

		subtotal += register1.calcSubtotal(item[item_num].getCost(), item_quan);
		tax += register1.calcTax(item[item_num].getCost(), item_quan);
		total += register1.calcTotal(item[item_num].getCost(), item_quan);

		/*
		Determine whether to continue
		*/
		do {
			cout << "(Y/N): "; cin >> cont;
			up_cont = toupper(cont);
			if (up_cont != 'Y' && up_cont != 'N') {
				cout << "ERROR: Please enter a valid option.\n";
			}
		} while (up_cont != 'Y' && up_cont != 'N');

	} while (up_cont != 'N');

	cout << showpoint << fixed << setprecision(2);

	cout << "Subtotal: $" << subtotal << endl;
	cout << "Tax: $" << tax << endl;
	cout << "TOTAL: $" << total << endl;
	return 0;
}

void showItems(InventoryItem* d){
	cout << setw(14) << left << "ITEM NUMBER#" << setw(15) << left << "DESCRIPTION" << setw(10) << left << "COST" << setw(10) << left << "UNITS" << endl;

	for (int i = 0; i < SIZE; i++) {
		cout << "# " << i+1 << ":" << setw(10) << left << "" << setw(15) << left <<d[i].getDescription() << "|$" << setw(8) << left << d[i].getCost() << "|" <<setw(10) << left << d[i].getUnits() << endl;
	}
}
