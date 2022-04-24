#include <iostream>
using namespace std;

//22. Freezing and Boiling Points

int main() {
	cout << "A program that asks the user to enter a temperature and then shows all the substances that will freeze at that temperature and all that will boil at that temperature.\n" <<
	"For example, if the user enters -20 the program should report that water will freezeand oxygen will boil at that temperature.\n\n";

	int temp;
	string freeze_eth = "ethyl alchohol", freeze_mer = "mercury", freeze_oxy = "oxygen", freeze_wat = "water";
	string boil_eth ="ethyl alchohol", boil_mer = "mercury", boil_oxy = "oxygen", boil_wat = "water";

	cout << "Please enter a temperature in Farenheit(F): ";
	cin >> temp;

	while (!(temp)) { //Checks to see if inputed value is an integer.
		cin.clear(); //clears the error flag given that user has inputed a non integer value
		cin.ignore(numeric_limits<streamsize>::max(), '\n'); //this ignores the incorrect user input untill it reaches the end of the input or encounters a '\n'(new line) value.
		cout << "Invalid input.  Try again.\n";
		cout << "Please enter the temperature ";
		cin >> temp;
	}
	if (temp >= 676) { //if this is true then all substances will boil
		cout << "The following the substance(s) boil at " << temp << "(F): " << boil_eth << ", " << boil_mer << ", " << boil_oxy << ", " << boil_wat << endl;
	}
	else if (temp < 676 && temp >= 212) {
		cout << "The following the substance(s) boil at " << temp << "(F): " << boil_eth << ", " << boil_oxy << ", " << boil_wat << endl;
	}
	else if (temp < 212 && temp >= 172) {
		cout << "The following the substance(s) boil at " << temp << "(F): " << boil_oxy << ", " << boil_wat << endl;
	}
	else if (temp < 172 && temp >= -306) {
		cout << "The following the substance(s) boil at " << temp << "(F): " << boil_oxy << endl;
	}

	if (temp <= -362) { //if this is true then all substances will freeze
		cout << "\nThe following the substance(s) freeze at " << temp << "(F): " << freeze_eth << ", " << boil_mer << ", " << freeze_oxy << ", " << freeze_wat<< endl;
	}
	else if (temp > -362 && temp <= -173) {
		cout << "\nThe following the substance(s) freeze at " << temp << "(F): " << freeze_eth << ", " << freeze_mer << ", " << freeze_wat << endl;
	}
	else if (temp > -173 && temp <= -38) {
		cout << "\nThe following the substance(s) freeze at " << temp << "(F): " << freeze_mer << ", " << freeze_wat << endl;
	}
	else if (temp > -38 && temp <= 32) {
		cout << "\nThe following the substance(s) freeze at " << temp << "(F): " << freeze_wat << endl;
	}

	return 0;
}