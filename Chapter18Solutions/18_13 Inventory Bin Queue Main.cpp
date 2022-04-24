#include<iostream>
#include <string>

#include "13 Inventory.h"
#include "13 Dynamic Queue Template.h"
#include "13 Dynamic Stack Template.h"

int main() {
	bool cont = true;
	int user_input;
	DynamicQueueTemplate13<Inventory13> myQInv;
	Stack13<Inventory13> mySInv;


	do {
		Inventory13 myPart;
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
		myQInv.enqueue(myPart);
		mySInv.push(myPart);

		cont = user_input;

	} while (cont);

	std::cout << "-----QUEUE AND STACK COMPARISON-----" << std::endl;
	std::cout << "ORDER OF WHICH THE PARTS ARE REMOVED" << std::endl;


	std::cout << std::endl;
	Inventory13 CompareQueue;
	Inventory13 CompareStack;

	std::cout << "---QUEUE---";
	std::cout.width(30);
	std::cout << std::right << "---STACK---" << std::endl;

	int counter = 1;

	while (!myQInv.isEmpty()) {

		myQInv.dequeue(CompareQueue);
		mySInv.pop(CompareStack);
		std::cout << std::endl;
		std::cout << "NUMBER REMOVED: " << counter << std::endl;
		std::cout << std::endl;
		//QUEUE
		std::cout.width(18);
		std::cout << std::left << "Serial Number" << ": ";
		
		std::cout.width(10);
		std::cout << std::left << CompareQueue.returnSerialNumber();

		//STACK
		std::cout.width(18);
		std::cout << std::left << "Serial Number" << ": ";

		std::cout.width(10);
		std::cout << std::left << CompareStack.returnSerialNumber() << std::endl;
		/*-----------------------------------------------------------------*/

		//QUEUE
		std::cout.width(18);
		std::cout << std::left << "Lot Number" << ": ";
		
		std::cout.width(10);
		std::cout << std::left << CompareQueue.returnLotNumber();

		//STACK
		std::cout.width(18);
		std::cout << std::left << "Lot Number" << ": ";

		std::cout.width(10);
		std::cout << std::left << CompareStack.returnLotNumber() << std::endl;
		
		/*-----------------------------------------------------------------*/

		//QUEUE
		std::cout.width(18);
		std::cout << std::left << "Manufacturing Date" << ": ";
		
		std::cout.width(10);
		std::cout << std::left << CompareQueue.returnManufDate();

		//STACK
		std::cout.width(18);
		std::cout << std::left << "Manufacturing Date" << ": ";

		std::cout.width(10);
		std::cout << std::left << CompareStack.returnManufDate() << std::endl;


		/*-----------------------------------------------------------------*/

		std::cout << "------------------------------------------------------------" << std::endl;
		counter++;
	}

	return 0;
}