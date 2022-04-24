#include <iostream>
#include "01 IntList.h"

int main() {

	IntList01 myList;

	for (int i = 0; i < 10; i++) {
		myList.appendNode(i);
	}

	myList.insertNode(2);

	myList.insertNode(5);

	myList.deleteNode(2);
	
	return 0;
}