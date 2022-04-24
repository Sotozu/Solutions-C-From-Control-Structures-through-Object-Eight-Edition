#include <iostream>
#include <string>

using namespace std;

int main() {
	const int SALSA = 5;
	string salsa_names[SALSA] = { "mild","medium", "sweet", "hot","zesty" };
	double salsa_sold[SALSA];
	int max_index, min_index;
	double salsa_max, salsa_min;

	cout << "Please enter the sales for each type of salsa:\n";

	for (int i = 0; i < SALSA; i++) {
		cout << "sales for " << salsa_names[i] << " salsa: $";
		cin >> salsa_sold[i];
	}

	salsa_max = salsa_sold[0];
	salsa_min = salsa_sold[0];

	for (int i = 1; i < SALSA; i++) {

		if (salsa_max < salsa_sold[i]) {
			salsa_max = salsa_sold[i];
			max_index = i;
		}

		if (salsa_min > salsa_sold[i]) {
			salsa_min = salsa_sold[i];
			min_index = i;
		}
	}

	cout << "\nSALSA SALES REPORT\n";

	for (int i = 0; i < SALSA; i++) {
		cout << salsa_names[i] << ": $" << salsa_sold[i] << endl;
	}
	cout << endl;
	cout << "Most sales were made by " << salsa_names[max_index] << " salsa with $" << salsa_max << " in sales.\n";
	cout << "Least sales were made by " << salsa_names[min_index] << " salsa with $" << salsa_min << " in sales.\n";

	return 0;
}