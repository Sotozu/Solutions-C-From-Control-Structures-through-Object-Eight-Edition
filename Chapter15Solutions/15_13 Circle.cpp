#include "13 Circle.h"

//Default Constructor
Circle13::Circle13() : BasicShape13() {
	centerX = 0;
	centerY = 0;
	radius = 0;
}

//Constructor
Circle13::Circle13(long int centX, long int centY, double r) : BasicShape13(PI*r*r) {
	centerX = centX;
	centerY = centY;
	radius = r;
}

//Accessors
long int Circle13::getCenterX() const {
	return centerX;
}
long int Circle13::getCenterY() const {
	return centerY;
}
double Circle13::getRadius() const {
	return radius;
}

//Mutators
void Circle13::setCenterX(long int centX) {
	centerX = centX;
}
void Circle13::setCenterY(long int centY) {
	centerY = centY;
}
void Circle13::setRadius(double r) {
	radius = r;
	calcArea();
}

//Member Functions

//Pure virtual function from "13 BasicShape.h"
void Circle13::calcArea() {
	area = (PI * radius * radius);
}