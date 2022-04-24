#include <iostream>
#include <iomanip>
using namespace std;

//12.Celsius to Farenheit

int main() {

	
	float farenheit, celsius;
	cout << "This program converts celsius into farenheit.\n\n";
	cout << "Please enter the celsius value: ";
	cin >> celsius;
	farenheit = ((9 / 5) * celsius) + 32;
	cout <<setprecision(2)<<fixed<<"\nThe celsius value of " << celsius << " in farenheit is " << farenheit << ".\n";
	 cout << endl << "Alex" << endl;
	return 0;
}