#include "12 CruiseShip.h"

//Default Constructor
CruiseShip12::CruiseShip12() : Ship12() {
	MAX_NUM_PASS = 0;
}
   
//Constructor
CruiseShip12::CruiseShip12(std::string n, int yb, int maxp) : Ship12(n, yb) {
	MAX_NUM_PASS = maxp;
}

//Mutator
void CruiseShip12::setMaxNumPass(int maxp) {
	MAX_NUM_PASS = maxp;
}

//Accessor
int CruiseShip12::getMaxNumPass() {
	return MAX_NUM_PASS;
}

//Member Function
void CruiseShip12::print() { //virtual
	std::cout << "NAME: " << getName() << std::endl;
	std::cout << "Max Number Of Passangers: " << getMaxNumPass() << std::endl;
}