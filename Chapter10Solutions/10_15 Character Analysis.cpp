#include <iostream>
#include <fstream>

using namespace std;

// NOTE: I don't have access to the the file required. I will be using my own.
int main() {

	ifstream inFile;
	char input;
	int lower_case = 0, upper_case = 0, numbers = 0;

	inFile.open("text.txt");
	if (inFile.fail()) {
		cout << "ERROR: File failed to open.\n";
		return 0;
	}
	while (!inFile.eof()) {
		inFile >> input;
		if (inFile.eof()) {
			break;
		}
		if (islower(input)) {
			lower_case++;
		}
		else if (isupper(input)) {
			upper_case++;
		}
		else if (isdigit(input)) {
			numbers++;
		}

	}

	cout << "Lower case: " << lower_case << endl;
	cout << "Upper case: " << upper_case << endl;
	cout << "Digits: " << numbers << endl;


	return 0;
}