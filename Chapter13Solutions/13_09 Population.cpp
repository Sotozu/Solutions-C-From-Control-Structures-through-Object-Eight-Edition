#include <iostream>

#include "09 Population.h"

using namespace std;

bool validPopData(int);
bool validNumData(int);
int main() {
	int b, d, p;
	cout << "Please enter the following information USA this year.\n";
	do {
		cout << "Population: "; cin >> p;
	} while (!validPopData(p));
	do {
	cout << "Number of Births: "; cin >> b;
	
	} while (!validNumData(b));

	do {
		cout << "Number of Deaths: "; cin >> d;
	
	} while (!validNumData(d));


	Population usa(b, p, d);
	cout << endl;
	cout << "Birth Rate: " << usa.getBirthRate() << endl;
	cout << "Death Rate: " << usa.getDeathRate() << endl;

	cout << "Please enter new information for the following\n";
	do {
		cout << "Population: "; cin >> p;
	} while (!validPopData(p));
	do {
		cout << "Number of Births: "; cin >> b;

	} while (!validNumData(b));
	
	do {
		cout << "Number of Deaths: "; cin >> d;

	} while (!validNumData(d));


	usa.setBirthNum(b);
	usa.setDeathNum(d);
	usa.setPopulation(p);
	cout << endl;
	cout << "Birth Rate: " << usa.getBirthRate() << endl;

	cout << "Death Rate: " << usa.getDeathRate() << endl;

	return 0;
}
bool validPopData(int p) {
	if (p < 1) {
		std::cout << "ERROR: Please enter a number equal to or greater than 1.\n";
		return false;
	}

	return true;
}
bool validNumData(int n) {
	if (n < 0) {
		std::cout << "ERROR: Please enter a number equal to or greater than 0.\n";
		return false;
	}

	return true;

}
