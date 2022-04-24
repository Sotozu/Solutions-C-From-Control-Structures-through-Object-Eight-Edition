#include <iostream>
#include <iomanip>
using namespace std;

//21. The Speed of Sound in Gases

int main() {


	double option, distance, time, density, carbon_dioxide = 258.0, air = 331.5, helium = 972.0, hydrogen = 1270.0;
	bool check;
	string medium;


	cout << "This program will ask you to choose one of the following four items.\n" <<
	"It will then request the amount of time for sound to travel in that medium and\nit will give you the distance from where the sound origniated.\n";

	cout << setw(11) << left << "Option(1):" << setw(5) << left << "Carobon Dioxide" << endl;
	cout << setw(11) << left << "Option(2):" << setw(5) << left << "Air" << endl;
	cout << setw(11) << left << "Option(3):" << setw(5) << left << "Helium" << endl;
	cout << setw(11) << left << "Option(4):" << setw(5) << left << "Hydrogen" << endl;

	cout << "\nPlease enter an option number: ";
	cin >> option;

	while (!(option) || option < 1 || option > 4) { //Checks to see if inputed value is an integer. Also checks if the value entered is between 1 and 3.
		cin.clear(); //clears the error flag given that user has inputed a non integer value
		cin.ignore(numeric_limits<streamsize>::max(), '\n'); //this ignores the incorrect user untill it reaches the end of the input or encounters a '\n'(new line) value.
		cout << "Invalid input. The options are '1', '2', '3' or '4'. Try again.";
		cout << "\nPlease enter an option number: ";
		cin >> option;
	}

	if (option == 1) {
		medium = "carbon dioxide";
		density = carbon_dioxide;
	}
	else if (option == 2) {
		medium = "air";
		density = air;
	}
	else if (option == 3) {
		medium = "helium";
		density = helium;
	}
	else {
		medium = "hydrogen";
		density = hydrogen;
	}

	cout << "Please enter the amount of time it took the sound to reach in seconds(s): ";
	cin >> time;
	while (!(time) || time <= 0 || time > 30) { //Checks to see if inputed value is an integer. Also checks if the value entered is less than 0.
		cin.clear(); //clears the error flag given that user has inputed a non integer value
		cin.ignore(numeric_limits<streamsize>::max(), '\n'); //this ignores the incorrect user untill it reaches the end of the input or encounters a '\n'(new line) value.
		cout << "Invalid input. The time must be greater than 0 and less than 30.  Try again.\n";
		cout << "Please enter the amount of time it took the sound to reach in seconds(s): ";
		cin >> time;
	}

	distance = time*density;

	cout << fixed << setprecision(4);
	cout << "The sound traveled " << distance << "(m) in " << time << " second(s).";
	
	return 0;
}