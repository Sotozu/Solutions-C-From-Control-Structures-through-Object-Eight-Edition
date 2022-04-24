#include <iostream>
#include "11 TemplateList.h"

int main() {
	LinkedList11<int> myList;

	for (int i = 0; i < 10; i++) {
		myList.appendNode(i * 2);
	}

	std::cout << myList.search(3) << std::endl;
	
	return 0;
}