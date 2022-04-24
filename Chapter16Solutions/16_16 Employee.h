#pragma once
#include <string>

class Employee16 {

private:
	std::string empName;
	int empNumber;
	std::string empHireD;

public:

	//Exception Handling Classes
	class InvalidEmployeeNumber {};

	//Default Constructor
	Employee16();
	Employee16(std::string name, int number, std::string hireD);

	//Mutators
	void setName(std::string name);
	void setNumber(int number);
	void setDate(std::string hireD);

	//Accessors
	std::string getName();
	int getNumber();
	std::string getHireD();

	
};