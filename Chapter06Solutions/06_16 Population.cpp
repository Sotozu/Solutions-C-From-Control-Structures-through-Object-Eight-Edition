#include <iostream>
#include <iomanip>
using namespace std;


// 16. Population

void population_size(int, double, double, int);

int main() {

	int starting_size, years;
	double birth_rate, death_rate;
	

	cout << "Enter the starting size of the population.\n";
	do {
		cout << "STARTING SIZE: ";
		cin >> starting_size;
		if (starting_size < 2) {
			cout << "ERROR: Please enter a number equal or greate than 2.\n";
		}
	} while (starting_size < 2);

	cout << "Enter the birthrate of the population.\n";
	do {
		cout << "BIRTH RATE(%): ";
		cin >> birth_rate;
		if (birth_rate < 0) {
			
		}
	} while (birth_rate < 0);

	cout << "Enter the death rate of the population.\n";
	do {
		cout << "DEATH RATE(%): ";
		cin >> death_rate;
		if (death_rate < 0) {
			cout << "ERROR: Please enter a positive number.\n";
		}
	} while (death_rate < 0);


	cout << "Enter the number of years to record the population.\n";
		do {
		cout << "YEARS: ";
		cin >> years;
		if (years < 1){
		cout << "ERROR: Please enter a positive number equal or greater than 1.\n";
		}
	} while (years < 1);

	population_size(starting_size, birth_rate, death_rate, years);

	return 0;
}

void population_size(int starting_size, double birth_rate, double death_rate, int years) {
	if (death_rate > 1) {
		death_rate /= 100;
	}
	if (birth_rate > 1) {
		birth_rate /= 100;
	}

	for (int i = 0; i < years; i++) {
		cout << "YEAR: " << setw(5) << left << i+1 << "POPULATION: " << starting_size << endl;
		starting_size = starting_size + (birth_rate * starting_size) - (death_rate * starting_size);
	}
}
