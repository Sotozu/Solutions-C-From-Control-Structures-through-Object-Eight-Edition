#pragma once
class Payroll11
{
private:
	int total_hours;
	float rate;

public:

	//Constructor
	Payroll11() {
		total_hours = 0;
		rate = 0;
	}
	Payroll11(int h, float r) {
		total_hours = h;
		rate = r;
	}
	//Accessor
	float grossPay() const {
		return total_hours * rate;
	}
	int showHours() const {
		return total_hours;
	}
	float showRate() const {
		return rate;
	}
	//Mutatros;
	void setHoursNRate(int h, float r) {
		total_hours = h;
		rate = r;
	}



};

