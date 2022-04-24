#include <iostream>
#include <iomanip>

#include "08 Circle Class.h"

using namespace std;

int main() {
	double r;

	cout << "Please enter the radius of a cirlce.\n";
	cout << "RADIUS (feet): "; cin >> r;

	Circle c(r);
	cout << showpoint << fixed << setprecision(2);
	cout << "CIRLCE INFO.\n" << endl;
	cout << "RADIUS: " << c.getRadius() << "ft" << endl;
	cout << "AREA: " << c.getArea() << "sqft" << endl;
	cout << "DIAMETER: " << c.getDiameter() << "ft" << endl;
	cout << "CIRCUMFERENCE: " << c.getCircumference() << "ft" << endl;
	return 0;
}
