#include "13 Rectangle.h"

//Default Constructor
Rectangle13::Rectangle13() : BasicShape13() {
	width = 0;
	length = 0;
}

//Constructor
Rectangle13::Rectangle13(long int w, long int l) : BasicShape13(static_cast<double>(w)*l) {
	width = w;
	length = l;
}

//Accessors;
long int Rectangle13::getWidth() {
	return width;
}

long int Rectangle13::getLength() {
	return length;
}

//Mutators
void Rectangle13::setWidth(long int w) {
	width = w;
	calcArea();
}
void Rectangle13::setLength(long int l) {
	length = l;
	calcArea();
}

//Member Functions
//Pure virtual function inherated from " 13 BasicShape.h"
void Rectangle13::calcArea() {
	area = static_cast<double>(length) * width;
}