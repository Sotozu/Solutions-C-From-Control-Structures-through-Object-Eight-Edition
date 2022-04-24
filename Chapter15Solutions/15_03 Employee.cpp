#pragma once
#include <string>
#include "03 Employee.h"


//Default Constructor
Employee03::Employee03() {
	empName = "";
	empNumber = "";
	empHireD = "";
}

Employee03::Employee03(std::string name, std::string number, std::string hireD) {
	empName = name;
	empNumber = number;
	empHireD = hireD;
}

//Mutators
void Employee03::setName(std::string name) {
	empName = name;
}
void Employee03::setNumber(std::string number) {
	empNumber = number;
}
void Employee03::setDate(std::string hireD) {
	empHireD = hireD;
}

//Accessors
std::string Employee03::getName() {
	return empName;
}
std::string Employee03::getNumber() {
	return empNumber;
}
std::string Employee03::getHireD() {
	return empHireD;
}
