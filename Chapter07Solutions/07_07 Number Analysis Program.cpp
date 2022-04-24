#include <fstream>
#include <string>
#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

int main() {

	ofstream outFile;
	fstream inFile;
	string file_name;
	const int SIZE = 100;
	int my_array[SIZE];

	int lowest_num, largest_num, total, count = 0;
	double average;

	bool check = true;
	do {
		cout << "Please enter a file name.\n";
		cin >> file_name;
		outFile.open(file_name);
		if (outFile.is_open()) {
			cout << "File opened succesfully.\n";
			check = true;
		}
		else {
			cout << "ERROR: Please enter a valid file name.\n" << "(example: \"random_numbers.txt\")\n";
			check = false;
		}
	} while (check == false);

	srand(time(0));
	for (int i = 0; i < SIZE; i++) {
		outFile << rand() % 100 + 1 << endl;
	}

	outFile.close();

	inFile.open(file_name);
	for (int i = 0; i < SIZE; i++) {
		inFile >> my_array[i];
	}
	inFile.close();

	lowest_num = my_array[0];
	largest_num = my_array[0];
	total = my_array[0];
	for (int i = 1; i < SIZE; i++) {
		if (lowest_num > my_array[i]) {
			lowest_num = my_array[i];
		}
		if (largest_num < my_array[i]) {
			largest_num = my_array[i];
		}
		total += my_array[i];
		count++;
	}

	average = static_cast<double>(total) / count;
	cout << "Largest number: " << largest_num << endl;
	cout << "Smallest number: " << lowest_num << endl;
	cout << "Total of the numbers: " << total << endl;
	cout << showpoint << fixed << setprecision(2);
	cout << "Average of all numbers: " << average << endl;
	return 0;
}