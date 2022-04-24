#include <iostream>
#include "01 Date.h"

int main() {

	bool badData = true;
	int day, month, year;

	while (badData) {
		try {
			std::cout << "Enter date information." << std::endl;
			std::cout << "Day: "; std::cin >> day;
			std::cout << "Month: "; std::cin >> month;
			std::cout << "Year: "; std::cin >> year;

			//Constructor for Date class has a throw point if the data is bad
			Date date(day, month, year);

			badData = false;
		}	
		catch (Date::InvalidDay) {
			std::cout << "ERROR: Invalid day range. Must be eqaual to or greater than 1 and less than or equal to 31." << std::endl;
		}
		catch (Date::InvalidMonth) {
			std::cout << "ERROR: Invalid month range. Must be eqaual to or greater than 1 and less than or equal to 12." << std::endl;

		}
		std::cout << std::endl;
	}

	badData = true;
	Date new_date;


	while (badData) {
		try {
			std::cout << "Set new date information." << std::endl;
			std::cout << "Day: "; std::cin >> day;
			std::cout << "Month: "; std::cin >> month;
			std::cout << "Year: "; std::cin >> year;

			//Constructor for Date class has a throw point if the data is bad
			new_date.setDate(day, month, year);

			badData = false;
		}
		catch (Date::InvalidDay) {
			std::cout << "ERROR: Invalid day range. Must be eqaual to or greater than 1 and less than or equal to 31." << std::endl;
		}
		catch (Date::InvalidMonth) {
			std::cout << "ERROR: Invalid month range. Must be eqaual to or greater than 1 and less than or equal to 12." << std::endl;

		}
		std::cout << std::endl;
	}

	return 0;
}