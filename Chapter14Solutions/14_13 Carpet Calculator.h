#pragma once
#include "13 FeetInches Class Copy Constructor and Multiply Function.h"
#include "13 Room Dimension.h"
#include <iostream>

class RoomCarpet13;

std::ostream& operator << (std::ostream&, const RoomCarpet13&);
std::istream& operator >> (std::istream&, RoomCarpet13&);

class RoomCarpet13
{
private:

	RoomDimension13 r1;
	FeetInches13 area;
	const double carpet_cost = 2.20;

public:

	double getTotalCost() {
		double cost = 0;
		area = r1.getArea();
		cost = (area.getFeet() * carpet_cost) + ((area.getInches() * carpet_cost) / 12);
		return cost;
	}

	friend std::ostream& operator << (std::ostream& strm, const RoomCarpet13& obj) {
		strm << obj.r1;
		return strm;
	}

	friend std::istream& operator >> (std::istream& strm, RoomCarpet13& obj) {

		strm >> obj.r1;

		return strm;
	}
};

