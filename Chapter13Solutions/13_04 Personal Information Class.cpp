#include <iostream>
#include "04 Personal Information Class.h"
int main() {
	const int size = 3;
	PersonalInformation people[size] = {
		PersonalInformation("Alex", "10101 Computer Memory Dr", 23, "(101) 010-1010"), //My Info
		PersonalInformation("Friend 1", "10101 Computer Memory Dr", 23, "(101) 010-1010"), //"Friends info"
		PersonalInformation("Family 1", "10101 Computer Memory Dr", 23, "(101) 010-1010"), //"Friends info"
	};

	std::cout << "Please press \"enter\" to output the information in the class." << std::endl;
	std::cin.get();

	for (int i = 0; i < size; i++) {
		std::cout << people[i].getName() << std::endl;
		std::cout << people[i].getAge() << std::endl;
		std::cout << people[i].getAddress() << std::endl;
		std::cout << people[i].getPhone() << std::endl;
		std::cout << std::endl;
	}
	return 0;
}