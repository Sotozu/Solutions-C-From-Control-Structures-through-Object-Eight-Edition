#include <iostream>
#include <string>
#include <iomanip>

#include "01 Production Worker.h"

int main() {

	std::string userStringInput;
	int userIntInput;
	double userDoubleInput;

	ProductionWorker01 worker(1, 12.50, "Alex Soto", "10011", "3/16/2021");

	std::cout << "CURRENT WORKER INFORMATION" << std::endl;
	std::cout << worker.getName() << std::endl;
	std::cout << worker.getNumber() << std::endl;
	std::cout << worker.getHireD() << std::endl;
	std::cout << std::setprecision(2) << std::showpoint <<std::fixed;
	std::cout << "$" << worker.getHourly() << std::endl;
	std::cout << worker.getShift() << std::endl;
	
	std::cout << std::endl;
	std::cout << "Lets change some of the employees information" << std::endl;

	std::cout << "NEW NAME: "; 	std::getline(std::cin,userStringInput);
	worker.setName(userStringInput);
	std::cout << "NEW NUMBER: "; std::getline(std::cin, userStringInput);
	worker.setNumber(userStringInput);
	std::cout << "NEW HIRE DATE (MM/DD/YYYY): "; std::getline(std::cin, userStringInput);
	worker.setDate(userStringInput);

	std::cout << "NEW HOURLY PAY RATE: $"; std::cin >> userDoubleInput;
	worker.setHourly(userDoubleInput);
	do {
		std::cout << "NEW SHIFT (1 Day | 2 Night): "; std::cin >> userIntInput;
		if (userIntInput != 2 && userIntInput != 1) {
			std::cout << "ERROR: PLEASE ENTER A VALID SHIFT" << std::endl;
		}
	} while (userIntInput != 2 && userIntInput != 1);

	worker.setShift(userIntInput);


	std::cout << std::endl;
	std::cout << "NEW WORKER INFORMATION" << std::endl;
	std::cout << worker.getName() << std::endl;
	std::cout << worker.getNumber() << std::endl;
	std::cout << worker.getHireD() << std::endl;
	std::cout << std::setprecision(2) << std::showpoint << std::fixed;
	std::cout << "$" << worker.getHourly() << std::endl;
	std::cout << worker.getShift() << std::endl;
}