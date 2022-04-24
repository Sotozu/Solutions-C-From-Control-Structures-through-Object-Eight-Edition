#include <iostream>
#include "07 MathStack.h"


int main() {
	const int size = 5;
	int num;
	MathStack07 myStack(size);
	
	for (int i = 0; i < size; i++) {
		myStack.push(2);
	}
	// 2 2 2 2 2 

	myStack.add();
	// 2 2 2 4
	myStack.pop(num);

	std::cout << num << std::endl;

	// 2 2 2
	myStack.sub();
	// 2 0
	myStack.pop(num);

	std::cout << num << std::endl;

	// 2
	myStack.push(5);
	myStack.push(2);
	// 2 5 2

	myStack.mult();
	// 2 10
	myStack.pop(num);

	std::cout << num << std::endl;

	myStack.push(2);
	myStack.push(2);

	// 2 2 2
	myStack.div();
	// 2 1
	myStack.pop(num);


	std::cout << num << std::endl;

	myStack.push(2);
	myStack.push(2);
	myStack.push(2);

	// 2 2 2 2

	myStack.addAll();
	// 8

	myStack.pop(num);
	std::cout << num << std::endl;

	myStack.push(2);
	myStack.push(2);
	myStack.push(2);
	myStack.push(2);

	// 2 2 2 2

	myStack.multAll();
	// 16

	myStack.pop(num);
	std::cout << num << std::endl;

	return 0;
}