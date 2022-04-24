#include <iostream>
#include "13 Circle.h"
#include "13 Rectangle.h"

int main() {

	Circle13 obj;
	std::cout << "CIRCLE OBJECT 0" << std::endl;
	std::cout << "AREA OF CIRCLE: "  <<obj.getArea() << std::endl;
	obj.setRadius(4);
	std::cout << "AREA OF CIRCLE: " << obj.getArea() << std::endl;


	Circle13 obj1(1, 1, 5);
	std::cout << std::endl;
	std::cout << "CIRCLE OBJECT 1" << std::endl;
	std::cout << "AREA OF CIRCLE: " << obj1.getArea() << std::endl;
	std::cout << std::endl;
	
	Rectangle13 obj2;
	std::cout << "RECTANGLE OBJECT 0" << std::endl;
	std::cout << "AREA OF RECTANGLE: " << obj2.getArea() << std::endl;
	obj2.setLength(20);
	obj2.setWidth(100);
	std::cout << "AREA OF RECTANGLE: " << obj2.getArea() << std::endl;


	Rectangle13 obj3(10, 5);
	std::cout << std::endl;
	std::cout << "RECTANGLE OBJECT 1" << std::endl;
	std::cout << "AREA OF RECTANGLE: " << obj3.getArea() << std::endl;

	return 0;
}
