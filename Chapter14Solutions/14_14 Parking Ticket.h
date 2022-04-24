#pragma once
#include "14 Parked Car.h"
#include <iomanip>

class ParkingTicket14;

std::ostream& operator << (std::ostream&, const ParkingTicket14&);
//std::istream& operator >> (std::istream&, ParkingTicket14&);

class ParkingTicket14
{
private:
	ParkedCar14 car;
	std::string officer_name;
	int officer_number;
	double total_amount, hours_parked;
	static const double fhf_amount, hr_amount; //first hour fine amount & hourly rate amount

public:
	//Constructor
	ParkingTicket14() {
		hours_parked = 0;
		total_amount = 0;
		officer_name = "";
		officer_number = 0;
	}

	//Mutators
	void setCarInfo(ParkedCar14& car_info) {
		car = car_info;
	}

	void setOfficerInfo(std::string o_name, int o_id) {
		officer_name = o_name;
		officer_number = o_id;
	}

	//Overloaded Functions
	friend std::ostream& operator << (std::ostream& strm, const ParkingTicket14& obj) {
		strm << "-------------------" << std::endl;
		strm << "TICKET ISSUED" << std::endl;
		strm << "-------------------" << std::endl;
		strm << obj.car;
		strm << std::setprecision(2) << std::showpoint << std::fixed;
		strm << "Hours Parked: " << obj.hours_parked << std::endl;
		strm << "Total Fine: $" << obj.total_amount << std::endl;
		strm << "-------------------" << std::endl;
		strm << "Officer Information" << std::endl;
		strm << "-------------------" << std::endl;
		strm << "Officer Name: " << obj.officer_name << std::endl;
		strm << "Officer Identification Number: " << obj.officer_number << std::endl;
		return strm;
	}

	//friend std::istream& operator >> (std::istream&, ParkingTicket14&);

	//other function
	void calculateTotal(int p_minutes, int m_minutes) {
		int minutes_over = abs(m_minutes - p_minutes);
		hours_parked = minutes_over / 60.0;
		if (hours_parked > 1) {
			total_amount = fhf_amount + (hours_parked - 1) * hr_amount;
		}
		else {
			total_amount = fhf_amount;
		}
	}

};


const double ParkingTicket14::fhf_amount = 25;
const double ParkingTicket14::hr_amount = 10;
