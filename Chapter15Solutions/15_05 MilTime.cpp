#include "05 MilTime.h"

MilTime05::MilTime05() : Time05() {
	milHours = 0;
	milSeconds = 0;
	DayOrNight = "";
}
MilTime05::MilTime05(int mH, int mS) : Time05(0, 0, mS) {
	milHours = mH;
	milSeconds = mS;
	if (confirmInput()) {
		exit(0);
	}
	else {
		processTimeData();
	}
}

//Mutators
void MilTime05::setTime(int mH, int mS) {
	milHours = mH;
	milSeconds = mS;
}


//Accessors
int MilTime05::getHour() const {
	std::cout << "In MilTime05 Object" << std::endl;
	return milHours;
}
int MilTime05::getStandHour() const {
	return Time05::getHour();
}
std::string MilTime05::getDayOrNight() const {
	return DayOrNight;
}



//Member functions
bool MilTime05::confirmInput() {
	bool isBadData = false;
	if (milHours > 2359 || milHours < 0) {
		std::cout << "ERROR: HOURS INPUT" << std::endl;

		isBadData = true;
	}
	if (milSeconds > 59 || milSeconds < 0) {
		std::cout << "ERROR: SECONDS INPUT" << std::endl;
		isBadData = true;
	}

	min = milHours % 100;

	if (min > 59) {
		std::cout << "ERROR: MINUTES INPUTED" << std::endl;
		isBadData = true;
	}

	return isBadData;
}

void MilTime05::processTimeData() {
	if (milHours < 1200) {		//convert to standard time AM
		hour = (milHours / 100);
		if (hour == 0) {
			hour = 12;
		}
		DayOrNight = "AM";
	}
	else { 		//convert to standard time PM
		hour = (milHours - 1200) / 100;
		if (hour == 0) {
			hour = 12;
		}
		DayOrNight = "PM";
	}
}