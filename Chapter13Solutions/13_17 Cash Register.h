#pragma once

class CashRegister
{
private:

	float profit_margin;
	float sales_tax;

public:
	//Constructor
	CashRegister() {
		profit_margin = 0.30;
		sales_tax = 0.06;
	}

	CashRegister(float p, float s) {
		profit_margin = p;
		sales_tax = s;
	}

	//Mutator
	void setPMargin(float p) {
		profit_margin = p;
	}

	void setSTax(float s) {
		sales_tax = s;
	}

	//Accessor

	//Member Function
	double calcSubtotal(double c, int u) {

		return (c * u) + (profit_margin * (c * u));
	}

	double calcTax(double c, int u) {
		return (c * u) * sales_tax;
	}

	double calcTotal(double c, int u) {
		return calcTax(c, u) + calcSubtotal(c, u);
	}

};

