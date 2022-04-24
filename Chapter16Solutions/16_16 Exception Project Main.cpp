#include <iostream>
#include "16 Production Worker.h"
int main() {
	
	try {
		ProductionWorker16 prod(1, 0, "A", 1, "1");

	}
	catch (Employee16::InvalidEmployeeNumber) {
		std::cout << "ERROR: Please enter an employee number greater than 0 OR less than 9999." << std::endl;
	}
	catch (ProductionWorker16::InvalidShift) {
		std::cout << "ERROR: Please enter a valid shift (1 = day, 2 = night)." << std::endl;
	}
	catch (ProductionWorker16::InvalidPayrate) {
		std::cout << "ERROR: Please enter a valid payrate (can't be less than 0)." << std::endl;
	}

	return 0;
}