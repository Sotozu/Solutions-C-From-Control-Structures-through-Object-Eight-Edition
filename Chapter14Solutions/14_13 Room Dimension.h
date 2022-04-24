#pragma once
#include "13 FeetInches Class Copy Constructor and Multiply Function.h"
#include <iostream>

class RoomDimension13;

std::ostream& operator << (std::ostream&, const RoomDimension13&);
std::istream& operator >> (std::istream&, RoomDimension13&);


class RoomDimension13
{
private:
	FeetInches13 length, width;

public:
	FeetInches13 getArea() {
		FeetInches13 temp;
		temp = length * width;
		return temp;
	}


	//Overloaded functions

	friend std::ostream& operator << (std::ostream& strm, const RoomDimension13& obj) {


		FeetInches13 temp1, temp2;


		temp1 = obj.length;
		temp2 = obj.width;

		temp1 = temp1 * temp2;
		std::cout << temp1.getFeet() << "ft. " << temp1.getInches() << "in. Squared" << std::endl;
		return strm;
	}

	friend std::istream& operator >> (std::istream& strm, RoomDimension13& obj) {
		std::cout << "PLEASE ENTER LENGTH INFORMATION" << std::endl;
		int feet, inch;
		std::cout << "Length Feet: ";
		strm >> feet;

		obj.length.setFeet(feet);

		std::cout << "Length Inches: ";
		strm >> inch;
		obj.length.setInches(inch);

		std::cout << std::endl;
		std::cout << "PLEASE ENTER WIDTH INFORMATION" << std::endl;

		std::cout << "Width Feet: ";
		strm >> feet;

		obj.width.setFeet(feet);

		std::cout << "Width Inches: ";
		strm >> inch;
		obj.width.setInches(inch);
		return strm;
	}
};



