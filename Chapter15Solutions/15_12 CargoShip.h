#pragma once
#include "12 Ship.h"

class CargoShip12 : public Ship12 {
private:
	//cargo capacity in tonnage
	int CARGO_CAPACITY;
protected:

public:
	//Default Constructor
	CargoShip12();

	//Constructor
	CargoShip12(std::string n, int yb, int cargo_capacity);

	//Mutators
	void setCargoCapacity(int cargo_capacity);

	//Accessors
	int getCargoCapacity();

	//Member Functions
	virtual void print();

};