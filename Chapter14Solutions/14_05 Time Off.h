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

	bool isMaxVacation(int value) { //will return true if the max vacation amount of 240 hours has been reached.


		if (maxVacation.getHours() > 240) {
			std::cout << "ERROR: Maximum possible amount of vacation days is 30." << std::endl;
			return true;
		}
		else if (value > maxVacation.getWorkDays()) {
			std::cout << "ERROR: Over amount of vacation days. Total vacation days policy: " << maxVacation.getMaxDays() << std::endl;
			return true;
		}

		return false;
	} 

	bool isMaxUnpaid(int value) { //will return true if the max vacation amount of 240 hours has been reached.
		if (value > maxUnpaid.getWorkDays()) {
			std::cout << "ERROR: Over amount of unpaid vacation days. Total unpaid vacation days policy: " << maxUnpaid.getMaxDays() << std::endl;
			return true;
		}
		else {
			return false;
		}
	} 
	bool isMaxSick(int value) { //will return true if the max vacation amount of 240 hours has been reached.
		if (value > maxSickDays.getWorkDays()) {
			std::cout << "ERROR: Over amount of sick days. Total sick day policy: " << maxSickDays.getMaxDays() << std::endl;
			return true;
		}
		else {
			return false;
		}
	} 

	


public:

	//Constructor
	TimeOff5() {
		name = "";
		identification_num = 0;
	}

	TimeOff5(std::string n, int id) {
		name = n;
		identification_num = id;
	}

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

		vacTaken.SetMaxDays(value);
		std::cout << "THE MAX VACATION DAYS IS: " << vacTaken.getMaxDays() << std::endl;
	}
	void setMaxUnpaid() {
		int value;
		do {
		std::cout << "Total Max amount of unpaid vacation days (MAX is 30): "; std::cin >> value;
			if (value > 30) {
				std::cout << "ERROR: Maximum possible amount of unpaid vacation days is 30." << std::endl;
			}
		} while (value > 30);

		unpaidTaken.SetMaxDays(value);

	}
	void setMaxSickDays() {
		int value;
		do {
		std::cout << "Total Max amount of sick days (MAX is 30): "; std::cin >> value;
			if (value > 30) {
				std::cout << "ERROR: Maximum possible amount of sick days is 30." << std::endl;
			}
		} while (value > 30);
		sickTaken.SetMaxDays(value);
	}

	void setUnpaid() {
		int unp_day_tak;
		do {
			std::cout << "\nENTER UNPAID-VACATION DAYS TAKEN: "; std::cin >> unp_day_tak;
			unpaidTaken.setWorkDays(unp_day_tak);
			if (unpaidTaken.getDays() > unpaidTaken.getMaxDays()) { //Once over 60 both paid and unpaid capoff
				std::cout << "ERROR: Over amount of unpaid-vacation days. Total unpaid-vacation days policy: " << unpaidTaken.getMaxDays();
			}
		} while (unpaidTaken.getDays() > unpaidTaken.getMaxDays());
		

	}

	void setVacation() {
		int vac_day_tak;
		do {
			std::cout << "\nENTER PAID-VACATION DAYS TAKEN: "; std::cin >> vac_day_tak;
			vacTaken.setWorkDays(vac_day_tak);

			std::cout << "MAX VACATION AVAILABLE: " << vacTaken.getMaxDays() << std::endl;
			if (vacTaken.getDays() > vacTaken.getMaxDays()) { //Once over 60 both paid and unpaid capoff
				std::cout << "ERROR: Over amount of paid-vacation days. Total paid-vacation days policy: " << vacTaken.getMaxDays();
			}
		} while (vacTaken.getDays() > vacTaken.getMaxDays());
	}

	void setSickDays() {
		int sic_day_tak;
		do {
			std::cout << "\nENTER SICK DAYS TAKEN: "; std::cin >> sic_day_tak;
			sickTaken.setWorkDays(sic_day_tak);
			if (sickTaken.getDays() > sickTaken.getMaxDays()) {
				std::cout << "ERROR: Over amount of sick days. Total sick day policy: " << sickTaken.getMaxDays();
			}
		} while (sickTaken.getDays() > sickTaken.getMaxDays());
	}


};


Numdays5 TimeOff5::maxVacation(30 * 8);
Numdays5 TimeOff5::maxSickDays(30 * 8);
Numdays5 TimeOff5::maxUnpaid(30 * 8);
