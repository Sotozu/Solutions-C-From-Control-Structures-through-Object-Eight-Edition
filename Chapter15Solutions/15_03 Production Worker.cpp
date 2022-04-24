#include "03 Production Worker.h"

//default constructor
ProductionWorker03::ProductionWorker03() : Employee03() {
	shift = 0;
	hourly = 0.0;
}

ProductionWorker03::ProductionWorker03(int s, double h, std::string name, std::string number, std::string hireD) :
	Employee03(name, number, hireD)
{
	shift = s;
	hourly = h;
}

//Mutators
void ProductionWorker03::setShift(int s) {
	shift = s;
}
void ProductionWorker03::setHourly(double h) {
	hourly = h;
}

//Accessor
int ProductionWorker03::getShift() {
	return shift;
}
double ProductionWorker03::getHourly() {
	return hourly;
}