#pragma once
#include <iostream>
#include <string>
class DayofYear2
{
private:
	int day;
	static std::string months[12];
	static int numDaysMonth[12];
	void checkValidInput() {
		if (day < 1 || day > 365) {
			std::cout << "Error incorrect input. Ending Program." << std::endl;
			exit(0);
		}
	}
public:
	//Constructor

	DayofYear2(int i) {
		day = i;
		checkValidInput();
	}

	void printDate() {
		int find_day = day;
		std::string date_string;
		for (int i = 0; i < 12; i++) {
			if (find_day <= numDaysMonth[i]) {
				date_string = months[i];
				break;
			}
			find_day -= numDaysMonth[i];
		}

		std::cout << date_string << " " << find_day << std::endl;
	}
};

std::string DayofYear2::months[12] = { "January","February", "March", "April", "May", "June",
									  "July", "August", "September", "October", "November", "December" };

int DayofYear2::numDaysMonth[12] = { 31,28,31,30,31,31,30,31,30,31,30,31 };


