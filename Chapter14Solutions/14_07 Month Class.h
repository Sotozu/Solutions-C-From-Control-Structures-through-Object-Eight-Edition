#pragma once
#include <string>
#include <iostream>

class Month;
std::ostream& operator << (std::ostream&, const Month&);
std::istream& operator >> (std::istream&, Month&);


class Month
{
private:
	std::string month;
	int monthNumber;
	static std::string m_name[12];
	static int m_num[12];
public:

	//Constructs
	Month() {
		month = m_name[0];
		monthNumber = m_num[0];
	}

	Month(std::string user_input) {
		month = user_input;
		monthNumber = -1;
		do {
			for (int i = 0; i < 12; i++) {
				if (month == m_name[i]) {
					monthNumber = m_num[i];
					break;
				}
			}
			if (monthNumber == -1) {

				std::cout << "Invalid month name enterd.\n";
				std::cout << "Month Name: "; std::getline(std::cin, month);
			}
		} while (monthNumber == -1);
	}

	Month(int m) {
		if (m < 1 || m > 12) {
			int value;
			do {
				std::cout << "Invalid Month Number.\n";
				std::cout << "Month Number: "; std::cin >> value;
			} while (m < 1 || m > 12);
			monthNumber = value;
		}
		else {
			monthNumber = m;
		}

		for (int i = 0; i < 12; i++) {
			if (monthNumber == (i + 1)) {
				month = m_name[i];
			}
		}
	}

	//Accessors
	std::string getMonthName() {
		return month;
	}

	int getMonthNum() {
		return monthNumber;
	}

	//Static member function
	static bool confirmUserInput(int month_num) {
		for (int i = 0; i < 12; i++) {
			if (month_num == m_num[i]) {
				return true;
			}
		}

		std::cout << "Invalid Month Number Entered" << std::endl;

		return false;

	}
	static bool confirmUserInput(std::string month_name) {
		for (int i = 0; i < 12; i++) {
			if (month_name == m_name[i]) {
				return true;
			}
		}
		std::cout << "Invalid Month Name Entered" << std::endl;
		return false;
	}

	//Operator Overloads

	Month operator++() {
		month = m_name[monthNumber];
		++monthNumber;
		if (monthNumber > 12) {
			month = m_name[0];
			monthNumber = m_num[0];

		}
		return *this;
	}
	Month operator--() {
		--monthNumber;
		month = m_name[monthNumber];
		if (monthNumber < 1) {
			month = m_name[11];
			monthNumber = m_num[11];
		}
		return *this;
	}

	Month operator++(int) {
		Month temp(monthNumber);
		month = m_name[monthNumber];
		++monthNumber;
		if (monthNumber > 12) {
			month = m_name[0];
			monthNumber = m_num[0];
		}
		return temp;;
	}
	Month operator--(int) {

		Month temp(monthNumber);
		--monthNumber;
		month = m_name[monthNumber];
		if (monthNumber < 1) {
			month = m_name[11];
			monthNumber = m_num[11];
		}
		return temp;
	}

	void operator=(const Month& right) {
		monthNumber = right.monthNumber;
		month = right.month;
	}

	friend std::ostream& operator<<(std::ostream& strm, const Month& obj) {
		strm << "Month Name: " << obj.month << std::endl;
		strm << "Month Number: " << obj.monthNumber << std::endl;
		return strm;
	}
	friend std::istream& operator>>(std::istream& strm, Month& obj) {
		std::cout << "Month Name: "; strm >> obj.month;
		do {
			for (int i = 0; i < 12; i++) {
				if (obj.month == m_name[i]) {
					obj.monthNumber = m_num[i];
					break;
				}
			}
		} while (obj.monthNumber == -1);
		return strm;
	}

};

//Static member variables defined here
std::string Month::m_name[12] = { "January", "February", "March", "April", "May", "June",
									"July", "August", "September", "October", "November", "December" };
int Month::m_num[12] = { 1,2,3,4,5,6,7,8,9,10,11,12 };