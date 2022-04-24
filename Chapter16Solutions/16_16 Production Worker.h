#pragma once

#include "16 Employee.h"
#include  <string>

class ProductionWorker16 : public Employee16 {

private:
	//1 for day shift and 2 for night shift
	int shift;
	double hourly;


public:
	//Exception Classes
	class InvalidShift {};
	class InvalidPayrate {};
	//default constructor
	ProductionWorker16();

	ProductionWorker16(int s, double h, std::string name, int number, std::string hireD);

	//Mutators
	void setShift(int s);
	void setHourly(double h);

	//Accessor
	int getShift();
	double getHourly();
};