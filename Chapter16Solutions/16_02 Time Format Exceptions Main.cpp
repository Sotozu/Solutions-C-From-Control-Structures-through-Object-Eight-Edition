#include <iostream>
#include "02 MilTime.h"

void myFunction(Time02&);

int main() {

	MilTime02 time;
	int hour, seconds;
	bool badData = true;
	while (badData) {
		try {
			std::cout << "--------------------------------------" << std::endl;
			std::cout << "MAX HOURS: 2359" << std::endl;
			std::cout << "MAX SECOND: 59" << std::endl;
			std::cout << "--------------------------------------" << std::endl;
			std::cout << std::endl;
			std::cout << "Enter the military hour: "; std::cin >> hour;
			std::cout << "Enter the military seconds: "; std::cin >> seconds;

			time.setTime(hour, seconds);

			std::cout << time.getStandHour() << ":" << time.getMin() << " " << time.getSec() << "s " << time.getDayOrNight() << std::endl;
			myFunction(time);
			badData = false;
		}
		catch (MilTime02::BadHour) {
			std::cout << "ERROR: Hours inputed are incorrect." << std::endl;
		}
		catch (MilTime02::BadSeconds) {
			std::cout << "ERROR: Seconds inputed are incorrect." << std::endl;

		}

	}



	return 0;
}

void myFunction(Time02& obj) {
	std::cout << obj.getHour() << std::endl;
}