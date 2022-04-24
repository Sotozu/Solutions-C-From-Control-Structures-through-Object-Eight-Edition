
#include <iostream>
#include <iomanip>
#include "02 Employee.h"

using namespace std;

int main() {

	const int SIZE = 3;
	Employee emp[SIZE] = {
		Employee("Susan Meyer", 47899, "Accounting", "Vice President"),
		Employee("Mark Jones", 39119, "IT", "Programmer"),
		Employee("Joy Rogers", 81774, "Manufacturing", "Engineering")
	};

	cout << setw(18) << left << "NAME";
	cout << setw(10) << left << "ID";
	cout << setw(18) << left << "DEPARTMENT";
	cout << setw(18) << left <<"POSITION" << endl;
	for (int i = 0; i < 64; i++) {
		cout << "-";
	}
	cout << endl;

	for (int i = 0; i < SIZE; i++){

		cout << setw(18) << left << emp[i].getName();
		cout << setw(10) << left << emp[i].getID();
		cout << setw(18) << left << emp[i].getDepartment();
		cout << emp[i].getPosition() << endl;
		cout << endl;
	}

	return 0;
}