#include <iostream>
#include <string>

using namespace std;

int main() {

	int max_chars;
	const int SIZE = 40;
	const int MAX_SIZE = 50;
	int count = 0;

	int important;

	int begin = 0;

	char user_input[SIZE], fname[SIZE], mname[SIZE], lname[SIZE], whole_name[MAX_SIZE];
	cout << "Enter your whole name (first middle and last).\n";
	cout << "ENTER: ";

	cin.get(user_input, SIZE);

	for (int i = 0; i < strlen(user_input); i++) {
		if (count == 0) {
			if (isalpha(user_input[i])) {
				fname[i] = user_input[i];
			}
			else {
				fname[i] = '\0';
				important = i + 1;
				count++;
			}
		}
		else if (count == 1) {
			if (isalpha(user_input[i])) {
				mname[i - important] = user_input[i];
			}
			else {
				mname[i - important] = '\0';
				important = i + 1;
				count++;
			}
		}
		else if (count == 2) {
			lname[i - important] = user_input[i];
			if (i == strlen(user_input) - 1) {
				lname[i - important + 1] = '\0';
			}
		}

	}

	for (int i = 0; i < strlen(fname); i++) {
		whole_name[i] = fname[i];
	}

	whole_name[strlen(fname)] = ',';
	whole_name[strlen(fname) + 1] = ' ';

	int index = strlen(fname) + 2;

	for (int i = 0; i < strlen(mname); i++) {

		whole_name[i + index] = mname[i];

	}
	whole_name[strlen(mname) + index] = ' ';

	index += strlen(mname) + 1;

	for (int i = 0; i < strlen(lname); i++) {

		whole_name[i + index] = lname[i];

	}

	index += strlen(lname);

	whole_name[index] = '\0';

	cout << whole_name;


	return 0;
}