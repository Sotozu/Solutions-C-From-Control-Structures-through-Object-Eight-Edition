#include <iostream>
#include "03 IntList.h"

int main() {

	IntList03 myList;

	for (int i = 0; i < 4; i++) {
		myList.appendNode(i);
	}
	myList.print();
	std::cout << std::endl;

	myList.insertNode(2);
	myList.print();
	std::cout << std::endl;


	myList.deleteNode(2);
	myList.print();
	std::cout << std::endl;
	
	//------
	std::cout << "COPY LIST FROM HERE ON OUT" << std::endl;
	IntList03 copyList(&myList);
	myList.~IntList03();
	copyList.print();
	std::cout << std::endl;



	return 0;
}