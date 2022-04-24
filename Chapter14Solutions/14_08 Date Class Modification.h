#pragma once
#include <iostream>
#include <string>


const int SIZE = 12;
class Date8;

std::istream& operator >>(std::istream&, Date8&);

std::ostream& operator << (std::ostream&, const Date8&);
class Date8 {
private:

	int day;
	int month;
	int year;
	static std::string m_name[SIZE];
	static int m_num[SIZE];
	static int numDaysMonth[SIZE];
	//static member function


public:
	//Constructors
	Date8() {
		day = 0;
		month = 0;
		year = 0;
	}

	Date8(int d, int m, int y) {
		day = d;
		month = m;
		year = y;
	}


	void setDate(int d, int m, int y) {

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

	bool validDay(int d) {
		if (d > 31 || d < 1) {
			std::cout << "ERROR: Invalid day. (1-31)\n";
			std::cout << "Please try again.\n";
			return false;
		}
		else {
			return true;
		}
	}

	bool validMonth(int m) {
		if (m > 11 || m < 0) {
			std::cout << "ERROR: Invalid month. (1-12)\n";
			std::cout << "Please try again.\n";
			return false;
		}
		else {
			return true;
		}
	}

	int getDay() {
		return day;
	}
	int getMonth() {
		return month;
	}
	int getYear() {
		return year;
	}

	//Overloaded -- & ++ Operator
	Date8 operator++() {
		++day;
		if (day > numDaysMonth[month]) { //if the days increases above the day in the months then do this
			++month; //go to the next month;
			day = 1;
			if (month > 11) { //if the month goes beyond 12 (December) then do this;
				month = 0; //sets month to January
				day = 1;//sets day to 1;
				++year; //increases year by 1;
				return *this;
			}
			return *this;
		}
		return *this;
	}

	Date8 operator--() {
		--day;
		if (day == 0) { //if the day goes bellow the month day 1 do this
			--month; //go to the previous month;
			day = numDaysMonth[month];//sets day to the last day of the month;

			if (month < 0) { //if the month goes bellow January
				month = 11; //sets month to December
				day = numDaysMonth[month];//sets day to the last day of the month;
				--year; //decreases year by 1;
				return *this;
			}
			return *this;
		}
		return *this;
	}

	Date8 operator++(int) {

		Date8 temp(day, month, year);

		day++;
		if (day > numDaysMonth[month]) { //if the days increases above the day in the months then do this
			month++; //go to the next month;
			day = 1;
			if (month > 11) { //if the month goes beyond 12 (December) then do this;
				month = 0; //sets month to January
				day = 1;//sets day to 1;
				year++; //increases year by 1;
				return temp;
			}
			return temp;
		}
		return temp;
	}

	Date8 operator--(int) {

		Date8 temp(day, month, year);

		day--;
		if (day == 0) { //if the days increases above the day in the months then do this
			month--; //go to the next month;
			day = numDaysMonth[month];//sets day to the last day of the month;
			if (month < 0) { //if the month goes beyond 12 (December) then do this;
				month = 11; //sets month to January
				day = numDaysMonth[11];//sets day to 1;
				year--; //increases year by 1;
				return temp;
			}
			return temp;
		}
		return temp;
	}


	int operator-(Date8 right) { //This is SO SLOW! Ugh need to find a better algorithm
		Date8 left_temp(day, month, year);
		int counter = 0;

		if (left_temp > right) { // X - Y (if X is bigger than Y)
			 //SOMETHING AINT RIGHT HERE BOBBY
			 //UPDATE: FIXED!

			while (left_temp != right) {
				left_temp--;
				counter++;
			}
		}
		else if (left_temp < right) { // X - Y (if Y is bigger than x)
			while (left_temp != right) {
				left_temp++;
				counter++;
			}
		}

		return counter;

	}

	//Static Member Functions
	static bool validInput(int d, int m, int y) {
		if (y < 0) {
			std::cout << "Year must be a positive value.\n";
			return false;
		}
		if (m > 11 || m < 0) {
			std::cout << "Please enter a valid month (1-12).\n";
			return false;
		}
		if (numDaysMonth[m - 1] < d || d < 1) {
			std::cout << "Please enter a valid day.\n";
			return false;
		}
		return true;
	}

	//Overloaded >> & >> Operator

	friend std::istream& operator>>(std::istream& strm, Date8& obj) {
		std::cout << "Day: "; strm >> obj.day;
		std::cout << "Month: "; strm >> obj.month;
		obj.month--;
		std::cout << "Year: "; strm >> obj.year;
		return strm;
	}

	friend std::ostream& operator<<(std::ostream& strm, const Date8& obj) {
		std::cout << Date8::m_name[obj.month] << " " << obj.day << ", " << obj.year << std::endl;

		return strm;
	}

	//Overloaded = Operator 
	Date8 operator = (const Date8& right) {
		day = right.day;
		month = right.month;
		year = right.year;
		return *this;
	}

	//Overload != Operator
	bool operator!= (const Date8& right) {
		bool status;
		if (day != right.day) {
			status = true;
		}
		else if (month != right.month) {
			status = true;
		}
		else if (year != right.year) {
			status = true;
		}
		else {
			status = false;
		}
		return status;
	}

	//Overload <= & >= & > & < & == Operator
	bool operator<(const Date8& right) {
		bool status;

		if (year < right.year) {
			status = true;
		}
		else if (year <= right.year && month < right.month) {
			status = true;
		}
		else if (year <= right.year && month <= right.month && day < right.day) {
			status = true;
		}
		else {
			status = false;
		}
		return status;
	}

	bool operator>(const Date8& right) {
		bool status;

		if (year > right.year) {
			status = true;
		}
		else if (year >= right.year && month > right.month) {
			status = true;
		}
		else if (year >= right.year && month >= right.month && day > right.day) {
			status = true;
		}
		else {
			status = false;
		}
		return status;
	}

	bool operator>=(const Date8& right) {
		bool status;

		if (year == right.year && month == right.month && day == right.day) {
			status = true;
		}
		else if (year > right.year) {
			status = true;
		}
		else if (year >= right.year && month > right.month) {
			status = true;
		}
		else if (year >= right.year && month >= right.month && day > right.day) {
			status = true;
		}
		else {
			status = false;
		}
		return status;
	}

	bool operator<=(const Date8& right) {
		bool status;
		if (year == right.year && month == right.month && day == right.day) {
			status = true;
		}
		else if (year < right.year) {
			status = true;
		}
		else if (year <= right.year && month < right.month) {
			status = true;
		}
		else if (year <= right.year && month <= right.month && day < right.day) {
			status = true;
		}
		else {
			status = false;
		}
		return status;
	}

	bool operator==(const Date8& right) {
		bool status;
		if (year == right.year && month == right.month && day == right.day) {
			status = true;
		}
		else {
			status = false;
		}
		return status;
	}

};


//Defining the Static Memeber Variables
std::string Date8::m_name[12] = { "January", "February", "March", "April", "May", "June",
									"July", "August", "September", "October", "November", "December" };

int Date8::m_num[12] = { 1,2,3,4,5,6,7,8,9,10,11,12 };

int Date8::numDaysMonth[12] = { 31,28,31,30,31,31,30,31,30,31,30,31 };