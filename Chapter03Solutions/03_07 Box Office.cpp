#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//7. Box Office

int main() {

	
	string movieName;
	int cTickets, aTickets;
	float cPrice = 6.00, aPrice = 10.00;
	float grossProfit, netProfit, distributorPayment;
	float distributorPercentage = 0.2;

	cout << "This program calculates the gross and net box office profit for a night.\n";
	cout << "Enter the name of the movie: ";
	getline(cin,movieName);
	cout << "Enter the number of children tickets sold: ";
	cin >> cTickets;
	cout << "Enter the number of adult tickets sold: ";
	cin >> aTickets;

	grossProfit = (cPrice * cTickets) + (aPrice + aTickets);
	distributorPayment = grossProfit * distributorPercentage;
	netProfit = grossProfit - distributorPayment;

	cout <<setprecision(2)<<fixed<<endl;

	cout<<setw(30)<<left<<"Movie Name: "
		<<"\""<<movieName<<"\""<<endl;

	cout<<setw(30)<<left<<"Adult Tickets Sold: "
		<<setw(7)<<right<<aTickets<<endl;

	cout<<setw(30)<<left<<"Child Tickets Sold: "
		<<setw(7)<<right<<cTickets<<endl;

	cout<<setw(30)<<left<<"Gross Box Office Profit: "
		<<"$"<<setw(9)<<right<<grossProfit<<endl;

	cout<<setw(30)<<left<<"Net Box Office Profit: "
		<<"$"<<setw(9)<<right<<netProfit<<endl;

	cout<<setw(30)<<left<<"Amount Paid to Distributor: "
		<<"$"<<setw(9)<<right<<distributorPayment<<endl;
	
	cout << endl << "Alex" << endl;
	return 0;
}