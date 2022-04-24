#include<iostream>
#include <string>

#include "12 Inventory.h"
#include "12 Dynamic Stack Template.h"
int main() {
	bool cont = true;
	int user_input;
	Stack12<Inventory12> myInv;

	Inventory12 PartObject;

	do {
		Inventory12 myPart;
		std::cout << "Enter the parts serial Number: "; std::cin >> user_input;
		myPart.setSerialNumber(user_input);
		std::cout << "Enter the parts lot Number: "; std::cin >> user_input;
		myPart.setLotNumber(user_input);
		std::cout << std::endl;
		std::cout << "Manufacturing Date Information" << std::endl;
		std::cout << "Year: "; std::cin >> user_input;
		myPart.setManufYear(user_input);
		std::cout << "Month: "; std::cin >> user_input;
		myPart.setManufMonth(user_input);
		std::cout << "Day: "; std::cin >> user_input;
		myPart.setManufDay(user_input);

		std::cout << std::endl;
		std::cout << "--------------------------" << std::endl;
		std::cout << "CONTINUE ADDING PARTS?" << std::endl;
		std::cout << "(ENTER \'0\' to QUIT or any other input to CONTINUE)" << std::endl;
		std::cout << "ENTER OPTION: "; std::cin >> user_input;
		std::cout << std::endl;
		myInv.push(myPart);

		cont = user_input;

	} while (cont);

	
	do {
		std::cout << "Take a part from inventory?" << std::endl;
		std::cout << "(ENTER \'0\' to VIEW PARTS in inventory or any other input to TAKE THE TOP MOST PART;" << std::endl;
		std::cout << "ENTER OPTION: "; std::cin >> user_input;
		cont = user_input;
		if (cont) {
			myInv.pop(PartObject);

			std::cout << "--------------------------------------------" << std::endl;
			std::cout << "Serial Number: " << PartObject.returnSerialNumber() << std::endl;
			std::cout << "Lot Number: " << PartObject.returnLotNumber() << std::endl;
			std::cout << "Manufacturing Date: " << PartObject.returnManufDate() << std::endl;
			std::cout << "--------------------------------------------" << std::endl;

		}
	} while (cont);


	
	std::cout << std::endl;
	std::cout << "REMAINING PARTS" << std::endl;
	std::cout << std::endl;
	std::cout << "--------------------------------------------" << std::endl;

	while (!myInv.isEmpty()) {
		myInv.pop(PartObject);

		std::cout << "Serial Number: " << PartObject.returnSerialNumber() << std::endl;
		std::cout << "Lot Number: " << PartObject.returnLotNumber() << std::endl;
		std::cout << "Manufacturing Date: " << PartObject.returnManufDate() << std::endl;

		std::cout << "--------------------------------------------" << std::endl;
	}

	return 0;
}