#include <iostream>

#include "02 Day of the Year.h"

int main() {
	int day;
	std::cout << "Please enter a day in a year (1-365)" << std::endl;
	std::cout << "Day: "; std::cin >> day;

	DayofYear2 stringDate(day);

	stringDate.printDate();

	return 0;
}
