#include <iostream>
#include <iomanip>
using namespace std;

//22. Angle Calculator

int main() {

	double angle;
	cout << "This program will display the sine, cosine, and tangent of an angle.\n\n";
	cout << "Please enter an angle in radians: ";
	cin >> angle;
	cout << setprecision(4) << fixed << endl;
	cout << "The cosine of the angle is: " << cos(angle) << endl;
	cout << "The sine of the angle is: " << sin(angle) << endl;
	cout << "The tangent of the angle is: " << tan(angle) << endl;
	cout << endl << "Alex" << endl;
 	return 0;
}