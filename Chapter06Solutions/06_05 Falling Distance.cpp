#include <iostream>
#include <iomanip>
using namespace std;

// 5. Falling Distance

double fallingDistance(double);
const double gravity = 9.8;

int main() {

	double distance;
	for (int i = 0; i < 10; i++) {
		distance = fallingDistance(i);
		cout << setprecision(2) << fixed << showpoint;
		cout << "After " << i << " second the distance is: " << distance << "(meters)" << endl;
	}

	return 0;

}
double fallingDistance(double time) {
	double distance;

	distance = 0.5*(gravity)*pow(time,2);
	
	
	return distance;
}