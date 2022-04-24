
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
#include <algorithm>
#include <iterator>


int main() {
	const int MONTHS = 12;
	std::vector<double> rainfall_amounts(MONTHS);
	std::vector<double>::iterator iter;

	double max, min, total = 0;
	int max_month, min_month; //index for month_name[MONTHS]
	double average;

	std::string month_name[MONTHS] = { "January", "February", "March", "April", "May", "June", "July", "August",
	"September", "October", "November", "Decemeber" };

	std::cout << "Please enter the rainfall for the following months.\n";

	for (int i = 0; i < rainfall_amounts.size(); i++) {
		do {
			std::cout << month_name[i] << " rainfall (inches): ";
			std::cin >> rainfall_amounts[i];

			if (rainfall_amounts[i] < 0) {
				std::cout << "ERROR: Please enter a positive number.\n";
			}

		} while (rainfall_amounts[i] < 0);

		total += rainfall_amounts[i];
	}

	
	iter = std::min_element(rainfall_amounts.begin(), rainfall_amounts.end());
	int index = std::distance(rainfall_amounts.begin(), iter);


	std::cout << std::setprecision(2) << std::showpoint << std::fixed;
	std::cout << "Total Rainfall: " << total << std::endl;
	std::cout << "Month with the least rainfall: " << month_name[index] << " with " << *iter << " inches" << std::endl;

	iter = std::max_element(rainfall_amounts.begin(), rainfall_amounts.end());
	index = std::distance(rainfall_amounts.begin(), iter);

	std::cout << "Month with the most rainfall: " << month_name[index] << " with " << *iter << " inches" << std::endl;


	average = total / rainfall_amounts.size();

	std::cout << "Average rainfall: " << average << std::endl;

	return 0;

}