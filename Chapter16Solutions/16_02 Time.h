#pragma once
#include <iostream>

class Time02 {
protected:
	int hour;
	int min;
	int sec;
public:
	// Default constructor 
	Time02();

	// Constructor 
	Time02(int h, int m, int s);

	// Accessor functions 
	virtual int getHour() const;


	int getMin() const;

	int getSec() const;

};