#include <memory>
#include <iostream>

#include "11 Payroll.h"

using namespace std;

int main() {
	int empl_num, hours;
	float rate;
	cout << "How many employees do you have?\n";
	cout << "NUM: "; cin >> empl_num;

	unique_ptr<Payroll11[]> my_company(new Payroll11[empl_num]);

	for (int i = 0; i < empl_num; i++) {
		cout << "EMPLOYEE " << i + 1 << endl;
		cout << "HOURS WORKED: "; cin >> hours;
		cout << "PAY RATE: "; cin >> rate;
		my_company[i].setHoursNRate(hours, rate);
		cout << endl;
	}

	cout << "----------------------------" << endl;
	cout << "EMPLOYEE PAYROLL INFORMATION" << std::endl;
	cout << "----------------------------" << endl;
	for (int i = 0; i < empl_num; i++) {
		cout << "EMPLOYEE " << i + 1 << endl;
		cout << "HOURS WORKED: " << my_company[i].showHours() << endl;
		cout << "PAY RATE: $" << my_company[i].showRate() << endl;
		cout << "GROSS PAY: $" << my_company[i].grossPay() << endl;
		cout << endl;
	}
	return 0;
}
