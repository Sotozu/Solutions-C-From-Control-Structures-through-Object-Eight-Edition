#include "12 CargoShip.h"

//Default Constructor
CargoShip12::CargoShip12() : Ship12() {
	CARGO_CAPACITY = 0;
}

//Constructor
CargoShip12::CargoShip12(std::string n, int yb, int cargo_capacity) : Ship12(n, yb) {
	CARGO_CAPACITY = cargo_capacity;
}

//Mutators
void CargoShip12::setCargoCapacity(int cargo_capacity) {
	CARGO_CAPACITY = cargo_capacity;
}

//Accessors
int CargoShip12::getCargoCapacity() {
	return CARGO_CAPACITY;
}

//Member Functions
void CargoShip12::print() { //virtual function
	std::cout << "NAME: " << getName() << std::endl;
	std::cout << "Cargo Capacity In Tons: " << getCargoCapacity() << std::endl;
}