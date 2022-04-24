#pragma once
#include <string>
#include <iostream>
#include <iomanip>


class Surgery {

private:
	double surge_price[5];
	std::string surge_name[5];
public:
	Surgery() {
		surge_price[0] = 1000;
		surge_price[1] = 2000;
		surge_price[2] = 3000;
		surge_price[3] = 4000;
		surge_price[4] = 5000;

		surge_name[0] = "Spleen Surgery";
		surge_name[1] = "Toe Surgery";
		surge_name[2] = "Tooth Surgery";
		surge_name[3] = "Back Surgery";
		surge_name[4] = "Brain Surgery";
	}
	double getPrice(int i) {
		return surge_price[i];
	}
	std::string getName(int i) {
		return surge_name[i];
	}
};

class Pharmacy {

private:
	double med_price[5];
	std::string med_name[5];
public:
	Pharmacy() {
		med_price[0] = 100;
		med_price[1] = 200;
		med_price[2] = 300;
		med_price[3] = 400;
		med_price[4] = 500;

		med_name[0] = "Advil";
		med_name[1] = "Advil +";
		med_name[2] = "Strength Potion++";
		med_name[3] = "Antidote";
		med_name[4] = "Toothpaste";
	}

	double getPrice(int i) {
		return med_price[i];
	}
	std::string getName(int i) {
		return med_name[i];
	}

};

class PatientAccount
{
private:
	double total;
	int days;
	double daily_rate;
	Surgery surge; //have their own constructors when initialized
	Pharmacy pharm;//have their own constructors when initialized
public:
	PatientAccount() {
		total = 0;
		days = 0;
		daily_rate = 100;
	}
	void showSurgePnN() {
		std::cout << "-------Surgery List-------" << std::endl;
		for (int i = 0; i < 5; i++) {
			std::cout << 1+i  << ": "<< std::left << std::setw(18) << surge.getName(i) << ": $" <<surge.getPrice(i) << std::endl;
		}
	}

	void addSurgeCost(int i) {
		total += surge.getPrice(i);
	}
	
	void showPharmacyPnN() {
		std::cout << "-------Medication List-------" << std::endl;
		for (int i = 0; i < 5; i++) {
			std::cout << 1 + i << ": " << std::left << std::setw(20) << pharm.getName(i) << ": $" << pharm.getPrice(i) << std::endl;
		}
	}

	void addPharmCost(int i) {
		total += pharm.getPrice(i);
	}

	void addDailyRate(int i) {
		total += (i * daily_rate);
	}

	double getTotalCharges() {
		return total;
	}
};