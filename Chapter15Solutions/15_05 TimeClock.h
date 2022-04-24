#pragma once
#include "05 MilTime.h"
class TimeClock05 : public MilTime05 {
private:
	int start;
	int end;
protected:
	bool confirmInput(int);
	void processTimeData(int);
	void calcTimeElapsed(int s, int e);
public:
	//Contructor
	TimeClock05();
	TimeClock05(int start, int end);

	//Mutator
	
	//Accessor

	//Member Functions
	void showTimeElapsed();
};