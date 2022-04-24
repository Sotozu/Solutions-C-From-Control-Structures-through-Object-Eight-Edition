#pragma once
#include <iostream>
#include "14 Generic Bank Acc Info.h"

class SavingsAccount14 : public GenericBankAccInfo14 {
private:
	bool status;

protected:

public:
	//Default Constructor
	SavingsAccount14();
	SavingsAccount14(int b, int ann_int_rate);
	//virtual functions
	virtual void Withdraw(double ammount);
	virtual void Deposit(double ammount);
	virtual void calcInt();
	virtual void monthlyProc();

	//member functions
	void setStatus();
};