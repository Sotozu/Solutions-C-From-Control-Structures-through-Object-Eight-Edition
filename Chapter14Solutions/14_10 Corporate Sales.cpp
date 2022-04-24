#include <iostream>

#include "10 Corporate Sales.h"

int main() {
	DivSales10 region[6];

	for (int i = 0; i < 6; i++) {
		std::cout << "enter for division " << i + 1 << std::endl;
		std::cin >> region[i];
		std::cout << std::endl;
	}
	std::cout << "------------------------------complete report------------------------------" << std::endl;
	for (int i = 0; i < 4; i++) {
		double totalquarter = 0;
		for (int j = 0; j < 6; j++) {
			totalquarter += region[j].getDivQSal(i);
		}
		std::cout << "quarter " << 1 + i << " company sales: $" << totalquarter << std::endl;
	}
	std::cout << std::endl;
	std::cout <<"total company sales: $" << region[0].getTotalSales();
	return 0;
}
