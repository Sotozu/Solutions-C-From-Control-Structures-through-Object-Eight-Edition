#include <iostream>
#include "02 IntList.h"

int main() {

	IntList02 myList;

	for (int i = 0; i < 10; i++) {
		myList.appendNode(i);
	}
	myList.print();
	std::cout << std::endl;

	myList.insertNode(2);
	myList.print();
	std::cout << std::endl;


	myList.insertNode(5);
	myList.print();
	std::cout << std::endl;


	myList.deleteNode(2);
	myList.print();
	std::cout << std::endl;


	return 0;
}