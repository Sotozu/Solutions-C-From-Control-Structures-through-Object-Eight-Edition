#pragma once

#include <iostream>
#include <string>

class Date {
private:

	int day;
	int month;
	int year;

public:

	//Exception class
	class InvalidDay {};
	class InvalidMonth{};
	Date() { // default constructor
		day = 0;
		month = 0;
		year = 0;
	}

	Date(int d, int m, int y) { //constructor
		if (d < 1 || d > 31) {
			throw InvalidDay();
		}
		else if (m < 1 || m > 12) {
			throw InvalidMonth();
		}
		day = d;
		month = m;
		year = y;
	}

	void setDate(int d, int m, int y) {

		if (d < 1 || d > 31) {
			throw InvalidDay();
		}
		else if (m < 1 || m > 12) {
			throw InvalidMonth();
		}

		day = d;
		month = m;
		year = y;

	}

	void dateForm1() {
		std::cout << day << "/" << month << "/" << year << std::endl;
	}

	void dateForm2() {

		std::string m;
		switch (month) {
		case 1:
			m = "January";
			break;
		case 2:
			m = "February";
			break;
		case 3:
			m = "March";
			break;
		case 4:
			m = "April";
			break;
		case 5:
			m = "May";
			break;
		case 6:
			m = "June";
			break;
		case 7:
			m = "July";
			break;
		case 8:
			m = "August";
			break;
		case 9:
			m = "September";
			break;
		case 10:
			m = "October";
			break;
		case 11:
			m = "November";
			break;
		case 12:
			m = "December";
			break;
		default:
			std::cout << "ERROR.\n";
			break;
		}

		std::cout << m << " " << day << ", " << year << std::endl;
	}

	void dateForm3() {
		std::string m;
		switch (month) {
		case 1:
			m = "January";
			break;
		case 2:
			m = "February";
			break;
		case 3:
			m = "March";
			break;
		case 4:
			m = "April";
			break;
		case 5:
			m = "May";
			break;
		case 6:
			m = "June";
			break;
		case 7:
			m = "July";
			break;
		case 8:
			m = "August";
			break;
		case 9:
			m = "September";
			break;
		case 10:
			m = "October";
			break;
		case 11:
			m = "November";
			break;
		case 12:
			m = "December";
			break;
		default:
			std::cout << "ERROR.\n";
			break;
		}

		std::cout << day << " " << m << " " << year << std::endl;
	}

};