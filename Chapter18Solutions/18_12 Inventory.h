#pragma once
#include <string>
class Inventory12 {
private:
	int serialNum;
	struct Date {
		int year;
		int month;
		int day;
	};
	Date date;
	int lotNum;
public:

	//Default Constructor
	Inventory12() {
		serialNum = 0;

		date.year = 0;
		date.month = 0;
		date.day = 0;

		lotNum = 0;
	}

	//Constructor 1
	Inventory12(int serialNumber, int lotNumber, int year, int month, int day) {
		serialNum = 0;

		date.year = 0;
		date.month = 0;
		date.day = 0;

		lotNum = 0;
	}

	//Mutator
	void setManufDate(int year, int month, int day) {
		date.year = year;
		date.month = month;
		date.day = day;
	}

	void setManufYear(int year) {
		date.year = year;
	}
	void setManufMonth(int month) {
		date.month = month;
	}
	void setManufDay(int day) {
		date.day = day;
	}

	void setSerialNumber(int serialNumber) {
		serialNum = serialNumber;
	}

	void setLotNumber(int lotNumber){
		lotNum = lotNumber;
	}

	//Accessors
	std::string returnManufDate() const {
		std::string manfD = "";
		manfD += std::to_string(date.month);
		manfD += "/";
		manfD += std::to_string(date.day);
		manfD += "/";
		manfD += std::to_string(date.year);

		return manfD;
	}

	int returnSerialNumber() const{
		return serialNum;
	}

	int returnLotNumber()const {
		return lotNum;
	}


	//Operator Overloading
	void operator=(const Inventory12& right) {
		serialNum = right.serialNum;
		lotNum = right.lotNum;
		date.year = right.date.year;
		date.month = right.date.month;
		date.day = right.date.day;

	}
};