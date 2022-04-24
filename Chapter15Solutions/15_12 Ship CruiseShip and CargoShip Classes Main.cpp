#include <iostream>
#include "12 Ship.h"
#include "12 CargoShip.h"
#include "12 CruiseShip.h"

int main() {

	const int size = 3;

	//Array of Ship12 pointers
	Ship12* Ship_Fleet[size] = {
		new Ship12("The Alexander", 1996),
		new CruiseShip12("The William", 1996, 777),
		new CargoShip12("The Soto", 1996, 2000)
	};

	for (int i = 0; i < size; i++) {
		Ship_Fleet[i]->print();
		std::cout << std::endl;
	}


	return 0;
}