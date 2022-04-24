#include <iostream>
using namespace std;

//3. Magic Dates

int main() {
	
	cout << "The program should then determine whether the month times the day is equal to the year.\n\n";

	int month, day, year, result1;

	cout << "Pleas enter the dates in numeric form when prompted xx/xx/xx (Please press \"Enter\" to continue):";
	cin.get();

	cout << "Please enter a month (1-12): ";
	cin >> month;

	cout << "Please enter a day (1-31): ";
	cin >> day;

	cout << "Please enter a year (ex. 96): ";
	cin >> year;

	result1 = month * day;

	if (result1 == year)
		cout << "\nThe date IS magic!\n";
	else
		cout << "\nThe date is NOT magic...\n";
	

	return 0;
}