#include <iostream>
#include <string>

using namespace std;

struct Bin {
	string part_name;
	int part_count;

};

enum State { WORKING = 1, EXIT };

void displayBins(Bin, int);
void displayMenu();
bool checkUserInput(int);
bool checkBinInput(int);
void AddParts(Bin*);
void RemoveParts(Bin*);
int main() {

	const int SIZE = 10;

	int user_input, user_input2, bin_num;

	Bin parts[SIZE] = {
		{"Valve", 10},
		{"Bearing", 5},
		{"Bushing", 15},
		{"Coupling", 21},
		{"Flange", 7},
		{"Gear", 5},
		{"Gear Housing", 5},
		{"Vacuum Gripper", 25},
		{"Cable", 18},
		{"Rod", 12}
	};

	cout << "-----ALL BINS-----" << endl;
	for (int i = 0; i < SIZE; i++) {
		displayBins(parts[i], i);
		cout << endl;
	}
	do {

		displayMenu();

		do {
			cout << "ENTER OPTION: ";
			cin >> user_input;
		} while (!checkUserInput(user_input));

		if (user_input == 1) {

			do {
				cout << "ENTER BIN NUMBER: ";
				cin >> bin_num;
			} while (!checkBinInput(bin_num));
			cout << endl;

			do {
				cout << "1. REMOVE PARTS" << endl;
				cout << "2. ADD PARTS" << endl;
				cout << "ENTER OPTION: ";
				cin >> user_input2;
			} while (!checkUserInput(user_input2));
			cout << endl;

			if (user_input2 == 1) {
				if (parts[bin_num].part_count == 0) {
					cout << "Bin is empty.\n";
					cout << "Can't remove parts.\n";
					cout << endl;
				}
				else {
					RemoveParts(&parts[bin_num]);
					cout << endl;
				}

			}
			else {
				if (parts[bin_num].part_count == 20) {
					cout << "Bin is full, can't add more parts.\n"; \
						cout << endl;
				}
				else {
					AddParts(&parts[bin_num]);
					cout << endl;
				}

			}
			displayBins(parts[bin_num], (bin_num - 1));
			cout << endl;
		}
		cout << endl;

	} while (user_input != EXIT);
	cout << "THANK YOU! GOOD BYE." << endl;
	return 0;
}

void displayBins(Bin parts, int count) {
	cout << "Bin Number: " << count + 1 << endl;
	cout << "Part Name: " << parts.part_name << endl;
	cout << "Part Count: " << parts.part_count << endl;
}

void displayMenu() {
	cout << "---MENU---" << endl;
	cout << "1. SELECT A BIN" << endl;
	cout << "2. EXIT" << endl;
}

bool checkUserInput(int user_input) {
	if (user_input != 1 && user_input != 2) {
		cout << "ERROR: Please enter a valid menu option.\n";
		return false;
	}
	else {
		return true;
	}

}

bool checkBinInput(int bin_num) {
	if (bin_num < 1 || bin_num > 10) {
		cout << "ERROR: Please enter a valid bin number.\n";
		return false;
	}
	else {
		return true;
	}
}

void AddParts(Bin* parts) {
	int add_parts;
	do {
		cout << "How many parts would you like to add?\n";
		cout << "ENTER AMOUNT: ";
		cin >> add_parts;

		if (parts->part_count + add_parts > 30) {
			cout << "There can only be a max number of 20 parts per bin.\n";
			cout << "Please enter a number equal or less than " << parts->part_count << endl;
		}
		else {
			parts->part_count += add_parts;
			return;
		}

	} while (parts->part_count + add_parts > 30);
}
void RemoveParts(Bin* parts) {
	int remove_parts;

	do {
		cout << "How many parts would you like to remove?\n";
		cout << "ENTER AMOUNT: ";
		cin >> remove_parts;

		if (parts->part_count - remove_parts < 0) {
			cout << "There are " << parts->part_count << " parts in the bin.\n";
			cout << "Please enter a number equal or less than " << parts->part_count << endl;
		}
		else {
			parts->part_count -= remove_parts;
		}

	} while (parts->part_count - remove_parts < 0);
}