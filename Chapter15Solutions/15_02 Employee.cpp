#pragma once
#include <string>
#include "02 Employee.h"


//Default Constructor
Employee02::Employee02() {
	empName = "";
	empNumber = "";
	empHireD = "";
}

Employee02::Employee02(std::string name, std::string number, std::string hireD) {
	empName = name;
	empNumber = number;
	empHireD = hireD;
}

//Mutators
void Employee02::setName(std::string name) {
	empName = name;
}
void Employee02::setNumber(std::string number) {
	empNumber = number;
}
void Employee02::setDate(std::string hireD) {
	empHireD = hireD;
}

//Accessors
std::string Employee02::getName() {
	return empName;
}
std::string Employee02::getNumber() {
	return empNumber;
}
std::string Employee02::getHireD() {
	return empHireD;
}
