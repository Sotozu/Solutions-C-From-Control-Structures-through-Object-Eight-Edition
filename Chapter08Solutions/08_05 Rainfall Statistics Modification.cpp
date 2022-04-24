#include <string>
#include <iostream>
using namespace std;

void selectionSort(double[], string[], int);
int main() {
	const int MONTHS = 12;
	double rainfall_amounts[MONTHS];
	double max, min, total = 0;
	int max_month, min_month; //index for month_name[MONTHS]
	double average;
	string month_name[MONTHS] = { "January", "February", "March", "April", "May", "June", "July", "August",
	"September", "October", "November", "Decemeber" };
	cout << "Please enter the rainfall for the following months.\n";
	for (int i = 0; i < MONTHS; i++) {
		do {
			cout << month_name[i] << " rainfall (inches): ";
			cin >> rainfall_amounts[i];
			if (rainfall_amounts[i] < 0) {
				cout << "ERROR: Please enter a positive number.\n";
			}
		} while (rainfall_amounts[i] < 0);
		total += rainfall_amounts[i];
	}
	max = rainfall_amounts[0];
	min = rainfall_amounts[0];
	max_month = 0;
	min_month = 0;
	for (int i = 1; i < MONTHS; i++) {
		if (max < rainfall_amounts[i]) {
			max = rainfall_amounts[i];
			max_month = i;
		}
		if (min > rainfall_amounts[i]) {
			min = rainfall_amounts[i];
			min_month = i;
		}
	}

	selectionSort(rainfall_amounts, month_name, MONTHS);
	cout << "\nRainfall from lowest to highest.\n";

	for (int i = 0; i < MONTHS; i++) {
		cout << month_name[i] << ": " << rainfall_amounts[i] << endl;
	}

	return 0;
}

void selectionSort(double rainfall_amounts[], string month_name[], int SIZE) {
	int startScan, //For every iteration of the seatch this variable will be set to a starting position
		minIndex, // The min index set at the beginning for each search 
		minValue; // The min value ser at the beginnning for each search

	string minMonth;

	for (startScan = 0; startScan < (SIZE - 1); startScan++)
	{
		minIndex = startScan;
		minValue = rainfall_amounts[startScan];
		for (int index = startScan + 1; index < SIZE; index++)
		{
			if (rainfall_amounts[index] < minValue)
			{
				minValue = rainfall_amounts[index]; //new lowest value is found AND set to minValue
				minMonth = month_name[index]; //month name with the lowest value found AND set to minMonth
				minIndex = index; // location of lowest value is found and set to minIndex
			}
		}

		//The smallest value and it's index have at this point been found within the range of the search.

		rainfall_amounts[minIndex] = rainfall_amounts[startScan]; //places the value of the first position in the index search
														  //to the position of where the smalles value was found.

		rainfall_amounts[startScan] = minValue;				  //places the min value found in the range of values searched 
														  //into the first position in the search.

		month_name[minIndex] = month_name[startScan];

		month_name[startScan] = minMonth;

	}
	//The loop will now repeat BUT at a starting search position of + 1 from the previous loop.
	//At the end of that loop the lowest number will be placed at the begging position of that search.
}
