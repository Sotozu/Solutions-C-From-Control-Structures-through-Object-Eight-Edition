#include <iostream>
#include "12 SearchableVector.h"
#include <string>
int main() {
	int SIZE = 10;
	SearchableVector<std::string> vec(SIZE);
	char letter = 'A';
	std::string user_input;

	for (int i = 0; i < vec.size(); i++) {
		vec[i] = letter;
		letter = letter + 1;
	}



	for (int i = 0; i < vec.size(); i++) {
		std::cout << vec[i] << std::endl;
	}

	std::cin.get();

	std::cout << "\"B\" is found on at index: "<< vec.findItem("B") << std::endl;

	SimpleVector<std::string> vecSimple(SIZE);
	for (int i = 0; i < SIZE; i++) {
		vecSimple[i] = letter;
		letter = letter - 1;
	}


	std::cin.get();
	std::cout << "SIMPLE VECTOR CONTENTS" << std::endl;
	for (int i = 0; i < vecSimple.size(); i++) {
		std::cout << "INDEX " << i << ": "<< vecSimple[i] << std::endl;
	}

	std::cin.get();
	std::cout << "Enter a string you would like to add to the last index of the vector." << std::endl;
	std::cout << "STRING: "; std::getline(std::cin, user_input);
	vecSimple.push_back(user_input);


	for (int i = 0; i < vecSimple.size(); i++) {
		std::cout << "INDEX " << i << ": " << vecSimple[i] << std::endl;
	}

	

	return 0;
}
