#pragma once

class GenericBankAccInfo14 {
private:

protected:
	double balance;
	int num_monthly_deposits;
	int num_monthly_withdrawls;
	double annual_interest_rate;
	double monthly_service_charge;
public:
	//Default Constructor
	GenericBankAccInfo14() {
		balance = 0;
		num_monthly_deposits = 0;
		num_monthly_withdrawls = 0;
		annual_interest_rate = 0;
		monthly_service_charge = 0;
	}

	//Constructor
	GenericBankAccInfo14(int b, double ann_int_rate) {
		balance = b;
		annual_interest_rate = ann_int_rate;

		num_monthly_withdrawls = 0;
		num_monthly_deposits = 0;
		monthly_service_charge = 0;
	}

	//virtual function
	virtual void Withdraw(double ammount) = 0;
	virtual void Deposit(double ammount) = 0;
	virtual void calcInt() = 0;
	virtual void monthlyProc() = 0;



};