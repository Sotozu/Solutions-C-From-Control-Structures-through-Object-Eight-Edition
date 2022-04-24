#include <iostream>
#include <iomanip>
using namespace std;

// 9. Present Value

double presentValue (double, double, int);

int main() {

	double future_value, interest_rate, years, present_value;

	cout << "PRESENT VALUE\n";

	cout << "Please enter the future ammount of money you would like to have in the account.\n";
	cout << "FUTURE VALUE($): ";
	cin >> future_value;

	cout << "Please eneter the interest rate of the account.\n";
	cout << "INTEREST RATE (%): ";
	cin >> interest_rate;

	cout << "Please enter the amount of years that you plan to have the account open.\n";
	cout << "YEARS: ";
	cin >> years;

	present_value = presentValue(future_value, interest_rate, years);
	cout << showpoint << setprecision(2) << fixed;
	cout << "The amount you would have to deposit today given...\n";
	cout << "\nFUTURE VALUE: $" << future_value << "\nINTEREST RATE: " << interest_rate << "%" <<"\nYEARS: " << years << "\nis...";
	cout << "\nPRESET VALUE: $" << present_value;
	

	return 0;
}

double presentValue(double fv, double ir, int y) {
     
	ir = ir / 100; //converts the interest rate to a percent amount if originall inputed as a whole number

	double present_value = fv / pow((1 + ir), y);

	return present_value;

}