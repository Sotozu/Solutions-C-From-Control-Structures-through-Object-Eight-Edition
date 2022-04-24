#include <iostream>

#include "05 RetailItem Class.h"

using namespace std;

int main() {
	const int size = 3;
	RetailItem item[size] = {
		RetailItem("Jacket", 12, 59.95),
		RetailItem("Designer Jeans", 40, 34.95),
		RetailItem("Shirt", 20, 24.95)
	};
	std::cout << "Press \"enter\" to view the data in the class." << std::endl;

	std::cin.get();

	for (int i = 0; i < size; i++) {
		std::cout << item[i].getDescription() << std::endl;
		std::cout << item[i].getPrice() << std::endl;
		std::cout << item[i].getUnits() << std::endl;
		std::cout << std::endl;
	}

}
