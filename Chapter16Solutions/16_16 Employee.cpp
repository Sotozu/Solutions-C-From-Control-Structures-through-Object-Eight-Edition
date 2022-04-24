#pragma once
#include <string>
#include "16 Employee.h"


//Default Constructor
Employee16::Employee16() {
	empName = "";
	empNumber = 0;
	empHireD = "";
}

Employee16::Employee16(std::string name, int number, std::string hireD) {

	if (number < 0 || number > 9999) {
		throw InvalidEmployeeNumber();
	}
	
	empName = name;
	empNumber = number;
	empHireD = hireD;
}

//Mutators
void Employee16::setName(std::string name) {
	empName = name;
}
void Employee16::setNumber(int number) {
	empNumber = number;
}
void Employee16::setDate(std::string hireD) {
	empHireD = hireD;
}

//Accessors
std::string Employee16::getName() {
	return empName;
}
int Employee16::getNumber() {
	return empNumber;
}
std::string Employee16::getHireD() {
	return empHireD;
}
