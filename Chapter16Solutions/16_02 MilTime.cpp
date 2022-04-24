#include "02 MilTime.h"

MilTime02::MilTime02() : Time02() {
	milHours = 0;
	milSeconds = 0;
	DayOrNight = "";
}
MilTime02::MilTime02(int mH, int mS) : Time02(0, 0, mS) {
	milHours = mH;
	milSeconds = mS;

	try {
		confirmInput();
	}
	catch (BadHour) {
		throw;
	}
	catch (BadSeconds) {
		throw;
	}

	processTimeData();

}

//Mutators
void MilTime02::setTime(int mH, int mS) {
	milHours = mH;
	milSeconds = mS;
	sec = mS;

	try {
		confirmInput();
	}
	catch (BadHour) {
		throw;
	}
	catch (BadSeconds) {
		throw;
	}

	processTimeData();

}


//Accessors
int MilTime02::getHour() const {
	std::cout << "In MilTime02 Object" << std::endl;
	return milHours;
}
int MilTime02::getStandHour() const {
	return Time02::getHour();
}
std::string MilTime02::getDayOrNight() const {
	return DayOrNight;
}



//Member functions
void MilTime02::confirmInput() {
	int minutes;
	bool isBadData = false;

	if (milHours > 2359 || milHours < 0) {
		throw BadHour();
	}
	if (milSeconds > 59 || milSeconds < 0) {
		throw BadSeconds();
	}

	min = milHours % 100;

	if (min > 59) {
		throw BadHour();
	}

}

void MilTime02::processTimeData() {
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