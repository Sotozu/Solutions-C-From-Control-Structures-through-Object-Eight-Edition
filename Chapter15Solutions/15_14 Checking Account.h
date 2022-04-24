#pragma once
#include <iostream>
#include <iomanip>
#include "14 Generic Bank Acc Info.h"

class CheckingAccount14;

std::ostream& operator << (std::ostream&, const CheckingAccount14&);

class CheckingAccount14 : public GenericBankAccInfo14 {

private:
protected:

public:
	//Default Constructor
	CheckingAccount14();

	//Constructor int balance, int annual_interest_rate
	CheckingAccount14(int b, int ann_int_rate);

	//Virtual member functions from "14 Generic Bank Acc Info.h"
	virtual void Withdraw(double ammount);
	virtual void Deposit(double ammount);
	virtual void calcInt();
	virtual void monthlyProc();
	friend std::ostream& operator << (std::ostream&, const CheckingAccount14&);
};