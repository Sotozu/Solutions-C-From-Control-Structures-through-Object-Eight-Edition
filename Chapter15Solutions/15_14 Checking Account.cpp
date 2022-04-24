#include "14 Checking Account.h"

//Default Constructor
CheckingAccount14::CheckingAccount14() : GenericBankAccInfo14() {
}

//Constructor int balance, int annual_interest_rate
CheckingAccount14::CheckingAccount14(int b, int ann_int_rate) : GenericBankAccInfo14(b, ann_int_rate) {
}

//Virtual member functions from "14 Generic Bank Acc Info.h"
void CheckingAccount14::Withdraw(double ammount) {
	if (balance - ammount < 0) {
		balance -= 15; // 15 dollar service charge for withdrawl attempt that would set the account negative.
	}
	else {
		num_monthly_withdrawls++;
		balance -= ammount;
	}
}
void CheckingAccount14::Deposit(double ammount) {
	num_monthly_deposits++;
	balance += ammount;
}
void CheckingAccount14::calcInt() {
	if (balance < 0) {
		//NO INTEREST IS EARNED IN A NEGATIVE ACCOUNT
	}
	else {
		double monthly_interest_rate = annual_interest_rate / 12;
		double monthly_interest_earned = balance * monthly_interest_rate;
		balance += monthly_interest_earned;
	}

}
void CheckingAccount14::monthlyProc() {
	//subtracting service charges
	balance -= (5 + (0.10 * num_monthly_withdrawls));
	//calculating interest earned
	calcInt();
	//resets number of wit and dep 
	num_monthly_deposits = 0;
	num_monthly_withdrawls = 0;

}

std::ostream& operator << (std::ostream& out, const CheckingAccount14& obj) {
	out << std::setprecision(2) << std::showpoint << std::fixed;
	out << "CHECKING ACCOUNT INFO" << std::endl;
	out << "Balance: $" << obj.balance << std::endl;
	out << "Monthly Service Charge: $" << (5 + (0.10 * obj.num_monthly_withdrawls)) << std::endl;
	out << "Number of Monthly Deposits: " << obj.num_monthly_deposits << std::endl;
	out << "Number of Monthly Withdrawls: " << obj.num_monthly_withdrawls << std::endl;
	return out;
}