#include <iostream>
using namespace std;

int main() {
	const int SIZE = 10;
	int counter = 1;
	int max, min;
	int my_array[SIZE];

	cout << "Please enter " << SIZE << " integers.\n";

	for (int& val : my_array) {
		cout << "Value " << counter << ": ";
		cin >> val;
		counter++;
	}

	max = my_array[0];
	min = my_array[0];

	for (int val : my_array) {
		if (max < val) {
			max = val;
		}
		if (min > val) {
			min = val;
		}
	}

	cout << "The max is: " << max << endl;
	cout << "The min is: " << min << endl;

	return 0;
}