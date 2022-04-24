#include <iostream>
using namespace std;

void myArray(int*, int, int);

int main() {
	const int SIZE = 10;
	int num;
	int number[SIZE] = { 1000, 200, 3000, 400, 5000 ,600, 7000, 800, 9000, 100 };

	cout << "Please enter a number.\n";
	cout << "NUMBER: ";
	cin >> num;
	myArray(number, SIZE, num);

	return 0;
}

void myArray(int *number, int SIZE, int num) {
	for (int i = 0; i < SIZE; i++) {
		if (number[i] > num) {
			cout << number[i] << " is greater than " << num << endl;
		}
	}
}
