#include <iostream>

using namespace std;


bool checkUserInput(int[], int, int); //Function will confirm if the user input matches an account number

int main() {
	bool match;

	const int SIZE = 18;

	int user_input;

	int account_number[SIZE] = { 5658845,  4520125,  7895122,  8777541,  8451277,  1302850,
								8080152,  4562555,  5552012,  5050552,  7825877,  1250255,
								1005231,  6545231,  3852085,  7576651,  7881200,  4581002 };

	cout << "Please enter the 'Account Number'.\n";
	cout << "ACCOUNT NUMBER: ";
	cin >> user_input;

	match = checkUserInput(account_number, user_input, SIZE);

	if (match == true) {
		cout << "The number is valid.\n";
	}
	else {
		cout << "The number is invalid.\n";
	}

	return 0;
}

bool checkUserInput(int account_number[], int user_input, int SIZE) {
	bool match;
	for (int i = 0; i < SIZE; i++) {
		if (user_input == account_number[i]) {
			return true;
		}
	}
	return false;
}
