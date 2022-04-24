#include <iostream>
#include <iomanip>
using namespace std;

//23. Stock Transaction Program

int main() {
	
	float stockAmount, stockPrice = 45.50, salePrice = 56.90, stockbrokerPercent = 0.02;
	float stockTotalPurchaseCost, totalSalesGain, brokerPurchaseCommission, brokerSalesCommission, profit;

	int w1 = 30, w2 = 9;

	cout << "This program calculates and displays the cost/gain of buying and selling stock.\n\n";
	cout << "Enter the amount of stock to purchase ($"<<stockPrice<<" per share): ";
	cin >> stockAmount;
	cout << "The stockbroker charges "<<stockbrokerPercent*100<<"% commission in the purchase of your stock.\n\n";
	cout << "Two weeks have passed since you purchased the stock.\n"
	<< "You decide to sell your stock at ($"<<salePrice<<" per share).\n";
	cout << "The stockbroker charges "<<stockbrokerPercent*100<<"% commission in the sale of your stock.\n\n";
	cout << "Please press \"Enter\" to continue:";
	cin.ignore();
	cin.get();

	stockTotalPurchaseCost = stockPrice * stockAmount;
	totalSalesGain = salePrice * stockAmount;
	brokerPurchaseCommission = stockTotalPurchaseCost * stockbrokerPercent;
	brokerSalesCommission = totalSalesGain * stockbrokerPercent;
	profit = (totalSalesGain + brokerSalesCommission) + (stockTotalPurchaseCost + brokerPurchaseCommission) * -1;

	cout << setprecision(2) << fixed << showpoint;
	cout << setw(w1) << left << "Amount paid for the stock(s):"<< "$" << right << setw(w2) << stockTotalPurchaseCost<<endl;
	cout << setw(w1) << left << "Stockbroker purchaseo fee:" << "$" << right << setw(w2) << brokerPurchaseCommission<<endl;
	cout << setw(w1) << left << "Total sale of stock(s):" << "$" << right << setw(w2) << totalSalesGain<<endl;
	cout << setw(w1) << left << "Stockbroker sales fee:" << "$" << right << setw(w2) << brokerSalesCommission<<endl;

	cout << setw(w1) << left << "Net gain from stock(s):" << "$" << right << setw(w2) << profit << endl<<endl;
	

	cout << endl << "Alex" << endl;

	return 0;
}