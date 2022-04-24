#include <iostream>
#include "05 Dynamic Queue Template.h"
#include "05 Dynamic Stack Template.h"

int main() {
	DynamicQueueTemplate05<int> myDQT;
	Stack05<double> myStack;

	int int_var = 0;
	double double_var = 0.0;

	for (int i = 1; i < 100000000000; i++) {
		myDQT.enqueue(i);
		myStack.push(i * 1.1);
	}

	myDQT.dequeue(int_var);
	std::cout << int_var << std::endl;
	myStack.pop(double_var);
	std::cout << double_var << std::endl;

	return 0;
}
