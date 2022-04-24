#pragma once
#include "04 Time.h"
#include <iostream>
#include <iomanip>
#include <string>

class MilTime04 : public Time04{
private:
	int milHours;
	int milSeconds;
	std::string DayOrNight;
	bool confirmInput();
protected:

public:
	//Constructor
	MilTime04();
	MilTime04(int mH, int mS);

	//Mutators
	void setTime(int mH, int mS);

	
	//Accessors
	int getHour() const override;
	int getStandHour() const;
	std::string getDayOrNight() const;

	//Memberfunction
	void processTimeData();
};