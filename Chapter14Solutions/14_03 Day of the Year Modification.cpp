#include <iostream>
#include <string>

#include "03 Day of the Year Modification.h"

int main() {
	std::string month;
	int day;
	std::cout << "Please enter a month (e.i. \"January\")" << std::endl;
	std::cout << "Month: "; std::getline(std::cin, month);
	std::cout << std::endl;
	std::cout << "Please enter a valid day for that month." << std::endl;
	std::cout << "Day: "; std::cin >> day;

	DayofYearModification3 stringDate(day, month);

	std::cout << "ADDING 10 DAYS" << std::endl;
	for (int i = 0; i < 10; i++) {
		++stringDate;
		stringDate.printDate();

	}
	std::cout << std::endl;
	std::cout << "SUBTRACTING 100 DAYS" << std::endl;
	std::cout << std::endl;
	for (int i = 0; i < 100; i++) {
		--stringDate;
		stringDate.printDate();
	}
	return 0;
}
