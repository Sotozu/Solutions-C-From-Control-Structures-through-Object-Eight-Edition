#include "16 Production Worker.h"

//default constructor
ProductionWorker16::ProductionWorker16() : Employee16() {
	shift = 0;
	hourly = 0.0;
}

ProductionWorker16::ProductionWorker16(int s, double h, std::string name, int number, std::string hireD) :
	Employee16(name, number, hireD)
{
	if (s < 1 || s > 2) {
		throw InvalidShift();
	}
	if (h < 0) {
		throw InvalidPayrate();
	}

	shift = s;
	hourly = h;
}

//Mutators
void ProductionWorker16::setShift(int s) {
	shift = s;
}
void ProductionWorker16::setHourly(double h) {
	hourly = h;
}

//Accessor
int ProductionWorker16::getShift() {
	return shift;
}
double ProductionWorker16::getHourly() {
	return hourly;
}