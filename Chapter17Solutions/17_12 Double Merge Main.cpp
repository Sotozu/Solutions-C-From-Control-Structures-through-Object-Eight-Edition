#include <iostream>
#include "12 NumberList.h"
int main() {
	const int size = 4;
	NumberList myList;

	myList.appendNode(2);

	myList.appendNode(1);

	myList.appendNode(44);

	myList.appendNode(3);

	myList.appendNode(4);

	
	myList.sortList();
	myList.displayList();
	std::cout << std::endl;
	myList.appendNode(6);

	myList.sortList();
	myList.displayList();
	std::cout << std::endl;

	double myArray[size] = { 5,8,6,3 };
	
	myList.mergeArray(myArray, size);
	myList.displayList();
	std::cout << std::endl;

	return 0;
}