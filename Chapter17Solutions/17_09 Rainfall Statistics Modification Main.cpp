#include <iostream>
#include <string>
#include <iomanip>
#include "09 TemplateList.h"
using namespace std;


int main() {
	int number_of_months;
	int num_inches;

	LinkedList09<double> myList;

	std::cout << "Enter the number of months to record rainfall." << std::endl;
	std::cout << "NUM OF MONTHS: "; std::cin >> number_of_months;
	std::cout << std::endl;

	for (int i = 0; i < number_of_months; i++) {
		do {
			std::cout << "MONTH " << i + 1 << " RAINFALL INCHES:"; std::cin >> num_inches;

			if (num_inches < 0) {
				cout << "ERROR: Please enter a positive number.\n";
			}


		} while (num_inches < 0);

		myList.appendNode(num_inches);
	}	

	//average = total / MONTHS;
	cout << setprecision(2) << showpoint << fixed;
	cout << endl;
	cout << "Total Rainfall: " << myList.total() << " inches" << endl;
	cout << "Month with the least rainfall: " << myList.returnSmallest() << " inches" << endl;
	cout << "Month with the most rainfall: " << myList.returnLargest() <<" inches" << endl;
	cout << "Average rainfall: " << myList.average() << " inches" << endl;

	return 0;

}