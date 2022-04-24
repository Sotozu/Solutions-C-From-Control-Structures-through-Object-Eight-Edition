#include <iostream>
#include <iomanip>
using namespace std;

//10.How Much Insurance?

int main() {

	
	float replacementCost, insuranceCost;
	float insurancePercent = 0.80;

	cout << "This program will determine the insurance coverage you should purchase on your property given its replacement cost.\n\n";
	cout << "Please enter the cost of replacing the property: $";
	cin >> replacementCost;
	insuranceCost = replacementCost * insurancePercent;
	cout <<setprecision(2)<<fixed<<"\nThe insurance coverage you should purchase should cover $" << insuranceCost << " in damages.\n";
	
	cout << endl << "Alex" << endl;

	return 0;
}