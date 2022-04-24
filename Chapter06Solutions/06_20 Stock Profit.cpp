#include <iostream>
using namespace std;



// 20. Stock Profit

void determineEndResult(double, double, double, double, int);
int main() {
	double purchase_price, purchase_commission, selling_price, selling_commission;
	int number_stock_purchacsed;

	cout << "Please enter the current price of each share of stock.\n";
	cout << "STOCK PRICE: $";
	cin >> purchase_price;

	cout << "Please enter the number of stocks you will purchase.\n";
	cout << "NUMBER OF STOCK: ";
	cin >> number_stock_purchacsed;

	cout << "What is the purchase commision on the stock.\n";
	cout << "PURCHASE COMMISSION(%): ";
	cin >> purchase_commission;

	cout << "What is the selling price of each share of the stock now?\n";
	cout << "SELLING PRICE: $";
	cin >> selling_price;

	cout << "What is the selling commission of the stock.\n";
	cout << "SELLING COMMISSION(%): ";
	cin >> selling_commission;

	determineEndResult(purchase_price, purchase_commission, selling_price, selling_commission, number_stock_purchacsed);

	return 0;
}
void determineEndResult(double purchase_price, double purchase_commission, double selling_price, double selling_commission, int number_stock_purchased) {
	double result;

	if (purchase_commission > 1) {
		purchase_commission /= 100;
	}
	if (selling_commission > 1) {
		selling_commission /= 100;
	}

	result = ((number_stock_purchased * selling_price) - ((number_stock_purchased * selling_price) * selling_commission)) - ((number_stock_purchased * purchase_price) - ((number_stock_purchased * purchase_price) * purchase_commission));

	cout << "Tranding has resulted in...\n";
	if (result < 0) {
		cout << "NET LOSS: $" << result;
	}
	else if (result > 0) {
		cout << "NET GIAN: $" << result;
	}
	else {
		cout << "NOT GAIN OR LOSS: $" << result;
	}
}
