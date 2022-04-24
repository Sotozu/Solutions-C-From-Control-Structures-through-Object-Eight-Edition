#include <iostream>

template <class T> T absoluteValue(T num1) {
	if (num1 < 0) {
		num1 *= -1;
	}
	return num1;
}

int main() {
	int i1;
	double d1;
	std::cout << "Please enter an integer: "; std::cin >> i1;
	std::cout << "The absolute value of " << i1 << " number is: " << absoluteValue(i1) << std::endl;

	std::cout << std::endl;

	std::cout << "Please enter a double: "; std::cin >> d1;
	std::cout << "The absolute value of " << d1 << " is: " << absoluteValue(d1) << std::endl;

	return 0;
}