#include <iostream>
using namespace std;

//4. Calories Burned

int main() {

	double burned_calories = 0;
	double calpmin = 3.6;

	for (int i = 0; i <= 30; i++) {
		burned_calories += calpmin;
		if(i != 0 && i % 5 == 0) {
			cout << "At "<< i <<" minutes you burned: " << burned_calories << " calories." <<endl;
		}
	}
	cout << endl << "Alex" << endl;

	return 0;
}