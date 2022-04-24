#include <iostream>
#include <string>
#include "06 Dynamic Stack  Template.h"
int main() {
	std::string s_var;
	Stack06<std::string> myStack;
	std::string s = "MEEP MOOP!";
	myStack.push("HELLO MY NAME IS ALEX");
	myStack.push("I AM VERY HUNGRY!");

	myStack.pop(s_var);
	std::cout << s_var << std::endl;

	myStack.push("BURRITOS SOUNDS GOOD RIGHT ABOUT NOW!");

	myStack.pop(s_var);
	std::cout << s_var << std::endl;

	myStack.push(s);

	myStack.pop(s_var);
	std::cout << s_var << std::endl;

	myStack.pop(s_var);
	std::cout << s_var << std::endl;

	return 0;
}