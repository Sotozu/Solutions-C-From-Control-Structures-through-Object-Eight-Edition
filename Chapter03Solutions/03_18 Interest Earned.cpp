#include <iostream>
#include <iomanip>
using namespace std;

//18. Interest Earned

int main() {

	
	float principle, interestRate, timesCompounded, interestEarned, totalInSavings;

	cout << "This program computes the amount earned on investmen given the interest rate, times compounded\n"
	<< "and principle.\n\n";
	cout << "Please enter the principle investment: $";
	cin >> principle;
	cout << "Please enter the interest rate: %";
	cin >> interestRate;
	cout << "Please enter the times compounded per year: ";
	cin >> timesCompounded;

	interestRate /= 100;
	totalInSavings = principle * pow((1 + (interestRate / timesCompounded)), timesCompounded);
	interestEarned = totalInSavings - principle;
	interestRate *= 100;

	cout << setprecision(2) << fixed << showpoint<<endl;
	cout << left << setw(20) << "Interest Rate:" << right << setw(11) << interestRate <<"%"<< endl;
	cout << noshowpoint << setprecision(0) << fixed;
	cout << left << setw(20) << "Times Compounded:" << right << setw(11) << timesCompounded << endl;
	cout << setprecision(2) << fixed << showpoint;
	cout << left << setw(20) << "Principle:" << "$" << right << setw(10) << principle << endl;
	cout << left << setw(20) << "Interest:" << "$" << right << setw(10) << interestEarned<< endl;
	cout << left << setw(20) << "Amount in Savings:" << "$" << right << setw(10) << totalInSavings<< endl;
	cout << endl << "Alex" << endl;
	return 0;
}