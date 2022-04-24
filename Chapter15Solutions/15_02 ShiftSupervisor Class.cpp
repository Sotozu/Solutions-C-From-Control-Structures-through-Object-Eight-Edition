#include <iostream>
#include <string>
#include <iomanip>

#include "02 ShiftSupervisor.h"

int main() {

	ShiftSupervisor02 Supervisor(1, 70000, 2000, "Alex Soto", "101010", "10/10/2000");

	std::string userStringInput;

	int userIntInput;

	double userDoubleInput;
	std::cout << "CURRENT SUPERVISOR INFORMATION" << std::endl;
	std::cout << Supervisor.getName() << std::endl;
	std::cout << Supervisor.getNumber() << std::endl;
	std::cout << Supervisor.getHireD() << std::endl;
	std::cout << Supervisor.getShift() << std::endl;
	std::cout << std::setprecision(2) << std::showpoint << std::fixed;
	std::cout << "$" <<Supervisor.getSal() << std::endl;
	std::cout << "$" << Supervisor.getBon() << std::endl;


	std::cout << std::endl;
	std::cout << "NEW NAME: "; std::getline(std::cin, userStringInput);
	Supervisor.setName(userStringInput);
	std::cout << "NEW NUMBER: "; std::getline(std::cin, userStringInput);
	Supervisor.setNumber(userStringInput);
	std::cout << "NEW HIRE DATE (MM/DD/YYYY): "; std::getline(std::cin, userStringInput);
	Supervisor.setDate(userStringInput);

	std::cout << "SALARY: $"; std::cin >> userDoubleInput;
	Supervisor.setAnnualSalary(userDoubleInput);
	std::cout << "YEARLY BONUS: $"; std::cin >> userDoubleInput;
	Supervisor.setAnnualProdBonus(userDoubleInput);
	do {
		std::cout << "SHIFT (1 = Day | 2 = Night): "; std::cin >> userIntInput;
		if (userIntInput != 1 && userIntInput != 2) {
			std::cout << "ERROR: PLEASE ENTER VALID INPUT" << std::endl;
		}
	} while(userIntInput != 1 && userIntInput != 2);

	Supervisor.setShift(userIntInput);

	std::cout << std::endl;
	std::cout << "NEW SUPERVISOR INFORMATION" << std::endl;
	std::cout << Supervisor.getName() << std::endl;
	std::cout << Supervisor.getNumber() << std::endl;
	std::cout << Supervisor.getHireD() << std::endl;
	std::cout << Supervisor.getShift() << std::endl;
	std::cout << std::setprecision(2) << std::showpoint << std::fixed;
	std::cout << "$" <<Supervisor.getSal() << std::endl;
	std::cout << "$" << Supervisor.getBon() << std::endl;


	return 0;
}
