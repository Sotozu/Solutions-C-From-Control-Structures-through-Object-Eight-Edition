#include <iostream>
using namespace std;


// 22. isPrime Function

bool isPrime(int);
int main() {
	bool result;
	int num;
	do {
		cout << "Please enter a number to check if it is prime.\n";
		cout << "Enter '0' to quit.\n\n";
		cout << "NUMBER: ";
		cin >> num;
		if (num == 0) {
			cout << "Goodbye!";
			break;
		}
		result = isPrime(num);
		if (result == true) {
			cout << "The number " << num << " is prime!\n";
		}
		else {
			cout << "The number " << num << " is NOT prime!\n";
		}
	} while (num != 0);

	return 0;
}
bool isPrime(int num) {
	if (num <= 1) {
		return false;
	}
	for (int i = 2; i < num; i++) {
		if (num % i == 0) {
			return false;
		}
	}
	return true;
}
