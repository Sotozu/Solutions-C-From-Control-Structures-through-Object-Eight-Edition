#include <iostream>

#include "09 FeetInches Modification.h"

int main() {
	int feet, inches;
	FeetInches9 my_obj;
	FeetInches9 my_obj_2;

	std::cout << "Please enter the following information for the \"my_obj\" object.\n";
	std::cout << "Please enter a length in feet: "; std::cin >> feet;
	std::cout << "Please enter a length in inches: "; std::cin >> inches;
	my_obj.setFeet(feet);
	my_obj.setInches(inches);

	std::cout << "Please enter the following information for the \"my_obj_2\" object.\n";
	std::cout << "Please enter a length in feet: "; std::cin >> feet;
	std::cout << "Please enter a length in inches: "; std::cin >> inches;
	my_obj_2.setFeet(feet);
	my_obj_2.setInches(inches);

	std::cout << std::endl;
	std::cout << "\"my_obj\" object info.\n";
	std::cout << my_obj.getFeet() << " feet "; std::cout << my_obj.getInches() << " inches.\n";

	std::cout << std::endl;
	std::cout << "\"my_obj_2\" object info.\n";
	std::cout << my_obj_2.getFeet() << " feet "; std::cout << my_obj_2.getInches() << " inches.\n\n";

	
	
	if (my_obj >= my_obj_2) {
		std::cout << "\"my_obj\" object is greater in length than or equal to \"my_obj_2\" object!\n";
	}
	else if (my_obj <= my_obj_2) {
		std::cout << "\"my_obj_2\" object is greater in length than or equal to \"my_obj\" object!\n";
	}
	
	if (my_obj != my_obj_2) {
		std::cout << "Objects are not equal to each other!\n\n";
	}
	

	return 0;
}
