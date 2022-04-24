#include <iostream>
#include <string>
#include "14 Dynamic Stack Template.h"

int main() {

	Stack14<char> parentheses;
	bool are_parantheses_balanced = true;
	std::string user_input;
	char x;
	int input_char_length;

	std::cout << "Enter string: "; std::getline(std::cin, user_input);

	input_char_length = user_input.size();


	for (int i = 0; i < input_char_length; i++) {
		x = user_input[i];
		if (x == '(') {
			parentheses.push(x);
		}
		else if (x == ')') {
			/*
			* if there is nothing in the stack and a closing parentheses is found then
			* the string does NOT have balanced parentheses
			*/
			if (parentheses.isEmpty()) {
				are_parantheses_balanced = false;
				break;
			}
			else {
				parentheses.pop(x);
			}
		}
	}
	/*
	* At this point the stack should be empty if the parentheses are balanced. IF NOT balanced
	* then the stack will NOT be empty
	*/

	if (!parentheses.isEmpty()) {
		are_parantheses_balanced = false;
	}
	if (are_parantheses_balanced) {
		std::cout << "Parentheses are balanced." << std::endl;
	}
	else {
		std::cout << "Parentheses are NOT balanced." << std::endl;
	}


	return 0;
}