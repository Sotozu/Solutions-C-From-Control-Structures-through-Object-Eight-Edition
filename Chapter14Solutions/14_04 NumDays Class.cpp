#include <iostream>

#include "04 NumDays Class.h"

int main() {

	int hours;
	std::cout << "Please enter the number of hours worked." << std::endl;
	std::cout << "Hours: "; std::cin >> hours;
	std::cout << std::endl << "Worker 1" << std::endl;
	Numdays4 worker1(hours);
	worker1.printInfo();

	std::cout << std::endl << "Copied contents of Worker 1 and placed them in Worker 2" << std::endl;
	std::cout << std::endl << "Worker 2" << std::endl;
	Numdays4 worker2 = worker1;
	worker2.printInfo();

	std::cout << std::endl << "Added the conents of Worker 2 into Worker 1" << std::endl;
	std::cout << std::endl << "Worker 1" << std::endl;
	worker1 = worker1 + worker2;
	worker1.printInfo();

	for (int i = 0; i < 10; i++) {
		worker1++;
	}
	std::cout << std::endl << "Added 10 hours to Worker 1" << std::endl;
	worker1.printInfo();

	for (int i = 0; i < 1; i++) {
		worker1--;
	}
	std::cout << std::endl << "Subtracted 1 hour to Worker 1" << std::endl;
	worker1.printInfo();

	return 0;


}
