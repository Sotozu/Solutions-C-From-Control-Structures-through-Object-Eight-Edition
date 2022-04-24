#include <iostream>
using namespace std;

//8. How Many Widgets

int main() {

	
	float widgetWeight= 12.5;
	float paletWeight;
	float numberOfWidgets;

	cout <<"This program determines how many widgets are in a pallet given the pallets weight.\nEach widget weighs 12.5 pounds.\n\n";
	cout <<"Please enter the weight of the pallet (pounds): ";
	cin >> paletWeight;

	numberOfWidgets = paletWeight / widgetWeight;

	cout << "The amount of widgets in the pallet is roughly " << numberOfWidgets << ".";

	cout << endl << "Alex" << endl;
	
	return 0;
}