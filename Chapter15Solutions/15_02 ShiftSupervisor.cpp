#include "02 ShiftSupervisor.h"


//Constructors
ShiftSupervisor02::ShiftSupervisor02() : Employee02() {
	shift = 0;
	annualSalary = 0.0;
	annualProdBonus = 0.0;
}

ShiftSupervisor02::ShiftSupervisor02(int s, double sal, double bon, std::string name, std::string number, std::string hireD) :
	Employee02(name, number, hireD) {
	shift = s;
	annualSalary = sal;
	annualProdBonus = bon;
}

//Mutators
void ShiftSupervisor02::setShift(int s) {
	shift = s;
}
void ShiftSupervisor02::setAnnualSalary(double sal) {
	annualSalary = sal;
}
void ShiftSupervisor02::setAnnualProdBonus(double bon) {
	annualProdBonus = bon;
}

//Accessors

int ShiftSupervisor02::getShift() {
	return shift;
}
double ShiftSupervisor02::getSal() {
	return annualSalary;
}
double ShiftSupervisor02::getBon() {
	return annualProdBonus;
}
