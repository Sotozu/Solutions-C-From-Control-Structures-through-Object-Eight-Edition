#pragma once
#include <string>
#include <iostream>

class ParkedCar14; //forward declaration

std::ostream& operator << (std::ostream&, const ParkedCar14&);
std::istream& operator >> (std::istream&, ParkedCar14&);

class ParkedCar14
{
private:
	std::string car_make,
		car_model,
		car_color,
		license_number;

	int minutes_parked;

public:

	//Constructor
	ParkedCar14() {
		car_make = "";
		car_model = "";
		car_color = "";
		license_number = "";
		minutes_parked = 0;
	}

	ParkedCar14(std::string make, std::string model, std::string color, std::string lnumber, int minutes) {
		car_make = make;
		car_model = model;
		car_color = color;

		license_number = lnumber;
		minutes_parked = minutes;

	}


	//Mutator
	void setCarMake(std::string make) {
		car_make = make;
	}
	void setCarModel(std::string model) {
		car_model = model;
	}
	void setCarColor(std::string color) {
		car_color = color;
	}
	void setLicenseNumber(std::string lnumber) {
		license_number = lnumber;
	}
	void setMinutesParked(int minutes) {
		minutes_parked = minutes;
	}


	//Accessors
	std::string getCarMake() {
		return car_make;
	}
	std::string getCarModel() {
		return car_model;

	}
	std::string getCarColor() {
		return car_color;

	}
	std::string getLicenseNumber() {
		return license_number;
	}
	int getMinutesParked() {
		return minutes_parked;
	}

	//Overloaded Functions
	friend std::ostream& operator << (std::ostream& strm, const ParkedCar14& obj) {
		strm << "Car Make: " << obj.car_make << std::endl;
		strm << "Car Model: " << obj.car_model << std::endl;
		strm << "Car Color: " << obj.car_color << std::endl;
		strm << "License Number: " << obj.license_number << std::endl;
		strm << "Minutes Parked: " << obj.minutes_parked << std::endl;

		return strm;
	}
	friend std::istream& operator >> (std::istream& strm, ParkedCar14& obj) {
		std::cout << "Car Make: "; strm >> obj.car_make;
		std::cout << "Car Model: "; strm >> obj.car_model;
		std::cout << "Car Color: "; strm >> obj.car_color;
		std::cout << "License Number: "; strm >> obj.license_number;

		return strm;
	}
};



