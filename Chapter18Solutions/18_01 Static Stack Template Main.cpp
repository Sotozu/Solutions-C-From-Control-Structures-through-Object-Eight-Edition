#include <iostream>
#include <string>
#include "01 Static Stack Template.h"

int main() {
	const int SIZE = 5;
	std::string input;
	Stack<std::string> myStack(SIZE);

	//--------------------------------
	myStack.pop(input);
	std::cout << std::endl;
	//--------------------------------

	myStack.push("HELLO!");
	myStack.push("IT'S A WONDERFUL DAY!");
	myStack.push("LETS GET A BITE TO EAT!");
	myStack.push("THAT BURRITO WAS AMAZING!");
	myStack.push("BUT I'M GASSY NOW...");

	//--------------------------------
	myStack.push("IS THE STACK FULL?");
	std::cout << std::endl;
	//--------------------------------

	for (int i = 0; i < SIZE; i++) {
		myStack.pop(input);
		std::cout << input << std::endl;
	}




	return 0;
}