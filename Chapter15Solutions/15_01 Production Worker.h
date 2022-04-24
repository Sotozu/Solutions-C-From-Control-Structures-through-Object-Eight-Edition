#pragma once

#include "01 Employee.h"
#include  <string>

class ProductionWorker01 : public Employee01 {

private:
	//1 for day shift and 2 for night shift
	int shift;
	double hourly;

protected:

public:
	//default constructor
	ProductionWorker01();

	ProductionWorker01(int s, double h, std::string name, std::string number, std::string hireD);

	//Mutators
	void setShift(int s);
	void setHourly(double h);

	//Accessor
	int getShift();
	double getHourly();
};