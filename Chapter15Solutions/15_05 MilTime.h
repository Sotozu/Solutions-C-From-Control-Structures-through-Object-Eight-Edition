#pragma once
#include "05 Time.h"
#include <iostream>
#include <iomanip>
#include <string>

class MilTime05 : public Time05 {
private:
	int milHours;
	int milSeconds;
protected:
	std::string DayOrNight;
	bool confirmInput();
	void processTimeData();
public:
	//Constructor
	MilTime05();
	MilTime05(int mH, int mS);

	//Mutators
	void setTime(int mH, int mS);


	//Accessors
	int getHour() const override;
	int getStandHour() const;
	std::string getDayOrNight() const;

	//Memberfunction
};