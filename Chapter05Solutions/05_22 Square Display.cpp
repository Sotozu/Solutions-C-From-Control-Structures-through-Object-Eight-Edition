#include <iostream>
using namespace std;

//22. Square Display

int main() {

	int user_input;
	char unit = 'X';

	cout << "Enter and integer 1-15." << endl;
	do {
		cout << "Enter number: ";
		cin >> user_input;
		if (user_input > 15 || user_input <= 0) {
			cout << "Please re-enter a valid number." << endl;
		}
	} while (user_input > 15 || user_input <= 0);
	for (int i = 0; i < user_input; i++) {
		for (int j = 0; j < user_input; j++) {
			cout << unit;
		}
		cout << endl;
	}

	cout << endl << "Alex" << endl;

	return 0;
}