#include <iostream>
#include "15 TemplateList.h"

int main() {

	LinkedList15<double> myList;

	for (int i = 0; i < 5; i++) {
		myList.appendNode(i);
	}

	myList.print();
	std::cout << std::endl;

	myList.pop_back();
	myList.print();
	std::cout << std::endl;

	myList.pop_front();
	myList.print();
	std::cout << std::endl;

	myList.push_back(5.5);
	myList.print();
	std::cout << std::endl;

	myList.push_front(7.1);
	myList.print();
	std::cout << std::endl;

	return 0;
}