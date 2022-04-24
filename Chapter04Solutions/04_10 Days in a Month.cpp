#include <iostream>
using namespace std;

//10. Days in a Month

int main() {
		
	cout << "This program outputs the number of days in a month given the month and year.\nIt even determines the days if it's a leap year!\n\n";
	int Month, Year, January = 31,
	February = 28,
	March = 31,
	April = 30,
	May = 31,
	June = 30,
	July = 31,
	August = 31,
	September = 30,
	October = 31,
	November = 30,
	December = 31;

	int leapCheck, leapCheck2, leapCheck3;

	cout << "Please enter the month: ";
	cin >> Month;
	cout << "Please enter the year: ";
	cin >> Year;

	leapCheck = Year % 100;
	leapCheck2 = Year % 4;

	if (leapCheck == 0) {
		leapCheck3 = Year % 400;
		if (leapCheck3 == 0) {
			February = 29;
		}

	}
	else if (leapCheck2 == 0) {
		February = 29;
	}

	switch (Month) {
	case (1): cout << January << " days";
		break;
	case (2):cout << February << " days";
		break;
	case (3):cout << March << " days";
		break;
	case (4):cout << April << " days";
		break;
	case (5):cout << May << " days";
		break;
	case (6):cout << June << " days";
		break;
	case (7):cout << July << " days";
		break;
	case (8):cout << August << " days";
		break;
	case (9):cout << September << " days";
		break;
	case (10):cout << October << " days";
		break;
	case (11):cout << November << " days";
		break;
	case (12):cout << December << " days";
		break;
	default: cout << "You didn't enter any valid data. Please try again.\n";
	}
	

	return 0;
}