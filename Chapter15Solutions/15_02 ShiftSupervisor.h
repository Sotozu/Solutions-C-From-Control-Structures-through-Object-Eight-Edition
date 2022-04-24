#pragma once
#include <string>

#include "02 Employee.h"
class ShiftSupervisor02 : public Employee02 {

private:
	int shift;
	double annualSalary, annualProdBonus;
protected:

public:
	//Constructor
	ShiftSupervisor02();
	ShiftSupervisor02(int s, double anSal, double annPrBo, std::string name, std::string num, std::string hireD);

	//Mutator
	void setShift(int s);
	void setAnnualSalary(double sal);
	void setAnnualProdBonus(double bon);

	//Accessor
	int getShift();
	double getSal();
	double getBon();



};