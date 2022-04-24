#include <iostream>
#include <iomanip>
#include "08 PreferredCustomer.h"
int main() {
	double purchased;
	PreferredCustomer08 cust1;
	std::cout << std::setprecision(2) << std::showpoint << std::fixed;

	for (int i = 0; i < 3; i++) {
		std::cout << "Total Purchases: $" << cust1.getPurchaseAmount() << std::endl;
		std::cout << "Discount level is currently: " << cust1.getDiscountLevel() << std::endl;

		std::cout << std::endl;
		std::cout << "Please enter a total for purchased items." << std::endl;
		std::cout << "PURCHASED: $"; std::cin >> purchased;
		cust1.addPurchase(purchased);

		std::cout << std::endl << std::endl;

	}

		return 0;
}

//adding some comment for github test
