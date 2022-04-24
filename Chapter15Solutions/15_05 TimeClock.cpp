#include "05 TimeClock.h"

TimeClock05::TimeClock05() : MilTime05() {
	start = 0;
	end = 0;
};

TimeClock05::TimeClock05(int s, int e) : MilTime05() {
	start = s;
	end = e;
	bool inputfails = false;
	if (!confirmInput(s)) {
		std::cout << "ERROR: Enter valid start time" << std::endl;
		inputfails = true;
	}
	if (!confirmInput(e)) {
		std::cout << "ERROR: Enter valid end time" << std::endl;
		inputfails = true;
	}
	if (inputfails) {
		exit(0);
	}
	//calculate the time elapsed between start and end times inputed;
	calcTimeElapsed(s,e);
}

bool TimeClock05::confirmInput(int t) {
	bool isGoodData = true;
	if (t > 2359 || t < 0) {
		std::cout << "ERROR: HOURS INPUT" << std::endl;

		isGoodData = false;
	}
	Time05::min = t % 100;

	if (min > 59) {
		std::cout << "ERROR: MINUTES INPUTED" << std::endl;
		isGoodData = false;
	}

	return isGoodData;


}

void TimeClock05::processTimeData(int t) {
	if (t < 1200) {		//convert to standard time AM
		hour = (t / 100);
		if (hour == 0) {
			hour = 12;
		}
		DayOrNight = "AM";
	}
	else { 		//convert to standard time PM
		hour = (t - 1200) / 100;
		if (hour == 0) {
			hour = 12;
		}
		DayOrNight = "PM";
	}

}

//Member Function
void TimeClock05::calcTimeElapsed(int s, int e) {
	int start_minutes = 0, end_minutes = 0;
	int hours_between = 0, minutes_between = 0;
	if (s > e) {
		int hours_between2359;
		int minutes_between2359;
		int total_minutes;
		//hours between 2359 and "start time"
		hours_between2359 = 23 - (s / 100);
		//minutes between 2359 and "start time"
		minutes_between2359 = 60 - (s % 100);

		hours_between = hours_between2359 + (e / 100);

		//std::cout << hours_between2359 << std::endl;
		//std::cout << minutes_between2359 << std::endl;
		end_minutes = e % 100;

		total_minutes = end_minutes + minutes_between2359;
		minutes_between = total_minutes;
		if (total_minutes > 59) { // if minutes added is greated than 59 then we have an hour;
			minutes_between = total_minutes - 60;
			hours_between++;
		}

	}
	else if (e > s) {
		hours_between = (e - s)/100;

		start_minutes = s % 100;
		end_minutes = e % 100;

		if (start_minutes < end_minutes) {
			minutes_between = end_minutes - start_minutes;
		}
		else if (start_minutes > end_minutes) {
			hours_between--;
			minutes_between = 60 - (start_minutes - end_minutes);

		}
		else {

		}
	}
	else {
		hour = 0;
		min = 0;
		sec = 0;
	}
	hour = hours_between;
	min = minutes_between;
}

void TimeClock05::showTimeElapsed() {
	std::cout << "The time elapsed between..." << std::endl;
	std::cout << "Start: " << start << std::endl;
	std::cout << "End: " << end << std::endl;
	std::cout << "Elapsed Time: " << hour << " hours and " << min << " minutes." << std::endl;
}