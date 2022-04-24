#pragma once
#include "12 Ship.h"
class CruiseShip12 : public Ship12 {
private:
	int MAX_NUM_PASS;

protected:

public:
	//Default Constructor
	CruiseShip12();

	//Constructor
	CruiseShip12(std::string n, int yb, int maxp);

	//Mutator
	void setMaxNumPass(int maxp);

	//Accessor
	int getMaxNumPass();

	//Member Function
	virtual void print();
};