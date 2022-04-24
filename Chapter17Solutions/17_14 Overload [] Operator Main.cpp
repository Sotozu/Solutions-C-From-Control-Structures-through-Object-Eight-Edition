#include <iostream>
#include "14 TemplateList.h"
int main() {
	LinkedList14<double> myList;
	int sub;
	bool validRange = false;
	for (int i = 0; i < 10; i++) {
		myList.appendNode(i*2.2);
	}

	std::cout << "LIST SIZE: " << myList.returnListSize() << std::endl;

	myList.deleteNode(3);

	std::cout << "LIST SIZE: " << myList.returnListSize() << std::endl;
	std::cout << std::endl;

	std::cout << "_______________________________________________" << std::endl;
	std::cout << "PLEASE ENTER A SUBSCRIPT TO VIEW THE LINKS DATA" << std::endl;
	std::cout << "LINK SIZE IS: " << myList.returnListSize() << std::endl;
	do {
		try {
			std::cout << "ENTER SUBSCRIPT: "; std::cin >> sub;
			std::cout << "Data value found at subscript [" << sub << "]: " << myList[sub];

			validRange = true;
		}
		catch (LinkedList14<double>::InvalidSubscript) {
			std::cout << "ERROR: Invalid Subscript Range Entered." << std::endl;
			std::cout << "Enter a number between 0 - " << myList.returnListSize() << std::endl;
			std::cout << std::endl;
		}
	} while (validRange == false);
	
	std::cout << std::endl;

	return 0;
}