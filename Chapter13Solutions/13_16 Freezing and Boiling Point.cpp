#include <iostream>

#include "16 Freezing and Boiling Point.h"

using namespace std;

int main() {
	float temp;
	cout << "Please enter the temperature of the room.\n";
	cout << "TEMP: "; cin >> temp;
	FBPoint liquid(temp);
	cout << endl;
	cout << "AT TEMPREATURE " << temp << " ..." << endl;
	if (liquid.isEthylBoiling()) {
		cout << "Ethyl Boils" << endl;
	}
	if (liquid.isEthylFreezing()) {
		cout << "Ethyl Freezes" << endl;
	}
	if (liquid.isOxygenBoiling()) {
		cout << "Oxygen Boils" << endl;
	}
	if (liquid.isOxygenFreezing()) {
		cout << "Oxygen Freezes" << endl;
	}
	if (liquid.isWaterBoiling()) {
		cout << "Water Boils" << endl;
	}
	if (liquid.isWaterFreezing()) {
		cout << "Water Freezes" << endl;
	}
	return 0;
}
