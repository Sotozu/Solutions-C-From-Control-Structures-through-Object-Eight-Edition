#include <iostream>
#include <string>

#include "05 Time Off.h"

enum states{option1 = 1, option2, display_emp, end};
void mainMenu();
void displayEmp(TimeOff5&);
bool checkUserChoice(int);
void policyChange(TimeOff5&);
void entEmpInfo(TimeOff5&);
int main() {
	std::string emp_name;
	int emp_id;
	states menu;
	int user_choice;

	std::cout << "Please enter the employees name: "; std:getline(std::cin, emp_name);
	std::cout << "Please enter the employee ID number: "; std::cin >> emp_id;

	TimeOff5 emp(emp_name, emp_id);

	do {
		mainMenu();
		do {
			std::cout << "ENTER OPTION: "; std::cin >> user_choice;
		} while (!checkUserChoice(user_choice));
		
		menu = static_cast<states>(user_choice);
		
		std::cout << std::endl;

		if (menu == option1) { 
			policyChange(emp);
		}
		else if (menu == option2) {
			entEmpInfo(emp);
		}
		else if (menu == display_emp) {
			displayEmp(emp);
		}

	} while (menu != end);

	return 0;
}

void mainMenu() {
	std::cout << "--------Main Menu--------" << std::endl;
	std::cout << "1. Change Policy Info (Sick Leave/Vacations)" << std::endl;
	std::cout << "2. Enter employee information (Sick Leave/Vacations)" << std::endl;
	std::cout << "3. Display employee information" << std::endl;
	std::cout << "4. End Program" << std::endl;
}

bool checkUserChoice(int i) {
	if (i < 1 || i > 4) {
		std::cout << "ERROR: Please enter a valid menu option.\n";
		return false;
	}
	return true;
}

void policyChange(TimeOff5& emp) {
	std::cout << "Please Enter The Following Vacation/Sick Policy Information for The Company.\n\n";
	emp.setMaxVacation();
	std::cout << std::endl;
	emp.setMaxUnpaid();
	std::cout << std::endl;
	emp.setMaxSickDays();
	std::cout << std::endl;
}

void entEmpInfo(TimeOff5& emp) {
	std::cout << "EMPLOYEE INFO" << std::endl << std::endl;
	emp.setVacation();
	std::cout << std::endl;
	
	emp.setUnpaid();
	std::cout << std::endl;

	emp.setSickDays();
	std::cout << std::endl;
	
}

void displayEmp(TimeOff5& emp) {
	std::cout << "EMPLOYEE NAME: " << emp.getName() << std::endl;
	std::cout << "EMPLOYEE ID: " << emp.getID() << std::endl;
	std::cout << std::endl;
	std::cout << "PAID TIME OF: " << emp.getVacWorkDays() << " DAYS" << std::endl;
	std::cout << "UNPAID TIME OF: " << emp.getUnpVacWorkDays() << " DAYS" << std::endl;
	std::cout << "SICK TIME OF: " << emp.getSickWorkDays() << " DAYS" << std::endl;

}
