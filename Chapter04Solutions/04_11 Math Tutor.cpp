#include <iostream>
#include <time.h>
#include <iomanip>

using namespace std;

//11. Math Tutor

int main() {
	
	cout << "This program serves as simple math tutor.\n\n";
	int num1, num2, total, userInput;

	cout << "Please enter your calculated result.\n";
	srand(time(0));

	num1 = rand();
	num2 = rand();

	cout << right<< setw(8)<< num1 << endl;
	cout << "+" << setw(7) << num2 << endl;
	cout << "________" << endl;
	cin >> userInput;

	total = num1 + num2;
	if (total == userInput)
	cout << "\nCongradulations that is the correct answer!\n";
	else
	cout << "\nThe correct answe is " << total << ".\n";
	
	return 0;
}