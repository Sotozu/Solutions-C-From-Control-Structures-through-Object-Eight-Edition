#include <iostream>
using namespace std;

//20.Pizza Pi

int main() {

	
	const float PI = 3.14159;
	const float sliceSize = 14.125;
	float diameter, radius, pizzaArea;
	int numberOfSlices;

	cout << "This program determines the amount of slices you can get given the diameter of the pizza.\n\n";
	cout << "Please enter the diameter of the pizza: ";
	cin >> diameter;

	radius = diameter / 2;

	pizzaArea = PI*pow(radius, 2);

	numberOfSlices = pizzaArea / sliceSize;

	cout << "\nThe amount of whole pizza slices you can get is: " << numberOfSlices << endl;
	
	cout << endl << "Alex" << endl;

 	return 0;
}