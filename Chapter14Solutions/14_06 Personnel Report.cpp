#include <iostream>
#include <string>

#include "06 Personnel Report.h";



enum states { option1 = 1, option2, display_emp, end };

void displayEmp(PersonnelReport6&);

int main() {
	std::string emp_name;
	int emp_id;
	states menu;
	int user_choice, months, m_vac = 12, m_sick = 8;
	std::cout << "----PRELIMINARY INFORMATION----" << std::endl;
	std::cout << "Please enter the employees name: "; std:getline(std::cin, emp_name);
	std::cout << "Please enter the employee ID number: "; std::cin >> emp_id;
	std::cout << "Months worked at the company: "; std::cin >> months;

	PersonnelReport6 emp(emp_name, emp_id);
	double vac_earned_days = ((m_vac * months)/8), sick_earned_days = ((m_sick * months)/8);
	emp.setVacation(vac_earned_days);
	emp.setSickDays(sick_earned_days);


	displayEmp(emp);
	

	return 0;
}



void displayEmp(PersonnelReport6& emp) {
	std::cout << "EMPLOYEE NAME: " << emp.getName() << std::endl;
	std::cout << "EMPLOYEE ID: " << emp.getID() << std::endl;
	std::cout << std::endl;
	std::cout << "-------TIME OF EAREND---------" << std::endl;
	std::cout << "PAID TIME OF: " << emp.getVacWorkDays() << " DAYS" << std::endl;
	std::cout << "UNPAID TIME OF: " << emp.getUnpVacWorkDays() << " DAYS" << std::endl;
	std::cout << "SICK TIME OF: " << emp.getSickWorkDays() << " DAYS" << std::endl;

}
