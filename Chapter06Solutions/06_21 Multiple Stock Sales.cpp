#include <iostream>
using namespace std;


// 21. Multiple Stock Sales

double determineEndResult(double, double, double, double, int);
void gatherStockInfo(double&, double&, double&, double&, int&);
int main() {

	double purchase_price, purchase_commission, selling_price, selling_commission, total = 0, result;
	int number_stock_purchased, different_stock_amount;
	cout << "How many types of stock will you be purchaseing?\n";

	cin >> different_stock_amount;




	for (int i = 0; i < different_stock_amount; i++) {
		cout << "STOCK TYPE: " << i + 1 << endl;
		gatherStockInfo(purchase_price, purchase_commission, selling_price, selling_commission, number_stock_purchased);

		result = determineEndResult(purchase_price, purchase_commission, selling_price, selling_commission, number_stock_purchased);
		total += result;
	}

	cout << "Tranding has totaled in...\n";
	if (total < 0) {
		cout << "NET LOSS: $" << total;
	}
	else if (total > 0) {
		cout << "NET GIAN: $" << total;
	}
	else {
		cout << "NOT GAIN OR LOSS: $" << total;
	}

	return 0;
}

double determineEndResult(double purchase_price, double purchase_commission, double selling_price, double selling_commission, int number_stock_purchased) {
	double result;

	if (purchase_commission > 1) {
		purchase_commission /= 100;
	}
	if (selling_commission > 1) {
		selling_commission /= 100;
	}

	result = ((number_stock_purchased * selling_price) - ((number_stock_purchased * selling_price) * selling_commission)) - ((number_stock_purchased * purchase_price) - ((number_stock_purchased * purchase_price) * purchase_commission));

	return result;
}

void gatherStockInfo(double& purchase_price, double& purchase_commission, double& selling_price, double& selling_commission, int& number_stock_purchased) {
	
	cout << "Please enter the current price of each share of stock.\n";
	cout << "STOCK PRICE: $";
	cin >> purchase_price;

	cout << "Please enter the number of stocks you will purchase.\n";
	cout << "NUMBER OF STOCK: ";
	cin >> number_stock_purchased;

	cout << "What is the purchase commision on the stock.\n";
	cout << "PURCHASE COMMISSION(%): ";
	cin >> purchase_commission;

	cout << "What is the selling price of each share of the stock now?\n";
	cout << "SELLING PRICE: $";
	cin >> selling_price;

	cout << "What is the selling commission of the stock.\n";
	cout << "SELLING COMMISSION(%): ";
	cin >> selling_commission;
	cout << endl;
}
