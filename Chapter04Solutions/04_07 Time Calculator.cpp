#include <iostream>
using namespace std;

//7.Time Calculator

int main() {
	
	cout << "This program asks the user to enter a number of seconds and then gives interesting facts about it.\n";
	int seconds, minutes, hours, days;
	cout << "Please enter a number of seconds: ";
	cin >> seconds;

	if (seconds >= 60 && seconds < 3600) {
		minutes = seconds / 60;
		cout << "There is " << minutes << " total minutes given " << seconds << " seconds.\n\n";
	}
	else if (seconds >= 3600 && seconds < 86400) {
		hours = seconds / 3600;
		cout << "There is " << hours << " total hours given " << seconds << " seconds.\n\n";
	}
	else if (seconds >= 86400) {
		days = seconds / 86400;
		cout << "There is " << days << " total days given " << seconds << " seconds.\n\n";
	}
	else
		cout << "You typed less than a minutes worth of seconds.\nMaybe try something larger next time?\n";

	return 0;
}