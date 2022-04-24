#include <iostream>

//Exception class
class Equal{};

template <class T> T minimum(T num1, T num2) {

	if (num1 > num2) {
		return num2;
	}
	else if (num2 > num1) {
		return num1;
	}
	throw Equal();

}

template <class T> T maximum(T num1, T num2) {

	if (num1 > num2) {
		return num1;
	}
	else if (num2 > num1) {
		return num2;
	}
	throw Equal();

}

int main() {

	int num1, num2;

	std::cout << "Please enter two integers." << std::endl;

	std::cout << "First: "; std::cin >> num1;
	std::cout << "Second: "; std::cin >> num2;

	try {
		
		std::cout << minimum(num1, num2) << " is the smallest." << std::endl;
	}
	catch (Equal) {
		std::cout << "Both are equal!" << std::endl;
	}

	try {
		std::cout << maximum(num1, num2) << " is the largest." << std::endl;
	}
	catch (Equal) {
		std::cout << "Both numbers are equal!" << std::endl;
	}

	std::cout << std::endl;
	std::cout << "Please enter two doubles." << std::endl;
	
	double d1, d2;

	std::cout << "First: "; std::cin >> d1;
	std::cout << "Second: "; std::cin >> d2;

	try {

		std::cout << minimum(d1, d2) << " is the smallest." << std::endl;
	}
	catch (Equal) {
		std::cout << "Both are equal!" << std::endl;
	}

	try {
		std::cout << maximum(d1, d2) << " is the largest." << std::endl;
	}
	catch (Equal) {
		std::cout << "Both are equal!" << std::endl;
	}

	std::cout << std::endl;
	std::cout << "Please enter two characters." << std::endl;

	char c1, c2;

	std::cout << "First: "; std::cin >> c1;
	std::cout << "Second: "; std::cin >> c2;

	try {

		std::cout << minimum(c1, c2) << " is the smallest." << std::endl;
	}
	catch (Equal) {
		std::cout << "Both are equal!" << std::endl;
	}

	try {
		std::cout << maximum(c1, c2) << " is the largest." << std::endl;
	}
	catch (Equal) {
		std::cout << "Both are equal!" << std::endl;
	}




};