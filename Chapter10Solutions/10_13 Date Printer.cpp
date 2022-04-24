#include <iostream>
#include <string>

using namespace std;

int main() {

	const int SIZE = 30;

	string date_arr;
	string month, day, year;


	int month_num;

	cout << "Please enter a date in the format \"mm/dd/yy\"." << endl;
	cout << "ENTER DATE: ";

	getline(cin, date_arr);

	if (date_arr[0] == '0') {
		month = date_arr[1];
		month_num = atoi(month.c_str());
	}
	else {
		month = date_arr[1];
		month_num = atoi(month.c_str()) + 10;
	}

	switch (month_num) {
	case 1:
		month = "January";
		break;
	case 2:
		month = "February";
		break;
	case 3:
		month = "March";
		break;
	case 4:
		month = "April";
		break;
	case 5:
		month = "May";
		break;
	case 6:
		month = "June";
		break;
	case 7:
		month = "July";
		break;
	case 8:
		month = "August";
		break;
	case 9:
		month = "September";
		break;
	case 10:
		month = "October";
		break;
	case 11:
		month = "November";
		break;
	case 12:
		month = "December";
		break;
	default:
		month = "NOT AN OPTION";
	}

	day.append(date_arr, 3, 2);
	year.append(date_arr, 6, 4);

	cout << month << " " << day << ", " << year;

	return 0;
}