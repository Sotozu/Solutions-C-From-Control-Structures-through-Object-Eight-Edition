#include <iostream>
#include <iomanip>
using namespace std;

//16. Saving Account Balance

int main() {

	double interest, start_balance, deposit, months, withdraw;
	double mont_int_rate, tot_int = 0, tot_dep = 0, tot_wit = 0;

	int width = 30;
	cout << "Please enter the anual interest rate(%): ";
	cin >> interest;

	if (interest >= 1) {
		interest /= 100;
	}

	cout << "Please eneter the starting balance: $";
	cin >> start_balance;

	cout << "Please enter the amount of months to compound: ";
	cin >> months;

	mont_int_rate = interest / 12;

	for (int i = 1; i <= months; i++) {
		cout << "MONTH: " << i << endl;
		cout << "Enter money deposited for this month: $";
		cin >> deposit;
		cout << "Enter money withdrawn for this month: $";
		cin >> withdraw;

		start_balance += (deposit - withdraw); //Will calcualte the balance of the account at the end of the month BEFORE INTEREST

		tot_dep += deposit; //Will sum total depositis over the time period set

		tot_wit += withdraw; //Will sum total withdraws over the time period set

		tot_int += (start_balance * mont_int_rate); //Will sum total interest earned over the time period set

		start_balance += (start_balance * mont_int_rate); //Calculates the balance of the account WITH INTEREST EARNED
	}

	cout << fixed << setprecision(2) << showpoint;
	cout << "\nFIANCIAL ANALYSIS\n";
	cout << setw(width) << left << "Total Deposits: " << "$" << tot_dep << endl;
	cout << setw(width) << left << "Total Withdrawls: " << "$" << tot_wit << endl;
	cout << setw(width) << left << "Total Interest Earned: " << "$" << tot_int << endl;
	cout << "__________________\n";
	cout << setw(width) << left << "Ending Balance of Account: " << "$" << start_balance << endl;
	cout << endl << "Alex" << endl;
	return 0;
}