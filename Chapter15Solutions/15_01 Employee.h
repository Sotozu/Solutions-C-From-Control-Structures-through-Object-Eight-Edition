#pragma once
#include <string>

class Employee01 {

private:
	std::string empName;
	std::string empNumber;
	std::string empHireD;

public:
	//Default Constructor
	Employee01();

	Employee01(std::string name, std::string number, std::string hireD);

	//Mutators
	void setName(std::string name);
	void setNumber(std::string number);
	void setDate(std::string hireD);

	//Accessors
	std::string getName();
	std::string getNumber();
	std::string getHireD();
};