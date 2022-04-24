#include <iostream>
#include <iomanip>
using namespace std;

//14. Bank Charges

int main() {

	cout << "This program take calculates abk fees based on the the number checks taken out and and the ammount in the account to begin with." << endl;

	double inibalance, numchecks, finbalance, calccheckfee;

	int standardfee = 10;

	int lowbalancefee = 0;

	cout << "Enter the beginning balance of the account: ";

	cin >> inibalance;

	if (inibalance < 400)
	{
		lowbalancefee = 15;
	}

	cout << "Enter the number of checks written this month: ";

	cin >> numchecks;

	if (numchecks < 20)
	{
		calccheckfee = numchecks * .10;
	}
	else if (numchecks >= 20 && numchecks < 40)
	{
		calccheckfee = numchecks * .08;
	}
	else if (numchecks >= 40 && numchecks < 60)
	{
		calccheckfee = numchecks * .06;
	}
	else if (numchecks >= 60)
	{
		calccheckfee = numchecks * .04;
	}

	finbalance = calccheckfee + standardfee + lowbalancefee;

	cout <<setprecision(2)<<showpoint<< fixed <<" The banks service fees this month are: $"<< finbalance;


	return 0;
}