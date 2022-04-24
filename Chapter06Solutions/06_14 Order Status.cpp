#include <iostream>
using namespace std;



// 14. Order Status

void gatherInfo(int &, int&);
void calculate(int, int, int);

int main() {

	int spools_stock, spools_ordered, shipping, special_charges;
	gatherInfo(spools_stock, spools_ordered);
	calculate(spools_stock, spools_ordered, shipping = 10);


	return 0;
}
void gatherInfo(int &spools_stock, int &spools_ordered) {
	do {
		cout << "NUMBER OF SPOOLS ORDERED: ";
		cin >> spools_ordered;
		if (spools_ordered < 1) {
			cout << "ERROR: Enter 1 or more.\n";
		}
	} while (spools_ordered < 1);
	do {
		cout << "NUMBER OF SPOOLS IN STOCK: ";
		cin >> spools_stock;
		if (spools_stock < 0) {
			cout << "ERROR: Enter 0 or more.\n";
		}
	} while (spools_stock < 0);
}
void calculate(int spools_stock, int spools_ordered, int shipping) {

	int ready_to_ship = spools_ordered;
	int backorder;
	int total_shipping;
	int subtotal;

	if (spools_ordered >= spools_stock) {
		ready_to_ship = spools_stock;
	}

	cout << "READY TO SHIP: " << ready_to_ship << endl;

	if (spools_ordered > spools_stock) {
		backorder = spools_ordered - spools_stock;
		cout << "BACKORDER: " << backorder << endl;
	}
	subtotal = ready_to_ship * 100;
	total_shipping = ready_to_ship * shipping;
	cout << "SUBTOTAL READY TO SHIP: $" << subtotal << endl;

	cout << "TOTAL READY SHIPPING AND HANDLING: $" << total_shipping << endl;
	
	cout << "TOTAL FOR THE ORDER: $" << subtotal + total_shipping << endl;
	
}
