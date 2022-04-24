#include <iostream>

#include "15 Fuel Gauge.h"
#include "15 Odometer.h"



int main() {
	
	double fuel, mileage;
	FuelGauge15 car_fg;
	Odometer15 car_odo;
	bool fill_up = false;
	char choice;
	do {


		std::cout << "Please enter (x) gallons of fuel into the car.\n";
		do {
			std::cout << "CAR FUEL: "; std::cin >> fuel;
			if (fuel > FuelGauge15::getMax()) {
				std::cout << "ERROR: Fuel tank can only hold " << FuelGauge15::getMax() << " gallons.\n";
			}
			else if (fuel < 1) {
				std::cout << "ERROR: Please enter atleast one gallon of gas.\n";
			}
		} while (fuel > FuelGauge15::getMax() || fuel < 1);

		std::cout << std::endl;
		std::cout << "Filling Tank Up..." << std::endl;

		for (int i = 0; i < fuel; i++) {
			std::cout << "Gallon: " << i + 1 << std::endl;
			car_fg++;
		}


		std::cout << std::endl;
		std::cout << "Miles Traveled..." << std::endl;
		for (int i = 0; i < (fuel * Odometer15::getMpg()); i++) {
			car_odo++;
			if (car_odo.getMileage() > car_odo.getMax()) {
				car_odo.setMileage(0);
			}
			std::cout << "Mile: " << car_odo.getMileage() << std::endl;
			if (i % 24 == 0) {
				car_fg--;
			}
		}
		std::cout << "Current Gallons: " << car_fg.getGallons() << std::endl;
		std::cout << "Current Mileage: " << car_odo.getMileage() << std::endl;


		do {
			std::cout << "Fuel up and continue?\n";
			std::cout << "Enter 'Y' for YES and 'N' for NO.\n";
			std::cout << "(Y/N): "; std::cin >> choice;
			if (toupper(choice) != 'Y' && toupper(choice) != 'N') {
				std::cout << "ERROR: Please enter a valid choice.\n";
			}
		} while (toupper(choice) != 'Y' && toupper(choice) != 'N');

		if (toupper(choice) == 'Y') {
			fill_up = true;
		}
		else if (toupper(choice) == 'N'){
			fill_up = false;
		}
		std::cout << std::endl;
	
	} while (fill_up == true);


	return 0;

}