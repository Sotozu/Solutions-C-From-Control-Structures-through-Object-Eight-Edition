#include <iostream>
#include "04 MilTime.h"

void myFunction(Time04&);

int main() {
	MilTime04 time(759,20);
	std::cout << time.getStandHour() << ":" << time.getMin() << " " << time.getSec() << "s "<< time.getDayOrNight() <<std::endl;

	myFunction(time);



	return 0;
}

void myFunction(Time04& obj) {
	std::cout << obj.getHour() << std::endl;
}