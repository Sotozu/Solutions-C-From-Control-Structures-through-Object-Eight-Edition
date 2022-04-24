#pragma once
#include "02 Time.h"
#include <iostream>
#include <iomanip>
#include <string>

class MilTime02 : public Time02 {
private:
	int milHours;
	int milSeconds;
	std::string DayOrNight;
	void confirmInput();
protected:

public:
	//Exception Class
	
	class BadHour{};

	class BadSeconds{};


	//Constructor
	MilTime02();
	MilTime02(int mH, int mS);

	//Mutators
	void setTime(int mH, int mS);


	//Accessors
	int getHour() const override;
	int getStandHour() const;
	std::string getDayOrNight() const;

	//Memberfunction
	void processTimeData();
};