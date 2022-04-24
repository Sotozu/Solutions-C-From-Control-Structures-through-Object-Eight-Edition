#include <iostream>
using namespace std;

//1. Miles per Gallon

int main() {

	int maxDistance, tankSizeGallons;
	cout << "Enter the distance that this vehicle travels on a full tank of gas (miles): ";
	cin >> maxDistance;
	cout << "Enter the amount of gallons of gas the vehicle can hold in a full tank of gas: ";
	cin >> tankSizeGallons;
	cout << "This vehicle travels at " << maxDistance / tankSizeGallons << "mpg.";

	cout << endl << "Alex" << endl;
	
	return 0;
}