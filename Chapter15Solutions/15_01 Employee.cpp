#pragma once
#include <string>
#include "01 Employee.h"


//Default Constructor
Employee01::Employee01() {
	empName = "";
	empNumber = "";
	empHireD = "";
}

Employee01::Employee01(std::string name, std::string number, std::string hireD) {
	empName = name;
	empNumber = number;
	empHireD = hireD;
}

//Mutators
void Employee01::setName(std::string name) {
	empName = name;
}
void Employee01::setNumber(std::string number) {
	empNumber = number;
}
void Employee01::setDate(std::string hireD) {
	empHireD = hireD;
}

//Accessors
std::string Employee01::getName() {
	return empName;
}
std::string Employee01::getNumber() {
	return empNumber;
}
std::string Employee01::getHireD() {
	return empHireD;
}
