#include "01 Production Worker.h"

//default constructor
ProductionWorker01::ProductionWorker01() : Employee01() {
	shift = 0;
	hourly = 0.0;
}

ProductionWorker01::ProductionWorker01(int s, double h, std::string name, std::string number, std::string hireD) :
Employee01(name, number, hireD)
{
	shift = s;
	hourly = h;
}

//Mutators
void ProductionWorker01::setShift(int s) {
	shift = s;
}
void ProductionWorker01::setHourly(double h) {
	hourly = h;
}

//Accessor
int ProductionWorker01::getShift() {
	return shift;
}
double ProductionWorker01::getHourly() {
	return hourly;
}