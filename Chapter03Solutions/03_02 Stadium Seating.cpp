#include <iostream>
#include <iomanip>
using namespace std;

//2. Stadium Seating

int main() {
		
		float ticketA = 15.00, ticketB = 12.00 , ticketC = 9.00;
		int numA, numB, numC;
		float total;
		cout << "How many Class A tickets were sold ($15.00): ";
		cin >> numA;
		cout << "How many Class B tickets were sold ($12.00): ";
		cin >> numB;
		cout << "How many Class C tickets were sold ($9.00): ";
		cin >> numC;

		cout << "Please press \"Enter\" to calculate the total sales:";
		cin.ignore();
		cin.get();

		total = (ticketA * numA) + (ticketB * numB) + (ticketC * numC);
		cout << "Total sales sum to: $" <<fixed<<showpoint<<setprecision(2)<< total;
		cout << endl << "Alex" << endl;
	return 0;
}