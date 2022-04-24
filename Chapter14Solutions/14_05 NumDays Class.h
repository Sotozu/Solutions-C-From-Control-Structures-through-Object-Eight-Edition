#pragma once
#include <iostream>
#include <iomanip>


class Numdays5
{
private:
	int days;
	int hours;
	double work_days;

	int max_days;
	int max_hours;
	double max_workdays;
	void adjust_work_days() {
		work_days = hours / 8.0;
	}
public:
	//constructor
	Numdays5() {
		days = 0;
		hours = 0;
		work_days = 0;
		SetMaxDays(30);
	}
	Numdays5(int i) {
		SetMaxDays(30);
		days = i;
		hours = i;
		work_days = i / 8.0;
	}

	//Accessor
	double getWorkDays() {
		return days;
	}
	int getHours() {
		return hours;
	}
	int getDays() {
		return days;
	}

	double getMaxWorkDays() {
		return max_workdays;
	}
	int getMaxHours() {
		return max_hours;
	}
	int getMaxDays() {
		return max_days;
	}

	//Mutators
	void setWorkHours(int i) {
		hours = i;
		work_days = i / 8.0;
	}
	void setWorkDays(int i) {
		days = i;
		hours = i * 8;
		work_days = i / 8.0;
	}

	void SetMaxDays(int i) {
		max_days = i;
		max_hours = i * 8;
		max_workdays = i / 8.0;
	}

	//object conversion
	operator double() { //this was not explained in the book. Did not know how to create the prototype for 'type conversion'
		double temp = hours / 8.0f;
		return temp;
	}

	//Overloaded + Operator
	Numdays5 operator+(const Numdays5& right)
	{
		Numdays5 temp;
		temp.hours = hours + right.hours;
		temp.work_days = work_days + right.work_days;
		return temp;
	}
	Numdays5 operator-(const Numdays5& right)
	{
		Numdays5 temp;
		temp.hours = hours - right.hours;
		temp.work_days = work_days - right.work_days;
		return temp;
	}

	Numdays5 operator++() { //Prefix
		++hours;
		adjust_work_days();
		return *this;
	}
	Numdays5 operator--() { //Prefix
		--hours;
		adjust_work_days();
		return *this;
	}

	Numdays5 operator++(int) { //Postfix
		Numdays5 temp(hours);
		hours++;
		adjust_work_days();
		return *this;
	}
	Numdays5 operator--(int) { //Postfix
		Numdays5 temp(hours);
		hours--;
		adjust_work_days();
		return *this;
	}

	//Other Functions

	void printInfo() {
		std::cout << std::setprecision(2) << std::showpoint << std::fixed;
		std::cout << "Hours: " << hours << std::endl;
		std::cout << "Days Work: " << work_days << std::endl;
	}

};