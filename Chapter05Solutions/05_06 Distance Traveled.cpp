#include <iostream>
using namespace std;

// 6. Distance Traveled

int main() {


		double speed, time, distance;
		cout << "Please enter the speed of the vehicle in (mph): ";
		cin >> speed;
		while (speed <= 0) {
			cout << "\nPlease enter a positive rate of speed: ";
			cin >> speed;
		}
		cout << "\nPlease enter the amount of time travled in (hrs): ";
		cin >> time;
		while (time <= 1) {
			cout << "\nPlease enter hours greater than 1: ";
			cin >> time;
		}
		for (int i = 0; i <= time; i++) {
			distance = speed * i;
			cout << "The vehicle has travled " << distance << " miles at the time of " << i << " hour." << endl;
		}
		cout << endl << "Alex" << endl;

		return 0;
}