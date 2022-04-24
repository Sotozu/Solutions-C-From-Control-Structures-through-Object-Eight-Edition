#include <iostream>
using namespace std;

//9.How Many Calories?

int main() {

	
	float cookiesEaten, cookiePerBag = 30 ,servingsperBag = 10, caloriesPerServing = 300;
	float caloriePerCookie, totalCalories;
	caloriePerCookie = (servingsperBag / cookiePerBag) * caloriesPerServing;
	cout << "This program calcuates how the total calories intaken if \"x\" cookies are eaten.\n\n";
	cout << "Please enter the amount of cookies you ate: ";
	cin >> cookiesEaten;
	totalCalories = caloriePerCookie * cookiesEaten;
	cout << "\nThe amount of calories consumed given that you ate " << cookiesEaten << " cookies is " << totalCalories<<".\n";
	
	cout << endl << "Alex" << endl;

	return 0;
}