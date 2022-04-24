#include <iostream>
#include "08 SimpleVector.h"

int main() {

	const int SIZE = 10;
	SimpleVector<int> vec(SIZE);
	int user_input;

	for (int i = 0; i < vec.size(); i++) {
		vec[i] = i;
		std::cout << vec[i] << std::endl;
	}
	std::cout << std::endl;

	std::cout << "Vector Size: " << vec.size() << std::endl;
	std::cout << "Press \"ENTER\" to continue.";
	std::cin.get();
	std::cout << "Enter new element to add to the vector: "; std::cin >> user_input;


	vec.push_back(user_input);


	for (int i = 0; i < vec.size(); i++) {
		std::cout << vec[i] << std::endl;
	}
	std::cout << std::endl;

	std::cout << "Vector Size: " << vec.size() << std::endl;
	std::cout << "Press \"ENTER\" to continue.";
	std::cin.ignore();
	std::cin.get();
	std::cout << "Press enter to pop back the last element." << std::endl;
	std::cin.get();

	vec.pop_back();
	for (int i = 0; i < vec.size(); i++) {
		std::cout << vec[i] << std::endl;
	} 
	std::cout << std::endl;
	std::cout << "Vector Size: " << vec.size() << std::endl;


	return 0;
}