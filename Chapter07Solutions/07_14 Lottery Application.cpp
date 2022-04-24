#include <ctime>
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	const int SIZE = 5;

	int rand_num;
	int user_num;
	int counter = 0;

	int lotter_array[SIZE];
	int user_array[SIZE];
	int matching_digits[SIZE];

	srand(time(0));

	for (int i = 0; i < SIZE; i++) {
		rand_num = rand() % 9 + 1;
		lotter_array[i] = rand_num;
	}

	cout << "Please enter a number 1 - 9.,\n";

	for (int i = 0; i < SIZE; i++) {
		cout << "Number " << i + 1 << ": ";
		cin >> user_array[i];
	}

	for (int i = 0; i < SIZE; i++) {
		if (lotter_array[i] == user_array[i]) {
			counter++;
			matching_digits[i] = user_array[i]; // Will store the matching value;
		}
		else {
			matching_digits[i] = 0;
		}
	}

	cout << counter << " matched.\n";
	cout << setw(20) << left << "LOTTERY ARRAY: ";
	for (int i = 0; i < SIZE; i++) {
		cout << lotter_array[i];
	}
	cout << endl;
	cout << setw(20) << left << "MATCHING NUMBERS: ";

	for (int i = 0; i < SIZE; i++) {
		if (matching_digits[i] == 0) {
			cout << " ";
		}
		else {
			cout << matching_digits[i];
		}
	}
}