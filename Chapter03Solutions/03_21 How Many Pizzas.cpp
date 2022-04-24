#include <iostream>
#include <iomanip>
using namespace std;

//21. How Many Pizzas?

int main() {
	
	const float PI = 3.14159;
	const float sliceSize = 14.125;
	float diameter, radius, pizzaArea, numberOfPizzas;
	float slicesPerPizza, numberOfPeople, slicesRequired;
	cout << "This program determines the number of pizzas required if each person eats 4 slices.\n\n";
	cout << "Please enter the number of people attending the party: ";
	cin >> numberOfPeople;
	cout << "What's the diameter of the pizza that you are purchasing (inches): ";
	cin >> diameter;

	radius = diameter / 2;

	pizzaArea = PI * pow(radius, 2);

	slicesPerPizza = pizzaArea / sliceSize;

	slicesRequired = numberOfPeople * 4;

	numberOfPizzas = slicesRequired / slicesPerPizza;
	if (numberOfPizzas < 1) {
		numberOfPizzas = 1;
	}

	cout << setprecision(1)<<fixed;
	cout << "It will take " << numberOfPizzas << " pizza(s) to feed " <<setprecision(0)<< numberOfPeople << " people at the party"
	<< "\nif each pizzas is " <<setprecision(1)<< diameter << " inches in diameter." << endl << endl;
	cout << endl << "Alex" << endl;

	return 0;
}