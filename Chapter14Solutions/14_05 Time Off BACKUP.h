#pragma once
#include "05 NumDays Class.h"
# include <string>
class TimeOff5
{
private:
	static Numdays5 maxVacation, maxUnpaid, maxSickDays;

	Numdays5 vacTaken, unpaidTaken, sickTaken;

	std::string name;
	int identification_num;

	bool isMaxVacation(int); //will return true if the max vacation amount of 240 hours has been reached.
	bool isMaxUnpaid(int); //will return true if the max vacation amount of 240 hours has been reached.
	bool isMaxSick(int); //will return true if the max vacation amount of 240 hours has been reached.

	void setUnpaid(double days) {

		unpaidTaken.setWorkDays(days);

	}


public:

	//Constructor
	TimeOff5() {
		name = "";
		identification_num = 0;
	}

	TimeOff5(std::string, int);

	//Accessor
	std::string getName() {
		return name;
	}

	int getID() {
		return identification_num;
	}

	double getVacWorkDays() {
		return vacTaken.getWorkDays();
	}

	int getVacWorkHours() {
		return vacTaken.getHours();
	}

	double getUnpVacWorkDays() {
		return unpaidTaken.getWorkDays();
	}

	int getUnpVacWorkHours() {
		return unpaidTaken.getHours();
	}

	double getSickWorkDays() {
		return sickTaken.getWorkDays();
	}

	int getSickWorkHours() {
		return sickTaken.getHours();
	}

	//Mutator
	void setMaxVacation() {
		int value;
		do {
			std::cout << "Total Max amount of paid vacation days (MAX is 30): "; std::cin >> value;
			if (value > 30) {
				std::cout << "ERROR: Maximum possible amount of vacation days is 30." << std::endl;
			}
		} while (value > 30);
		maxVacation.setWorkDays(value);
	}
	void setMaxUnpaid() {
		int value;
		std::cout << "Total Max amount of unpaid vacation days: "; std::cin >> value;

		unpaidTaken.setWorkDays(value);

	}
	void setMaxSickDays() {
		int value;
		std::cout << "Total Max amount of sick days: ";  std::cin >> value;
		sickTaken.setWorkDays(value);

	}


	void setVacation(double days) {

		vacTaken.setWorkDays(days);
		if (vacTaken.getWorkDays() > 60) { //Once over 60 both paid and unpaid capoff
			vacTaken.setWorkDays(30);
			unpaidTaken.setWorkDays(30);
			std::cout << "ERROR: Over amount of vacation days. Total vacation days policy: 30 paid and 30 unpaid" << std::endl;
			std::cout << "SET PAID VACATION DAYS TO 30" << std::endl;
			std::cout << "SET UNPAID VACATION DAYS TO 30" << std::endl;
		}
		else if (vacTaken.getWorkDays() > 30) { //Adjust the paid vacation days if exceeds 30
			double excess = vacTaken.getWorkDays() - 30;
			vacTaken.setWorkDays(30);
			unpaidTaken.setWorkDays(excess);
		}

	}

	void setSickDays(double days) {

		sickTaken.setWorkDays(days);
		if (sickTaken.getWorkDays() > 30) {
			std::cout << "ERROR: Over amount of sick days. Total sick day policy is 30 days. " << std::endl;
			std::cout << "SET SICK DAYS TO 30" << std::endl;
			sickTaken.setWorkDays(30);
		}

	}


};


Numdays5 TimeOff5::maxVacation(30 * 8);
Numdays5 TimeOff5::maxSickDays(30 * 8);
Numdays5 TimeOff5::maxUnpaid(30 * 8);
