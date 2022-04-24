#include <iostream>
#include <iomanip>
using namespace std;

//18. Fat Gram Calcualtor

int main() {
	double calories, fat_grams, percent_fat, fat_calories;
	bool check,check2;

		do {
			check = true;
			check2 = true;
			cout << "Please enter the number of calories in the food: ";
			cin >> calories;

			cout << "\nPlease enter the number of grams of fat in the food: ";
			cin >> fat_grams;

			if (calories <= 0 || fat_grams <= 0) {
				cout << "\nPlease re-enter values greater than 0 for both calories and grams of fat.\n";
				check = false;
				check2 = false;
			}
			if (check2 == true) {
				if(fat_grams*9 > calories){
					cout << "\nPlease re-enter grams of fat or calories.\nThe grams of fat in calories was greater than the calories total.\n";
					check = false;
				}

			}
		} while (check == false);

		fat_calories = fat_grams * 9;
		percent_fat = fat_calories / calories;

		cout << fixed << setprecision(2);
		cout << "The percentage of calories coming from grams of fat in the food item is " << percent_fat * 100 << " %.";
		if (percent_fat < .30) {
			cout << "The food item is low fat because it's fat calorie count is 30% or less than the total calorie count.";
		}

	return 0;
}