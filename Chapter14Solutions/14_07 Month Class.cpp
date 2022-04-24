#include <iostream>
#include <string>

#include "07 Month Class.h"

int main() {
	std::string month_name;
	int month_num;
	std::cout << "OBJECT 1" << std::endl;
	do {
		std::cout << "Please enter a month name (e.i. \"January\")\n";
		std::cout << "Name: "; std::getline(std::cin, month_name);

	} while (!Month::confirmUserInput(month_name));

	Month obj_name(month_name);


	std::cout << obj_name;
	
	std::cout << "\nOBJECT 2" << std::endl;

	do {
		std::cout << "Please enter a month number (e.i. 1-12)\n";
		std::cout << "Number: "; std::cin >> month_num;
	} while (!Month::confirmUserInput(month_num));

	Month obj_number(month_num);


	std::cout << obj_number;
	std::cin.ignore();
	std::cout << "PRESS ENTER TO MOVE 10 MONTHS UP FROM: " << obj_number.getMonthName(); std::cin.get();
	for (int i = 0; i < 10; i++) {
		++obj_number;
		std::cout << obj_number.getMonthName() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "Copying Contents of 'OBJECT 2' and placing them into a new object 'OBJECT 3' using the '=' overloaded operator.\n";
	Month obj_copy = obj_number;
	std::cout << "\nOBJECT 3" << std::endl;
	std::cout << obj_copy;

	//using the  overloaded << operator

	do {
		std::cout << "Please enter new info in to 'obj_copy'\n";
		std::cin >> obj_copy;

	} while (!Month::confirmUserInput(obj_copy.getMonthName()));

	std::cout << "'OBJECT 3' is now  set to the following.\n";
	std::cout << obj_copy;
	return 0;
}
