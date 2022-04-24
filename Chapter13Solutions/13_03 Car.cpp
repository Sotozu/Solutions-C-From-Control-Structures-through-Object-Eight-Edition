#include <iostream>
#include <string>
#include "03 Car.h"

using namespace std;

int main() {
	int year;
	std::string name;

	cout << "Please enter the year the model of the car was made.\n";
	cout << "YEAR: "; cin >> year;
	cout << "Please enter the model name.\n";
	cin.ignore();
	cout << "NAME: "; getline(cin, name);
	Car customer(year, name);
	cout << endl;
	cout << "Car Speed: " << customer.getSpeed() << endl << endl;
	cout << "Using the accelerate function.\n" << endl;
	for (int i = 0; i < 5; i++) {
		customer.accelerate();
		cout << "Car Speed: " << customer.getSpeed() << endl;
	}
	cout << endl;
	cout << "Using the brake function.\n" << endl;

	for (int i = 0; i < 5; i++) {
		customer.brake();
		cout << "Car Speed: " << customer.getSpeed() << endl;
	}
	return 0;
}
