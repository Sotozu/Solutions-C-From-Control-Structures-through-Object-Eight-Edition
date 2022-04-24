#include <iostream>
#include "08 LinkedList.h"

int main() {
	
	int size = 5;
	char c;
	LinkedList08<int> myList1;

	for (int i = 0; i < size; i++) {
		myList1.appendNode(i);
	}
	std::cout << "List of ints:" << std::endl;
	myList1.print();
	std::cout << std::endl;

	LinkedList08<double> myList2;

	for (int i = 0; i < size; i++) {
		myList2.appendNode(i * 0.2);
	}
	std::cout << "List of doubles:" << std::endl;
	myList2.print();
	std::cout << std::endl;

	LinkedList08<char> myList3;

	for (int i = 65; i < (65 + size); i++) {
		c = static_cast<char>(i);
		myList3.appendNode(c);
	}

	std::cout << "List of chars:" << std::endl;
	myList3.print();
	std::cout << std::endl;

	return 0;
}