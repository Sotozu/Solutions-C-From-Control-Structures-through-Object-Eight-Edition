#pragma once
#include "12 FeetInches Class Copy Constructor and Multiply Function.h"
#include "iostream"

class LandTract;
std::ostream& operator << (std::ostream&, const LandTract&);
std::istream& operator >> (std::istream&, LandTract&);
class LandTract
{
private:
	FeetInches12 obj1, obj2, area;

public:
	//Constructor
	LandTract() {

	}

	//Function


	//Overloaded >> & << Operator

	friend std::ostream& operator << (std::ostream& strm, const LandTract& obj) {


		//temp.setFeet(obj.obj1.getFeet() * obj.obj2.getFeet());
		//temp.setInches(obj.obj1.getInches() * obj.obj2.getInches());
		strm << "Tract of Land Square Area: " << obj.area.getFeet() << "Ft. " << obj.area.getInches() << "In. squared." << std::endl;

		return strm;
	}

	friend std::istream& operator >> (std::istream& strm, LandTract& obj) {
		int feet, inches;
		std::cout << "Length Info" << std::endl;
		std::cout << "Feet: "; strm >> feet;
		obj.obj1.setFeet(feet);
		std::cout << "Inches: "; strm >> inches;
		obj.obj1.setInches(inches);
		std::cout << std::endl;
		std::cout << "Width Info" << std::endl;
		std::cout << "Feet: "; strm >> feet;
		obj.obj2.setFeet(feet);
		std::cout << "Inches: "; strm >> inches;
		obj.obj2.setInches(inches);



		obj.area = obj.obj1 * obj.obj2;
		return strm;
	}

	//Overload == Operator

	bool operator == (const LandTract& right) {
		bool state;
		if (area == right.area) {
			state = true;
		}
		else {
			state = false;

		}
		return state;
	}
};

