#include <iostream>
#include "02 Dynamic Stack Template.h"
int main() {
	int i_output;
	char c_output;
	Stack02<int> myStack1;
	Stack02<char> myStack2;

	for (int i = 65; i < 75; i++) {
		myStack1.push(i);
		myStack2.push(static_cast<char>(i));
	}

	for (int i = 65; i < 75; i++) {
		myStack1.pop(i_output);
		std::cout << "myStack1 poped: " << i_output << std::endl;
		myStack2.pop(c_output);
		std::cout << "myStack2 poped: " << c_output << std::endl;
		std::cout << std::endl;
	}

	return 0;
}