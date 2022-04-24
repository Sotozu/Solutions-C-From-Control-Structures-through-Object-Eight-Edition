#include <iostream>
#include <iomanip>
using namespace std;

//5. Body Mass Index

int main() {
	
	cout << "A program that calculates and displays a person’s body mass index (BMI).\n\n";
	float pounds, inches, bmi;
	cout << "Please enter your weight in pounds: ";
	cin >> pounds;
	cout << "Please enter your height in inches: ";
	cin >> inches;

	bmi = pounds * (703/(pow(inches, 2)));
	cout << fixed << showpoint << setprecision(2);

		if (bmi < 18.5) {
			cout << "\nYour BMI is: " << bmi << endl;
			cout << "Uh oh! Eat up you're underweight!\n";
		}
		else if (bmi > 25) {
			cout << "\nYour BMI is: " << bmi << endl;
			cout << "Uh oh! Stop eating you're overweight!\n";
		}
		else {
			cout << "\nYour BMI is: " << bmi << endl;
			cout << "You are within a healthy range!\n";
		}
		

	return 0;
}