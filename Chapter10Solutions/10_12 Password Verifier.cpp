#include <iostream>

using namespace std;
bool testPassword(char*);
int main() {
	const int SIZE = 20;

	char password[SIZE];

	bool test;

	do {
		cout << "ENTER PASSWORD: ";
		cin.getline(password, SIZE);
		test = testPassword(password);
	} while (test == false);

	cout << "\nPASSWORD SAVED.\n";

	return 0;
}
bool testPassword(char* password) {
	bool upper_check = false, digit_check = false;
	int lower_check = 0;
	if (strlen(password) < 6) {
		cout << "ERROR: Password to short (Minimum 6 characters).\n";
		return false;
	}

	for (int i = 0; i < strlen(password); i++) {
		if (isupper(password[i])) {
			upper_check = true;
		}
		if (islower(password[i])) {
			lower_check++;
		}
		if (isdigit(password[i])) {
			digit_check = true;
		}
	}

	if (upper_check == false) {
		cout << "ERROR: At least one uppercase character is required.\n";
		return false;
	}
	else if (lower_check < 2) {
		cout << "ERROR: At least two lower case characters are required.\n";
		return false;
	}
	else if (digit_check == false) {
		cout << "ERROR: At least one digit is required.\n";
		return false;
	}
	else {
		return true;
	}
}