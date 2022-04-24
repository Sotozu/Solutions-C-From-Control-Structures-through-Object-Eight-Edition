#include <iostream>
#include "14 Police Officer.h"

int main() {

	int m_minutes, p_minutes;
	PoliceOfficer14 officer1;

	std::cout << "Please Enter The Officers Information.\n";
	std::cout << std::endl;
	std::cin >> officer1;
	std::cout << std::endl;
	ParkingMeter14 meter;
	std::cout << "Please Enter The Parking Meter Information.\n";
	std::cout << std::endl;
	std::cout << "Minutes Purchased: "; std::cin >> m_minutes;
	meter.setMinutes(m_minutes);
	std::cout << std::endl;

	ParkedCar14 car;
	std::cout << "Please Enter The Minutes The Car Has Been Parked.\n";
	std::cout << std::endl;
	std::cout << "Minutes Parked: "; std::cin >> p_minutes;
	car.setMinutesParked(p_minutes);
	std::cout << std::endl;

	

	std::cout << std::endl;

	if (!officer1.isTicketRequired(car, meter)) {
		std::cout << "Ticket is not required!\n";
		std::cout << "Ending Program" << std::endl;
		exit(0);
	}

	std::cout << "Ticket is required!\n";
	std::cout << "Record Vehicle Information.\n";
	std::cout << std::endl;
	std::cin >> car;
	std::cout << std::endl;
	officer1.issueParkingTicket(car, p_minutes, m_minutes);
	officer1.getTicketInformation();



	return 0;
}

