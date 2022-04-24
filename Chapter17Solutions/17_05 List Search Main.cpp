#include <iostream>
#include "05 IntList.h"
int main() {
	IntList05 myList;

	for (int i = 0; i < 3; i++) {
		myList.appendNode(i);
	}
	myList.print();
	std::cout << std::endl;
	std::cout << "NUMBER FUND AT POSITON: " << myList.search(2) << std::endl;

	return 0;
}