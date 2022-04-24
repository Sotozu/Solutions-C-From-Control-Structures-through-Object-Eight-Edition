#include <iostream>
#include <iomanip>
using namespace std;

//19. Monthly Payments

int main() {

	
	cout << "This program calcuates the monthly payments on a loan given input of factors about the loan.\n\n";

	float iRateMonth, loanAmount, numberOfPayments;
	float monthlyPayment, amountPaidBack, interestPaid, totalPayments;

	cout << "Please enter the loan amount: $";
	cin >> loanAmount;
	cout << "Please enter the monthly interest rate on the loan: %";
	cin >> iRateMonth;
	cout << "Please enter the number of payments: ";
	cin >> numberOfPayments;


	iRateMonth /= 100;

	monthlyPayment = ((iRateMonth * pow((1 + iRateMonth), numberOfPayments)) / (pow((1 + iRateMonth), numberOfPayments) - 1)) * loanAmount;
	iRateMonth *= 100;

	totalPayments = numberOfPayments * monthlyPayment;

	interestPaid = totalPayments - loanAmount;

	cout << setprecision(2) << fixed << showpoint;
	cout << left << setw(25) << "Loan Amount:" <<"$"<< right << setw(10) << loanAmount << endl;
	cout << setprecision(0) << noshowpoint;
	cout << left << setw(25) << "Monthly Interest Rate:" << right << setw(11) << iRateMonth <<"%"<< endl;
	cout << left << setw(25) << "Number of Payments:" << right << setw(11) << numberOfPayments << endl;
	cout << setprecision(2)  << showpoint;
	cout << left << setw(25) << "Monthly Payment:" << "$" << right << setw(10) << monthlyPayment << endl;
	cout << left << setw(25) << "Amount Paid Back:" << "$" << right << setw(10) << totalPayments << endl;
	cout << left << setw(25) << "Interest Paid:" << "$" << right << setw(10) << interestPaid << endl;
	cout << endl << "Alex" << endl;

	return 0;
}