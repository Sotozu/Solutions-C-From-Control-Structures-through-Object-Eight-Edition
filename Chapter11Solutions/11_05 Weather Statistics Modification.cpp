#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

enum months { JANUARY, FEBRUARY, MARCH, APRIL, MAY, JUNE, JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER };

struct Weather {
	double total_r;
	double temp_h;
	double temp_l;
	double average;
};

string whichMonth(months);
void insertWeatherData(Weather&, string);
void outPut(Weather&, string);
int main() {
	string month_name, month_highest, month_lowest;
	months weather_months = JANUARY;
	const int SIZE = 12;
	Weather month[SIZE];
	double highest_temp, lowest_temp, total_rainfall = 0, total_average_temps = 0,
		average_monthly_rainfall, average_of_average_monthly_temp;

	cout << "Please enter the following data for each month.\n";

	for (int i = 0; i < SIZE; i++) {
		month_name = whichMonth(weather_months);
		insertWeatherData(month[i], month_name);
		cout << endl;
		cout << "--------------" << endl << endl;
		weather_months = static_cast<months>(weather_months + 1);
	}
	cout << endl << endl;
	cout << "-----STATISTICS-----" << endl << endl;

	weather_months = JANUARY; // reset weather_months to JANUARY

	for (int i = 0; i < SIZE; i++) {
		total_rainfall += month[i].total_r;
		total_average_temps += month[i].average;
	}

	average_monthly_rainfall = total_rainfall / SIZE;
	average_of_average_monthly_temp = total_average_temps / SIZE;


	highest_temp = month[0].temp_h;
	month_highest = "January";
	lowest_temp = month[0].temp_l;
	month_lowest = "January";


	for (int i = 1; i < SIZE; i++) {
		if (highest_temp < month[i].temp_h) {
			highest_temp = month[i].temp_h;
			month_highest = whichMonth(static_cast<months>(i));
		}
		if (lowest_temp > month[i].temp_l) {
			lowest_temp = month[i].temp_l;
			month_lowest = whichMonth(static_cast<months>(i));
		}
	}

	cout << setprecision(2) << fixed << showpoint;

	cout << "Average Monthly Rainfall: " << average_monthly_rainfall << " inches" << endl;


	cout << "Total Rainfall: " << total_rainfall << " inches" << endl;
	cout << "Highest Temperature is " << highest_temp << "F " << " in " << month_highest << endl;
	cout << "Lowest Temprature is " << lowest_temp << "F" << " in " << month_lowest << endl;
	cout << "Average Monthly Temperature: " << average_of_average_monthly_temp << "F " << endl;


	return 0;

}

string whichMonth(months weather_months) {
	string month_name;
	switch (weather_months) {
	case JANUARY:
		month_name = "January";
		break;
	case FEBRUARY:
		month_name = "February";
		break;
	case MARCH:
		month_name = "March";
		break;
	case APRIL:
		month_name = "April";
		break;
	case MAY:
		month_name = "May";
		break;
	case JUNE:
		month_name = "June";
		break;
	case JULY:
		month_name = "July";
		break;
	case AUGUST:
		month_name = "August";
		break;
	case SEPTEMBER:
		month_name = "September";
		break;
	case OCTOBER:
		month_name = "October";
		break;
	case NOVEMBER:
		month_name = "November";
		break;
	case DECEMBER:
		month_name = "December";
		break;
	default:
		month_name = "ERROR";
		break;
	}
	return month_name;
}

void insertWeatherData(Weather& month, string month_name) {
	cout << month_name << " weather statistics." << endl;
	cout << "Total Rainfall (in): ";
	cin >> month.total_r;
	do {
		cout << "High Temperature (F): ";
		cin >> month.temp_h;
		if (month.temp_h > 140) {
			cout << "ERROR: Max temp is 140. Please enter a lower number.\n";
		}
	} while (month.temp_h > 140);
	do {
		cout << "Low Temperature (F): ";
		cin >> month.temp_l;
		if (month.temp_l < -100) {
			cout << "ERROR: MIN temp is -100. Please enter a higher number.\n";
		}
	} while (month.temp_l < -100);

	month.average = (month.temp_h + month.temp_l) / 2;
}
void outPut(Weather& month, string month_name) {

	double average_monthly_rainfall;
	double total_rainfall;
	double highest_temp;
	double lowest_temp;
	cout << month_name << " weather statistics." << endl;
	cout << "Total Rainfall (in): " << endl;
	cout << "High Temperature (F): " << endl;
	cout << "Low Temperature (F): " << endl;

}