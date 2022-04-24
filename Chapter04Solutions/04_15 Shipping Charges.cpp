#include <iostream>
#include <iomanip>
using namespace std;

//15. Shipping Charges

int main() {
		
	cout << "This program asks for the weight of the package and the distance it is to be shipped, and then displays the charges." << endl;

	float weight, distance, charge;

	do
	{
		cout <<"Please enter the weight of the package in kg: ";
		cin >> weight;
		if (weight <= 0 || weight > 20)
		{

			cout << "\n\nError: The weight must be greater than 0kg or less 20 kg.\n";
		}
	} while (weight <= 0 || weight > 20);

	do
	{
		cout << "Please enter the distance of the package in  miles: ";
		cin >> distance;
		if (distance < 10 || distance > 3000)
		{

			cout << "\n\nError: The distance must be greater than 10 miles or less 3000 miles.\n";
		}
	} while (distance <= 10 || distance > 3000);

	if (weight <= 2 && weight > 0 ){

		charge = 1.10 * (distance/500);

		}
	else if (weight <= 6  && weight > 2) {

		charge = 2.20 * (distance / 500);
	}
	else if (weight <= 10 && weight > 6) {

		charge = 3.70 * (distance / 500);
	}
	else if (weight <= 20 && weight > 10) {

		charge = 4.80 * (distance / 500);
	}

	cout << fixed << setprecision(2);
	cout << "The charge for the package given the distance and weight is $" << charge;
	
	return 0;
}