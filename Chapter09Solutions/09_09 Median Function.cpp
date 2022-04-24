#include <iostream>

using namespace std;

double findMedian(int*, int);
int main() {
	const int SIZE = 4;

	int my_array[SIZE];
	int num;

	cout << "Please enter 4 numbers." << endl;
	for (int i = 0; i < SIZE; i++) {
		cout << "NUMBER " << i + 1 << ": "; cin >> num;
		my_array[i] = num;
	}
	num = my_array[0];

	for (int i = 0; i < SIZE; i++) {
		for (int j = i + 1; j < SIZE; j++) {
			if (my_array[j] < my_array[i]) {
				int container = my_array[i];

				my_array[i] = my_array[j];
				my_array[j] = container;
			}
		}
	}
	cout << "------------------------------" << endl;
	cout << "THE MEDIAN IS: " << findMedian(my_array, SIZE);
	return 0; 
}
double findMedian(int* array, int SIZE) {
	double median;
	if (SIZE % 2 == 0) {
		median = (array[(SIZE / 2) - 1] + array[(SIZE / 2)]) / 2.0f;
		std::cout << array[(SIZE / 2) - 1] << std::endl;
		std::cout << array[(SIZE / 2)] << std::endl;

	}
	else {
		median = array[SIZE / 2];
	}
	return median;
}
