#pragma once
class Odometer15
{
private:
	double mileage;
	static const double max_mileage;
	static const int mpg;
public:


	//Constructor
	Odometer15() {
		mileage = 0;
	}
	Odometer15(double m) {
		mileage = m;
	}

	//Accessor
	double getMileage() {
		return mileage;
	}
	//static member function
	static double getMax() {
		return max_mileage;
	}
	static int getMpg() {
		return mpg;
	}


	//Mutator
	void setMileage(double m) {
		mileage = m;
	}


	//Operator Overloads
	Odometer15 operator++() {
		++mileage;
		return *this;
	}
	Odometer15 operator++(int) {
		Odometer15 temp(mileage);
		mileage++;
		return temp;
	}

	Odometer15 operator--() {
		--mileage;
		return *this;
	}
	Odometer15 operator--(int) {
		Odometer15 temp(mileage);
		mileage--;
		return temp;
	}

};

const double Odometer15::max_mileage = 999999;
const int Odometer15::mpg = 24;
