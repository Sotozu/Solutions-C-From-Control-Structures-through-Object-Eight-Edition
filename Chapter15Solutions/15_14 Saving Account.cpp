#include "14 Savings Account.h"

SavingsAccount14::SavingsAccount14() : GenericBankAccInfo14() {
	setStatus();
}

SavingsAccount14::SavingsAccount14(int b, int ann_int_rate) : GenericBankAccInfo14(b, ann_int_rate) {
	setStatus();
}

//Member Functions

void SavingsAccount14::setStatus() {
	if (balance < 25) {
		status = false;
	}
	else if (balance > 25) {
		status = true;
	}
}

//virtual functions from "14 Generic Bank Acc Info.h"
void SavingsAccount14::Withdraw(double ammount) {
	if (!status) {
		//do nothing because according to the problem we can't withdraw if the account falls bellow $25.00
		std::cout << "FUNDS BELOW $25.00 WITHDRAWL CANCLED" << std::endl;
	}
	else  {
		num_monthly_withdrawls++;
		balance -= ammount;
		setStatus();
	}
}

void SavingsAccount14::Deposit(double ammount) {
	num_monthly_deposits++;
	balance += ammount;
	setStatus();
}

void SavingsAccount14::monthlyProc() {
	double additional_service_charge;
	if ((num_monthly_withdrawls - 4) >= 1) {
		additional_service_charge = num_monthly_withdrawls - 4.0;
		balance -= additional_service_charge;
		calcInt();
		num_monthly_deposits = 0;
		num_monthly_withdrawls = 0;
		setStatus();
	}
}

void SavingsAccount14::calcInt() {
	if (balance < 0) {
		//NO INTEREST IS EARNED IN A NEGATIVE ACCOUNT
	}
	else {
		double monthly_interest_rate = annual_interest_rate / 12;
		double monthly_interest_earned = balance * monthly_interest_rate;
		balance += monthly_interest_earned;
	}

}