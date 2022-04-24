#include <iostream>


#include "12 LandTract Class.h"

int main(){

	LandTract area1, area2;

	std::cout << "Area 1 Info" << std::endl;
	std::cin >> area1;
	std::cout << std::endl;
	std::cout << "-------------------" << std::endl;
	std::cout << "Area 2 Info";
	std::cout << std::endl;
	std::cin >> area2;

	std::cout << "\nAREA 1" << std::endl;
	std::cout << area1 << std::endl;
	std::cout << "AREA 2" << std::endl;
	std::cout << area2 << std::endl;
	std::cout << "\nRESULT:" << std::endl;
	if (area1 == area2) {
		std::cout << "The areas are equal.\n";
	}
	else
	{
		std::cout << "The areas are not equal to each other.\n";
	}
	return 0;

}
