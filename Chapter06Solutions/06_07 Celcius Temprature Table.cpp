#include <iostream>
#include <iomanip>
using namespace std;

// 7. Celcius Temprature Table

double celcius(int);

int main() {

	cout << "FARENHEIT TO CELCCIUS\n";
	double conversion;
	
	for (int i = 1; i <= 20; i++) {
		cout << showpoint << fixed << setprecision(2);
		conversion = celcius(i);
		cout << "Farenheit = " << setw(6) << left << i << "Celcius = " << conversion << endl;

	}
	return 0;

}

double celcius(int farenheit) {

	double conversion;
	conversion = ((static_cast<double>(5) / 9)*(static_cast<double>(farenheit) - 32));
	return conversion;

}