#include <string>
#include <iostream>
#include <fstream>

using namespace std;

int main() {

	const int MONTHS = 3; //0 = June, 1 = July, 2 = August
	const int DAYS = 30;
	const int WEATHER_TYPE_TOTAL = 3;
	const int WEATHER_TYPE = 3;

	int monthly_sunny_total, monthly_rainy_total, monthly_cloudy_total;

	int total_sunny = 0, total_rainy = 0, total_cloudy = 0;

	char month_forecast[MONTHS][DAYS]; //3 Months, 30 days each month
	string month_names[MONTHS] = { "June", "July", "August" };
	string weather_type[WEATHER_TYPE] = { "sunny","rainy","cloudy" };
	int total_weather_types[MONTHS][WEATHER_TYPE_TOTAL]; //Will hold the total of each type of weather for each month
														// index [0][0] = total sunny days for june, index [1][1] = total rainy days for july, index [2][2] = total cloudy days for august

	ofstream outFile; //to write into files
	ifstream inFile; //to read from files

	inFile.open("month_data.txt");


	for (int i = 0; i < MONTHS; i++) {
		monthly_sunny_total = 0;
		monthly_cloudy_total = 0;
		monthly_rainy_total = 0;
		for (int j = 0; j < DAYS; j++) {

			inFile >> month_forecast[i][j]; //inserting a line from the file "month_data.txt" into the array month_forecast[][]

			if (month_forecast[i][j] == 'S') {
				monthly_sunny_total += 1;
			}
			if (month_forecast[i][j] == 'R') {
				monthly_rainy_total += 1;
			}
			if (month_forecast[i][j] == 'C') {
				monthly_cloudy_total += 1;
			}
		}
		total_weather_types[i][0] = monthly_sunny_total;
		total_weather_types[i][1] = monthly_rainy_total;
		total_weather_types[i][2] = monthly_cloudy_total;

		total_sunny += monthly_sunny_total;
		total_rainy += monthly_rainy_total;
		total_cloudy += monthly_cloudy_total;
	}

	inFile.close();

	for (int i = 0; i < MONTHS; i++) {
		cout << month_names[i] << " totals.\n";
		for (int j = 0; j < WEATHER_TYPE_TOTAL; j++) {
			cout << "Total " << weather_type[j] << " days: " << total_weather_types[i][j] << endl;
		}
		cout << endl;
	}

	cout << "TOTALS FOR THE THREE MONTHS\n";
	cout << "Sunny Days: " << total_sunny << endl;
	cout << "Rainy Days: " << total_rainy << endl;
	cout << "Cloudy Days: " << total_cloudy << endl;

	return 0;
}