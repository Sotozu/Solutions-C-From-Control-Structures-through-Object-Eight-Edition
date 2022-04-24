#include <iostream>
#include "06 IntList.h"

//no exception has been made for the function when negative numbers are placed


int main() {
	IntList06 myList;

	for (int i = 0; i < 5; i++) {
		myList.appendNode(i);
	}

	myList.print();
	std::cout << std::endl;
	myList.insertAtPosition(1, 100);
	myList.print();
	std::cout << std::endl;

	return 0;
}