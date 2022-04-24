#include <iostream>

#include "07 CustomerData.h"

int main() {
	CustomerData07 cust1(12345, 1, "Soto", "Alex", "1010 Rads Road", "Coolsville", "FL", 10000, 1001001000);

	std::cout << cust1 << std::endl;

	cust1.setFirstName("Rolando");
	cust1.setMailingList(false);
	std::cout << cust1;
	return 0;
}