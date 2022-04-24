#include <iostream>
#include "04 IntList.h"


int main() {

	IntList04 myList;

	for (int i = 0; i < 3; i++) {
		myList.appendNode(i);
	}

	myList.print();

	std::cout << "REVERSING LIST" << std::endl;

	myList.reverseList();

	myList.print();

	return 0;
}