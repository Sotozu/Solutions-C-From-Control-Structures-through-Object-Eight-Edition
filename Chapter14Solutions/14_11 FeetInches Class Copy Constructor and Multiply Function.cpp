#include <iostream>

#include "11 FeetInches Class Copy Constructor and Multiply Function.h"

int main() {
	int feet, inches;
	FeetInches11 my_obj;

	std::cout << "ENTER FEET: "; std::cin >> feet;
	std::cout << "ENTER INCHES: "; std::cin >> inches;

	my_obj.setFeet(feet);
	my_obj.setInches(inches);
	std::cout << std::endl;

	FeetInches11 object_copy(my_obj);

	std::cout << "MY OBJECT FEET: "; std::cout << my_obj.getFeet() << std::endl;
	std::cout << "MY OBJECT INCHES: "; std::cout << my_obj.getInches() << std::endl;

	std::cout << std::endl;

	std::cout << "OBJECT COPY FEET: "; std::cout << object_copy.getFeet() << std::endl;
	std::cout << "OBJECT COPY INCHES: "; std::cout << object_copy.getInches() << std::endl;

	object_copy = object_copy * my_obj;

	std::cout << std::endl;
	
	std::cout << "OBJECT COPY (MULTIPLIED WITH MY OBJECT) FEET: "; std::cout << object_copy.getFeet() << std::endl;
	std::cout << "OBJECT COPY (MULTIPLIED WITH MY OBJECT) INCHES: "; std::cout << object_copy.getInches() << std::endl;

	
	return 0;
}
