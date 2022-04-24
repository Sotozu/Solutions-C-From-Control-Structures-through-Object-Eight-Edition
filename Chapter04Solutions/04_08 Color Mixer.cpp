#include <iostream>
#include <string>
using namespace std;

//8. Color Mixer

int main() {

	cout << "This program will ask the user to mix two of three primary colors to determine the mixed color.\n\n";

	int codeColor = 0, width = 32;

	string color1, color2, combination;
	cout << "There are three primary colors:\n";
	cout << "red\n";
	cout << "blue\n";
	cout << "yellow\n";

	cout << "\nPlease type the first primary color: ";
	getline(cin, color1);

	cout << "\nPlease type the second primary color: ";
	getline(cin, color2);

	if (color1 == "red" && color2 == "blue") {
		codeColor = 1;
		combination = "purple";
	}
	else if(color1 == "red" && color2 == "yellow") {
		codeColor = 2;
		combination = "orange";
	}
	else if (color1 == "blue" && color2 == "yellow") {
		codeColor = 3;
		combination = "green";
	}

	switch (codeColor) {
	case (1):
		cout << "\nWhen you mix " << color1 << " and " << color2 << ", you get " << combination << ".\n";
		break;
	case (2):
		cout << "\nWhen you mix " << color1 << " and " << color2 << ", you get " << combination << ".\n";
		break;
	case (3):
		cout << "\nWhen you mix " << color1 << " and " << color2 << ", you get " << combination << ".\n";
		break;
	default:
		cout << "\nYou did not type the name of the primary colors correctly. Please try again.\n";

	}

	return 0;
}