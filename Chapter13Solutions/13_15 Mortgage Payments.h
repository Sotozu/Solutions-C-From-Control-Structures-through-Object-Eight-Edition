#pragma once
#include <cmath>
class MortgagePayment
{
private:
	double loan_amount;
	double interest_rate;
	int years;
	double term;
	double monthly_payment;

	void calc_Term_MonthlyPayment() {
		term = pow((1 + (interest_rate / 12)), (12 * years));
		monthly_payment = (loan_amount * (interest_rate / 12) * term) / (term - 1);
	}

public:
	//Constructor

	MortgagePayment() {
		loan_amount = 0;
		interest_rate = 0;
		years = 0;
		calc_Term_MonthlyPayment();
	}

	MortgagePayment(double l, double r, int y) {
		loan_amount = l;
		interest_rate = r;
		years = y;
		calc_Term_MonthlyPayment();

	}

	//Mutator

	void setLoan(double l) {
		loan_amount = l;
		calc_Term_MonthlyPayment();

	}

	void setRate(double r) {
		interest_rate = r;
		calc_Term_MonthlyPayment();
	}

	void setYear(int y) {
		years = y;
		calc_Term_MonthlyPayment();

	}

	//Accessor

	double totalPayment() {
		return monthly_payment * 12 * years;
	}
	double monthlyPayment() {
		return monthly_payment;
	}
};

