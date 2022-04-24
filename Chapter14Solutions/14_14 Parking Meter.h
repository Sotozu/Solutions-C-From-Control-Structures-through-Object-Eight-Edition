#pragma once
#include <iostream>

class ParkingMeter14;

std::ostream& operator << (std::ostream&, const ParkingMeter14&);
std::istream& operator >> (std::istream&, ParkingMeter14&);


class ParkingMeter14
{
private:
	int purchased_minutes;
public:
	//Constructor
	ParkingMeter14() {
		purchased_minutes = 0;
	}

	ParkingMeter14(int m) {
		purchased_minutes = m;
	}

	//Accessor
	int getMinutes() {
		return purchased_minutes;
	}

	//Mutator
	void setMinutes(int m) {
		purchased_minutes = m;
	}

	//Overloaded Function
	friend std::ostream& operator << (std::ostream& strm, const ParkingMeter14& obj) {
		strm << "Purchased Minutes: " << obj.purchased_minutes << std::endl;
		return strm;
	}
	friend std::istream& operator >> (std::istream& strm, ParkingMeter14& obj) {
		std::cout << "Purchased Minutes: "; strm >> obj.purchased_minutes;
		return strm;
	}
};

