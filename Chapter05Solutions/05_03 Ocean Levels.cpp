#include <iostream>
using namespace std;

//3. Ocean Levels

int main() {

	double rise = 1.5;
	cout << "The following is the rise in sea level every year from recording.\n";
	for (int i = 1; i <= 25; i++) {
		cout << "Year " << i << ": " << rise * i << " millimeters total\n";
	}
	cout << endl << "Alex" << endl;

	return 0;
}