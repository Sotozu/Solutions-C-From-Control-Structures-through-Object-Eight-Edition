#include <iostream>
#include <string>
#include "15 Dynamic Stack Template.h"

int main() {

	Stack15<char> delimiter;
	bool are_parantheses_balanced = true;
	std::string user_input;
	char x, stack_char;
	int input_char_length;

	std::cout << "Enter string: "; std::getline(std::cin, user_input);

	input_char_length = user_input.size();


	for (int i = 0; i < input_char_length; i++) {
		x = user_input[i];
		if (x == '(' || x == '{' || x == '[') {
			delimiter.push(x);
		}
		else if (x == ')' || x == '}' || x == ']') {
			/*
			* if there is nothing in the stack and a closing delimiter is found then
			* the string does NOT have balanced delimiter
			*/
			if (delimiter.isEmpty()) {
				are_parantheses_balanced = false;
				break;
			}
			else {
				delimiter.pop(stack_char);
				switch (x) {
				case ')':
					if (stack_char != '(') {
						are_parantheses_balanced = false;
					}
					break;
				case '}':
					if (stack_char != '{') {
						are_parantheses_balanced = false;
					}
					break;
				case ']':
					if (stack_char != '[') {
						are_parantheses_balanced = false;
					}
					break;
				}
			}
		}
	}
	/*
	* At this point the stack should be empty if the delimiter are balanced. IF NOT balanced
	* then the stack will NOT be empty
	*/

	if (!delimiter.isEmpty()) {
		are_parantheses_balanced = false;
	}
	if (are_parantheses_balanced) {
		std::cout << "delimiter are balanced." << std::endl;
	}
	else {
		std::cout << "delimiter are NOT balanced." << std::endl;
	}


	return 0;
}