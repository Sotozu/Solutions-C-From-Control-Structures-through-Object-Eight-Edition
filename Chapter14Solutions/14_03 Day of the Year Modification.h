#pragma once

#include <iostream>
#include <string>

class DayofYearModification3 {
private:
	int day;
	static std::string months[12];
	static int numDaysMonth[12];
	std::string month;
	int month_index;
	void checkValidInput365() {
		if (day < 1 || day > 365) {
			std::cout << "Error: Days incorrect input. Ending Program." << std::endl;
			exit(0);
		}
	}
	bool isValidMonth(bool month_found) {
		if (month_found == false) {
			std::cout << "Error: Month incorrect input. Ending Program." << std::endl;
			exit(0);
		}
	}
	void checkValidMonthDays(int month) {
		if (day < 0 || day > numDaysMonth[month]) {
			std::cout << "Error: Day incorrect input. Ending Program." << std::endl;
			exit(0);

		}
	}

	void adjustDateAddition() {
		if (day > numDaysMonth[month_index]) {
			day = 1;
			month_index++;
			if (month_index == 12) {
				month_index = 0;
				month = months[month_index];
			}
			else {
				month = months[month_index];
			}
		}
	}

	void adjustDateSubtraction() {
		if (day < 1) {
			month_index--;
			if (month_index == -1) {
				month_index = 11;
				month = months[month_index];
			}
				day = numDaysMonth[month_index];
		}
		else {
			month = months[month_index];
		}
	}
public:
	//Constructor
	DayofYearModification3(int i, std::string user_month_input) {
		day = i;
		bool month_found = false;
		month = user_month_input;
		for (int i = 0; i < 12; i++) {
			if (month == months[i]) {
				month_found = true;
				month_index = i;
			}
		}

		isValidMonth(month_found);
		checkValidMonthDays(month_index);

	}

	DayofYearModification3(int i) {
		day = i;
		checkValidInput365();
	}

	//Function
	void printDate() {
		std::cout << month << " " << day << std::endl;
	}

	DayofYearModification3 operator++() { //Prefix ++ Operator
		++day;
		adjustDateAddition();
		return *this;
	}

	DayofYearModification3 operator++(int) { //Postfix ++ Operator
		DayofYearModification3 temp(day, month);
		day++;
		adjustDateAddition();
		return temp;
	} 

	DayofYearModification3 operator--() { //Prefix -- Operator
		--day;
		adjustDateSubtraction();
		return *this;
	} 
	DayofYearModification3 operator--(int) { //Postfix -- Operator
		DayofYearModification3 temp(day, month);
		day--;
		adjustDateSubtraction();
		return temp;
	} 
};

std::string DayofYearModification3::months[12] = { "January","February", "March", "April", "May", "June",
									  "July", "August", "September", "October", "November", "December" };

int DayofYearModification3::numDaysMonth[12] = { 31,28,31,30,31,31,30,31,30,31,30,31 };