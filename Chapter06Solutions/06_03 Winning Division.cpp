#include <iostream>
#include <string>
using namespace std;

// 3. Winning Division

double getSales(double &);
void findHighest(double, double, double, double);

int main() {

	double division[4];
	string divNames[4] = { "North East", "South East", "North West", "South West" };
	for (int i = 0; i < 4; i++) {
		cout << "Please enter the sales for the " << divNames[i] << " division.\n";
		getSales(division[i]);
	}
	findHighest(division[0], division[1], division[2], division[3]);
	return 0;
 }

double getSales(double &division) {
	do {
		cout << "Sales: $";
		cin >> division;
		if (division < 0) {
			cout << "ERROR: Please enter a positive sales figure.\n";
		}
	} while (division < 0);
	return division;
}

void findHighest(double northE, double southE, double northW, double southW) {
	double check[4] = { northE, southE, northW, southW };
	string divNames[4] = { "North East", "South East", "North West", "South West" };

	int count = 0;
	for (int i = 1; i < 4; i++) {
		if (check[0] < check[i]) {
			check[0] = check[i];
			count++;
		}
	}
	cout << divNames[count] << " has the highest sales of: $" << check[0];
}