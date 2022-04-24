#include <iostream>
#include "07 IntList.h"
//no exception created for removeAtPosition function if position passed is negative or larger than the list size

int main() {
	
	IntList07 myList;

	for (int i = 0; i < 5; i++) {
		myList.appendNode(i*2);
	}
	myList.print();
	std::cout << std::endl;

	myList.removeAtPosition(-1);

	myList.print();
	std::cout << std::endl;

	return 0;
}