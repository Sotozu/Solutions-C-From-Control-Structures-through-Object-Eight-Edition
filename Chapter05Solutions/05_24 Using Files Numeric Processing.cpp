#include <iostream>
#include <time.h>
#include <fstream>
using namespace std;

// 24. Using Files Numeric Processing

int main() {

	ifstream inFile;
	ofstream outFile;
	int num, count = 0, average, random_num, loop_amount, total = 0;

	srand(time(NULL));

	outFile.open("randnum.txt");
	loop_amount = rand() % 50 + 50; //the amount of numbers to be inserted in to the file will be between 50 and 100

	for (int i = 0; i < loop_amount; i++) {

		random_num = rand() % 1000 + 1; //Will generate a number between 1 and 1000.
		outFile << random_num << endl; // Places a randomly generated number into the file.

	}

	outFile.close();

	inFile.open("randnum.txt");

	while (!inFile.eof()) {

		inFile >> num;
		total += num;
		count++;

	}
	cout << "CHECK3\n";
	cout << "There are " << count << " numbers in the file.\n";
	cout << "The total of all the numbers is " <<total << ".\n";
	average = total / count;
	cout << "The average is " << average << ".\n";

	cout << endl << "Alex" << endl;

	return 0;
}