#include <iostream>
#include <iomanip>
using namespace std;

//6. Mass and Weight

int main() {
		
		cout << "This program calculates the weight of an object given its mass.\n\n";
		float mass,weight;

		cout << "Please enter the mass of the object: ";
		cin >> mass;

		weight = mass * 9.8;

		cout << fixed << showpoint << setprecision(2);

		if (weight < 10)
			cout << "\nSince this object weighs " << weight << " pounds we will consider this light.\n";
		else if (weight > 1000)
			cout << "\nSince this object wieghs " << weight << " pounds we will consider this heavy.\n";
		else
			cout << "\nThe weight of the object is " << weight << " pounds.\n";
		
	return 0;
}