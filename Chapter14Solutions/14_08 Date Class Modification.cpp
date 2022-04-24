#include <iostream>

#include "08 Date Class Modification.h"

int main() {

	int days_between_dates;
	Date8 my_date;
	std::cout << "New Object Created 'my_date'." << std::endl;
	do {
		std::cin >> my_date;
	} while (!Date8::validInput(my_date.getDay(), my_date.getMonth(), my_date.getYear()));

	std::cout << "ADDING 1000 DAYS" << std::endl;
	std::cout << "PRESS \"Enter\" TO BEGIN" << std::endl;
	std::cin.ignore();
	std::cin.get();
	for (int i = 0; i < 1000; i++) {
		++my_date;
		std::cout << my_date;
	}
	

	
	std::cout << std::endl;
	std::cout << "New Object Created 'new_date'." << std::endl;

	Date8 new_date;
	do {
		std::cin >> new_date;
	} while (!Date8::validInput(new_date.getDay(), new_date.getMonth(), new_date.getYear()));
	std::cout << "CONTENTS OF 'new_date'\n";
	std::cout << new_date << std::endl;
	std::cout << "CONTENTS OF 'my_date'\n";
	std::cout << my_date << std::endl;
	std::cout <<"Copying contents of 'new_date' to 'my_date'\n";
	my_date = new_date;
	std::cout << std::endl;
	std::cout << "NEW CONTENTS OF 'my_date'\n";
	std::cout << my_date;

	std::cout << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << "HARD SET OF CONTENTS OF 'my_date' TO....\n";
	my_date.setDate(12, 0, 2000);
	std::cout << my_date;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << "HARD SET OF CONTENTS OF 'new_date' TO....\n";
	new_date.setDate(10, 0, 2002);
	std::cout << new_date;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << "DAYS BETWEEN 'new_date' AND 'my_date' ...\n";

	days_between_dates = my_date - new_date;
	std::cout << days_between_dates << std::endl;


	return 0;

}
