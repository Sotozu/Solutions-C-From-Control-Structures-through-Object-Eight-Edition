#include <iostream>
#include <vector>

using namespace std;

bool numCheck(int); // checks if the number inputed is 1 - 9 and unique. will return false if not 1 - 9 or unique.

const int ROW = 3;
const int COLUMN = 3;
const int SIZE = 9;

int main() {
	int magic_square[ROW][COLUMN];
	bool check;

	cout << "Please enter the numbers for the Los Shu Magic Square.\n";

	for (int i = 0; i < ROW; i++) {
		cout << "Column (" << i + 1 << ") of the square.\n";
		for (int j = 0; j < COLUMN; j++) {
			do {
				check = true; // will reset to true for every re-entry;
				cout << "Row " << j + 1 << ": ";
				cin >> magic_square[i][j];
				check = numCheck(magic_square[i][j]); //will return true if the number in magic_sqaure[i][j] is
													  //between 1 - 9 and has not been entered before

			} while (check != true);
		}
		cout << endl;
	}


	for (int i = 0; i < ROW; i++) { // Will determine if every column equals 15
		int sum = 0;
		for (int j = 0; j < COLUMN; j++) {
			sum += magic_square[i][j];
		}
		if (sum != 15) {
			cout << "This is NOT a Lo Shu Magic Square.\n";
			return 0; // ends the program
		}
	}

	for (int j = 0; j < COLUMN; j++) { //will determine if every row equals 15;
		int sum = 0;
		for (int i = 0; i < ROW; i++) {
			sum += magic_square[i][j];
		}
		if (sum != 15) {
			cout << "This is NOT a Lo Shu Magic Square.\n";
			return 0; // ends the program
		}
	}

	cout << "This is a Lo Shu Magic Square!\n";
	return 0;
}

bool numCheck(int num) {
	static vector<int> array_check; // will store one value at a time 1 - 9 and be checked to make sure that it's not entered twice.
	static int process_sentinal; //static variables are automatically assigned 0;
	if (num < 1 || num > 9) { //The number is not between 1 and 9
		cout << "Error: The number is either less than 1 or greater than 9.\n";
		return false;
	}
	// At this point the number is confirmed to between 1 and 9
	// The first time this is ran the number has to be inputed into the vector without runnnig a check;

	if (process_sentinal == 0) { //will run the first time. only once.
		array_check.push_back(num);// adds the number to the vecotor;
		process_sentinal++;
		return true;
	}

	if (process_sentinal > 0) { // will run after the function is called the first time. 

		for (int i = 0; i < array_check.size(); i++) {

			if (num == array_check[i]) {
				cout << "ERROR: The number is already in the square.\n";
				return false; // this number has already been used
			}
		}
		array_check.push_back(num);// This number has not been used. added to the vector.
	}
	return true;
}