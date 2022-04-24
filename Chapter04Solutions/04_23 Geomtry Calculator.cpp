#include <iostream>
using namespace std;

//23. Geomtry Calculator

int main() {

	int choice, radius, length, width, height;

	float pi = 3.14159;


	cout << "Geometry Calculator\n";
	cout << "1. Calculate the area of a circle\n";
	cout << "2. Calculate the area of a rectangle\n";
	cout << "3. Calculate the area of a triangle\n\n";

	cout << "Please enter a choice: ";

	while (!(cin >> choice) || choice < 1 || choice > 3) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "You have entered wrong input\n" << endl;
		cout << "Please enter a choice: ";
	}


	switch (choice) {
	case (1):
		cout << "Please enter the radius of the cirlce in inches(in): ";
		cin >> radius;
		cout << "The area of the circle is: " << pi * (radius * 2) << " inches." << endl;
			break;
	case (2):
		cout << "Please enter the length of the rectangle in inches(in): ";
		cin >> length;
		cout << "Please enter the width of the rectangle in inches(in): ";
		cin >> width;
		cout << "The area of the rectangle is: " << width * length << " inches." << endl;
		break;
	case (3):
		cout << "Please enter the length of the triangle in inches(in): ";
		cin >> length;
		cout << "Please enter the height in inches(in): ";
		cin >> height;
		cout << "The area of the triangle is: " << (height * length)/2 << " inches." << endl;
		break;
	default:
		cout << "This should never output";
	}

	return 0;
}