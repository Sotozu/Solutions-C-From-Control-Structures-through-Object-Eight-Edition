#include "04 MilTime.h"

MilTime04::MilTime04() : Time04() {
	milHours = 0;
	milSeconds = 0;
	DayOrNight = "";
}
MilTime04::MilTime04(int mH, int mS) : Time04(0,0,mS){
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
void MilTime04::setTime(int mH, int mS) {
	milHours = mH;
	milSeconds = mS;
}


//Accessors
int MilTime04::getHour() const {
	std::cout << "In MilTime04 Object" << std::endl;
	return milHours;
}
int MilTime04::getStandHour() const {
	return Time04::getHour();
}
std::string MilTime04::getDayOrNight() const {
	return DayOrNight;
}



//Member functions
bool MilTime04::confirmInput() {
	int minutes;
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

void MilTime04::processTimeData() {
	if (milHours < 1200) {		//convert to standard time AM
		hour = (milHours / 100);
		if (hour == 0) {
			hour = 12;
		}
		DayOrNight = "AM";
	}
	else { 		//convert to standard time PM
		hour = (milHours - 1200)/100;
		if (hour == 0) {
			hour = 12;
		}
		DayOrNight = "PM";
	}
}