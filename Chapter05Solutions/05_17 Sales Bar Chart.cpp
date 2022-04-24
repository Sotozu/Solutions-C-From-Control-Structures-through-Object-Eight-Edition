#include <iostream>
using namespace std;

//17. Sales Bar Chart

int main() {
	double sales[4];
	int asteriks[4];
	int hundreds;

	for (int i = 0; i < 4; i++) {
		cout << "Please enter the sales for store #" << i << ": $";
		cin >> sales[i];
		asteriks[i] = sales[i] / 100;
	}

	cout << "\nSALES BAR CHART\n";
	cout << "(Each * = $100)\n";



	for (int i = 0; i < 4; i++) {
		cout << "Store " << i << ":";
		for (int j = 0; j < asteriks[i]; j++) {
			cout << "*";
		}
		cout << endl;
	}

	cout << endl << "Alex" << endl;
	return 0;
}