
/* Write a template for a function called total.The function should keep a running
total of values entered by the user, then return the total.The argument sent into the
function should be the number of values the function is to read.Test the template in
a simple driver program that sends values of various types as arguments and displays
the results. */

#include <iostream>

template <class T> T runningTotal(int num) {
	T total = 0;
	T read;
	for (int i = 0; i < num; i++) {
		std::cin >> read;
		std::cin.ignore();
		total += read;
	}
	std::cout << std::endl;
	return total;
}

template <> char runningTotal<char>(int num) {
	std::cout << "\nspecialized template being used\n";
	char total = NULL;
	std::cout << "total is currently: " << total << std::endl;
	char read;
	for (int i = 0; i < num; i++) {
		std::cin >> read;
		total += read;

	}
	std::cout << std::endl;
	return total;
}

int main() {
	int iNumber;
	std::cout << "How many integers would you like to enter?" << std::endl;
	std::cout << "Num Integers: "; std::cin >> iNumber;
	std::cout << std::endl;
	std::cout << "The running total of the integers inputed is: " << runningTotal<int>(iNumber) << std::endl;
	std::cout << std::endl;

	std::cout << "How many doubles would you like to enter?" << std::endl;
	std::cout << "Num doubles: "; std::cin >> iNumber;
	std::cout << std::endl;
	std::cout << "The running total of the doubles inputed is: " << runningTotal<double>(iNumber) << std::endl;
	std::cout << std::endl;

	std::cout << "How many chars would you like to enter?" << std::endl;
	std::cout << "Num chars: "; std::cin >> iNumber;
	std::cout << std::endl;
	std::cout << "The running total of the chars inputed is: " << runningTotal<char>(iNumber) << std::endl;
	std::cout << std::endl;



	return 0;
}