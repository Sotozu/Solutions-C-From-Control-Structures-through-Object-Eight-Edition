#include <iostream>
#include <iomanip>
using namespace std;


// 10. Future Value


double futureValue(double, double, int);
int main() {

	double present_value, interest_rate, future_value;
	int months;

	cout << "FUTURE VALUE\n";
	cout << "Please eneter the current balance of your account.\n";
	cout << "PRESENT VALUE($): ";
	cin >> present_value;

	cout << "\nPlease enter the interest rate of your account.\n";
	cout << "INTEREST RATE(%): ";
	cin >> interest_rate;

	cout << "\nPlease eneter the amount of months the account will be open.\n";
	cout << "MONTHS: ";
	cin >> months;

	cout << showpoint << setprecision(2) << fixed;
	cout << "\nThe future value of your account given your inputed information.\n";
	cout << "FUTURE VALUE($): ";

	cout << futureValue(present_value, interest_rate, months);

	return 0;
}
double futureValue(double pv, double ir, int m) {

	ir = ir / 100; //setting intereset rate to a percent value for the equation.

	double future_value = pv * pow((1 + ir), m);

	return future_value;
}