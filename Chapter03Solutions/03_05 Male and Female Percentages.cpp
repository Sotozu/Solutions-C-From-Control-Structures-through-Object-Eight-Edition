#include <iostream>
#include <iomanip>
using namespace std;

//5. Male and Female Percentages

int main() {
	int males, females;
	float percMale, percFemale;
	cout << "This program computes the percentage of females and males in a class.\n";
	cout << "Enter the number of males in the classroom: ";
	cin >> males;
	cout << "Enter the number of females in the classroom: ";
	cin >> females;

	percMale = (males / (static_cast<float>(males) + static_cast<float>(females)))*100;
	percFemale = (females / (static_cast<float>(males) + static_cast<float>(females)))*100;

	cout << setprecision(2) << fixed << showpoint;
	cout << "The percent of females in the class room is %" << percFemale << " and the percent of males is %" << percMale << ".\n";
	
	cout << endl << "Alex" << endl;


	return 0;
}