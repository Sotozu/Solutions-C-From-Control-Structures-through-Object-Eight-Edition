#include <iostream>
#include <iomanip>
#include "10 TemplateList.h"

using namespace std;

int main() {

	long int id;
	int h, counter = 0, finish_inputing = 1;
	double w, p;

	LinkedList10<long int> empID;

	LinkedList10<int> hours;

	LinkedList10<double> pay;
	
	LinkedList10<double> wages;


	cout << "Please enter employee information." << std::endl;
	cout << endl;

	while (finish_inputing) {

		cout << "Enter employee ID: "; cin >> id;
		empID.appendNode(id);
		do {
			cout << "Enter hours worked: "; cin >> h;
			if (h < 0) {
				cout << "Please enter values equal to or greater than 0." << endl;
			}
		} while (h < 0);
		hours.appendNode(h);

		do {
			cout << "Enter payrate: "; cin >> p;
			if (p < 15) {
				cout << "Please enter values equal to or greater than $15.00." << endl;
			}
		} while (p < 15);
		pay.appendNode(p);

		cout << endl;

		wages.appendNode(h * p);
		counter++;
		cout << "Continue inputing employee information?" << endl;
		cout << "Enter 0 to quit. Enter any other number to continue." << endl;
		cout << "CONTNUE?: "; cin >> finish_inputing;
		cout << endl;

	}

	cout << showpoint << fixed << setprecision(2);
	for (int i = 0; i < counter; i++) {
		cout << "EMPLOYEE " << i+1 << ":" << endl;
		cout << "ID: " << empID.returnValueAtIndex(i) << endl;
		cout << "HOURS WORKED: " << hours.returnValueAtIndex(i) << endl;
		cout << "PAY RATE: $" << pay.returnValueAtIndex(i) << endl;
		cout << "WAGES: $" << wages.returnValueAtIndex(i) << endl;
		cout << endl;

	}
	return 0;
}