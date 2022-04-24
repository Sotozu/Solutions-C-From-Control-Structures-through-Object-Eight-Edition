#include <iostream>
using namespace std;

//1. Minimum/Maximum

int main() {
	
	float num1, num2, large, small;

	cout << "This program determines which numbers inputed by the user is larger or smaller.\n\n";
	cout << "Please enter the first number followed by the second number: ";
	cin >> num1 >> num2;

	if (num1 > num2) {
		large = num1;
		small = num2;
	}
	else {
		large = num2;
		small = num1;
	}

	cout << "\nThe larger number is " << large << ", and the smaller number is " << small << ".\n";
	

	return 0;
}