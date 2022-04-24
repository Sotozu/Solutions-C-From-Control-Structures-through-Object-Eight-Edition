#include <iostream>
#include <string>

using namespace std;

struct Division {
	string div_name;
	double q1_s, q2_s, q3_s, q4_s;
	double total;
	double average;
};
void outPut(const Division);

int main() {
	const int SIZE = 4;
	Division myCompany[SIZE];
	myCompany[0].div_name = "East";
	myCompany[1].div_name = "West";
	myCompany[2].div_name = "North";
	myCompany[3].div_name = "South";

	for (int i = 0; i < SIZE; i++) {
		cout << myCompany[i].div_name << " Division" << endl;
		do {
			cout << "First Quarter Sales: $";
			cin >> myCompany[i].q1_s;
			if (myCompany[i].q1_s < 0) {
				cout << "ERROR: Please enter a positive value.\n";
			}
		} while (myCompany[i].q1_s < 0);

		do {
			cout << "Second Quarter Sales: $";
			cin >> myCompany[i].q2_s;
			if (myCompany[i].q2_s < 0) {
				cout << "ERROR: Please enter a positive value.\n";
			}
		} while (myCompany[i].q2_s < 0);

		do {
			cout << "Third Quarter Sales: $";
			cin >> myCompany[i].q3_s;
			if (myCompany[i].q3_s < 0) {
				cout << "ERROR: Please enter a positive value.\n";
			}
		} while (myCompany[i].q3_s < 0);

		do {
			cout << "Fourth Quarter Sales: $";
			cin >> myCompany[i].q4_s;
			if (myCompany[i].q4_s < 0) {
				cout << "ERROR: Please enter a positive value.\n";
			}
		} while (myCompany[i].q4_s < 0);

		cout << endl;
		myCompany[i].total = myCompany[i].q1_s + myCompany[i].q2_s + myCompany[i].q3_s + myCompany[i].q4_s;
		myCompany[i].average = (myCompany[i].total / 4);
	}
	cout << "--OUTPUT--" << endl;
	for (int i = 0; i < SIZE; i++) {
		outPut(myCompany[i]);
		cout << endl;
	}

	return 0;
}

void outPut(const Division myCompany) {
	cout << myCompany.div_name << " Division" << endl;
	cout << "First Quarter Sales: $" << myCompany.q1_s << endl;
	cout << "Second Quarter Sales: $" << myCompany.q2_s << endl;
	cout << "Third Quarter Sales: $" << myCompany.q3_s << endl;
	cout << "Fourth Quarter Sales: $" << myCompany.q4_s << endl;
	cout << "Total Sales: $" << myCompany.total << endl;
	cout << "Average Quartely Sales: $" << myCompany.average << endl;
}