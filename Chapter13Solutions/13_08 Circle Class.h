#pragma once
#include <cmath>

class Circle
{
private:
	double radius;
	const double pi = 3.1459;

public:
	//Constructor
	Circle() {
		radius = 0;
	}
	Circle(double r) {
		radius = r;
	}

	//Accessor
	double getRadius() const {
		return radius;
	}
	double getArea() const {
		return pi * std::pow(radius, 2);
	}
	double getDiameter() const {
		return radius * 2;
	}
	double getCircumference() const {
		return 2 * pi * radius;
	}

	//Mutators
	void setRadius(double r) {
		radius = r;
	}



};

