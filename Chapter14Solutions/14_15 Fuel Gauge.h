#pragma once
class FuelGauge15
{
private:
	float gallons;
	static const float maxGallons;

public:
	//Constructor
	FuelGauge15() {
		gallons = 0;
	}
	FuelGauge15(float g) {
		gallons = g;
	}

	//Accessor
	float getGallons() {
		return gallons;
	}

	static float getMax() {
		return maxGallons;
	}

	//Mutators
	void setGallons(float g) {
		gallons = g;
	}

	//Operator Overloads
	FuelGauge15 operator++() {
		++gallons;
		return *this;
	}
	FuelGauge15 operator++(int) {
		FuelGauge15 temp(gallons);
		gallons++;
		return temp;
	}

	FuelGauge15 operator--() {
		--gallons;
		return *this;
	}
	FuelGauge15 operator--(int) {
		FuelGauge15 temp(gallons);
		gallons--;
		return temp;
	}

};

//definig static member variables
const float FuelGauge15::maxGallons = 15;
