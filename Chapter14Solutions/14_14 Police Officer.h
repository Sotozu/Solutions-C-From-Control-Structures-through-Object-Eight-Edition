#pragma once
#include <string>
#include "14 Parked Car.h"
#include "14 Parking Meter.h"
#include "14 Parking Ticket.h"
#include <iostream>

class PoliceOfficer14; //forward declaration

std::ostream& operator << (std::ostream&, const PoliceOfficer14&);
std::istream& operator >> (std::istream&, PoliceOfficer14&);

class PoliceOfficer14
{
private:
	std::string officer_name;
	int officer_number;
	ParkingTicket14 ticket;
public:
	//Constructor
	PoliceOfficer14() {
		officer_name = "";
		officer_number = 0;
	}

	//Accessor
	std::string getName() {
		return officer_name;
	}
	int getNumber() {
		return officer_number;
	}

	//Mutator
	void setName(std::string n) {
		officer_name = n;
	}
	void setNumber(int id) {
		officer_number = id;
	}



	//Overload functions
	friend std::ostream& operator << (std::ostream& strm, const PoliceOfficer14& obj) {
		strm << "Officer Name: " << obj.officer_name << std::endl;
		strm << "Officer Identification Number: " << obj.officer_number << std::endl;
		return strm;
	}
	friend std::istream& operator >> (std::istream& strm, PoliceOfficer14& obj) {
		std::cout << "Officer Name: "; getline(strm, obj.officer_name);
		std::cout << "Officer Identification Number: "; strm >> obj.officer_number;
		return strm;
	}

	//Other Functions
	bool isTicketRequired(ParkedCar14& car, ParkingMeter14& meter) {
		bool status;
		if (car.getMinutesParked() > meter.getMinutes()) {
			status = true;
		}
		else {
			status = false;
		}
		return status;
	}

	void issueParkingTicket(ParkedCar14& obj, int p_minutes, int m_minutes) {
		ticket.setCarInfo(obj);
		ticket.calculateTotal(p_minutes, m_minutes);
		ticket.setOfficerInfo(officer_name, officer_number);
	}

	void getTicketInformation() {
		std::cout << ticket;
	}

};

