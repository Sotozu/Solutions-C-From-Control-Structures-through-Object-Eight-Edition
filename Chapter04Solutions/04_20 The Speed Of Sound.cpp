#include <iostream>
#include <iomanip>
using namespace std;

//20.The Speed Of Sound

int main() {

	double option, distance, time, speed, air = 1100, water = 4900, steel = 16400;
	bool check;
	string medium;

	cout << "This program will ask you to choose one of the following three items.\n" <<
		"It will then request a distance for sound to travel in that medium and\nit will give you the time it takes for sound to travel in that medium.\n";

	cout << setw(11) << left << "Option(1):" << setw(5) << left << "Air" << endl;
	cout << setw(11) << left << "Option(2):" << setw(5) << left << "Water" << endl;
	cout << setw(11) << left << "Option(3):" << setw(5) << left << "Steel" << endl;

	cout << "\nPlease enter an option number: ";
	cin >> option;

	while (!(option) || option < 1 || option > 3) { //Checks to see if inputed value is an integer. Also checks if the value entered is between 1 and 3.
		cin.clear(); //clears the error flag given that user has inputed a non integer value
		cin.ignore(numeric_limits<streamsize>::max(), '\n'); //this ignores the incorrect user untill it reaches the end of the input or encounters a '\n'(new line) value.
		cout << "Invalid input. The options are '1', '2' or '3'. Try again.";
		cout << "\nPlease enter an option number: ";
		cin >> option;
	}

	if (option == 1) {
		medium = "air";
		speed = air;
	}
	else if (option == 2) {
		medium = "water";
		speed = water;
	}
	else {
		medium = "steel";
		speed = steel;
	}

	cout << "Please enter the distance the sound will travel in this medium in feet(ft): ";
	cin >> distance;
	while (!(distance) || distance <= 0) { //Checks to see if inputed value is an integer. Also checks if the value entered is less than 0.
		cin.clear(); //clears the error flag given that user has inputed a non integer value
		cin.ignore(numeric_limits<streamsize>::max(), '\n'); //this ignores the incorrect user untill it reaches the end of the input or encounters a '\n'(new line) value.
		cout << "Invalid input. The distance must be greater than 0.  Try again.";
		cout << "\nPlease enter the distance the sound will travel in this medium in feet(ft): ";
		cin >> distance;
	}

	time = distance / speed;

	cout << fixed << setprecision(4);
	cout << "The sound will travel across " << medium << " in " << time << " second(s).";
	return 0;
}