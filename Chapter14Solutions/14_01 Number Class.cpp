#include <iostream>

#include "01 Number Class.h"

int main() {
	int num;

	std::cout << "Please enter a whole number between 0 - 9999.\n";
	do {
		std::cout << "Number: "; std::cin >> num;
		if (num < 0 || num > 9999) {
			std::cout << "ERROR: Please enter a valid number.\n";
		}
	} while (num < 0 || num > 9999);

	Numbers1 obj(num);

	std::cout << obj.computeTextVersion();
	
	return 0;
}
