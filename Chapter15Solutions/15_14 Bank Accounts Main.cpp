#include <iostream>
#include "14 Savings Account.h"
#include "14 Checking Account.h"
int main() {

	SavingsAccount14 savings1(24, 0.07);

	savings1.Withdraw(1);
	std::cin.get();
	savings1.Deposit(2);
	std::cin.get();
	savings1.Withdraw(1);
	std::cin.get();
	savings1.monthlyProc();

	CheckingAccount14 checking1(100, 0.08);

	checking1.Withdraw(1);
	std::cin.get();
	checking1.Withdraw(98);
	std::cin.get();
	checking1.Withdraw(2);
	std::cin.get();
	checking1.Deposit(20);
	std::cout << std::endl;
	std::cout << checking1 << std::endl;
	checking1.monthlyProc();
	std::cout << std::endl;
	std::cout << "MONTHLY SERVICE FEES APPLIED" << std::endl;
	std::cout << checking1 << std::endl;



	return 0;
}
