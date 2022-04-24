#include <iostream>
using namespace std;

//1. Sum of Numbers

int main() {

	int posint;
	int total = 0;
	cout << "Please enter a positive integer value: ";
	cin >> posint;
	for (int i = 0; i <= posint; i++) {
		total += i;
	}
	cout << "The total is: " << total << endl;
	cout << endl << "Alex" << endl;

	return 0;
}