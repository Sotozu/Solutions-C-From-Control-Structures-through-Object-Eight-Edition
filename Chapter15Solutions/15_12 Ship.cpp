#include "12 Ship.h"

//Default Constructor
Ship12::Ship12() {
	name = "";
	year_built = 0;
}

//Constructor
Ship12::Ship12(std::string n, int yb) {
	name = n;
	year_built = yb;
}

//Mutator
void Ship12::setName(std::string n) {
	name = n;
}
void Ship12::setYearBuilt(int y) {
	year_built = y;
}

//Accessor
std::string Ship12::getName() {
	return name;
}
int Ship12::getYearBuilt() {
	return year_built;
}

//Member Function
void Ship12::print() { //Virtual
	std::cout << "NAME: " << name << std::endl;
	std::cout << "Year Built: " << year_built << std::endl;
}