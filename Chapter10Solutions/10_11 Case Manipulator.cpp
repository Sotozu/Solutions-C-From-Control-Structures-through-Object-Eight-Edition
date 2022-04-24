#include <iostream>
#include <string>

using namespace std;

void reverse(char*);
void lower(char*);
void upper(char*);

int main() {
	const int SIZE = 50;
	char my_arr[SIZE];



	cout << "Enter a string: ";
	cin.getline(my_arr, SIZE);

	cout << "\nCHANGES\n";

	reverse(my_arr);
	cout << my_arr << endl;

	lower(my_arr);
	cout << my_arr << endl;

	upper(my_arr);
	cout << my_arr << endl;

	return 0;
}

void reverse(char* my_arr) {
	for (int i = 0; i < strlen(my_arr); i++) {
		if (isalpha(my_arr[i])) {

			if (islower(my_arr[i])) {

				my_arr[i] = toupper(my_arr[i]);

			}
			else {
				my_arr[i] = tolower(my_arr[i]);

			}
		}
	}

}

void lower(char* my_arr) {
	for (int i = 0; i < strlen(my_arr); i++) {
		if (isalpha(my_arr[i])) {

			if (!islower(my_arr[i])) {

				my_arr[i] = tolower(my_arr[i]);

			}
		}
	}

}
void upper(char* my_arr) {
	for (int i = 0; i < strlen(my_arr); i++) {
		if (isalpha(my_arr[i])) {

			if (!isupper(my_arr[i])) {

				my_arr[i] = toupper(my_arr[i]);

			}

		}
	}
}