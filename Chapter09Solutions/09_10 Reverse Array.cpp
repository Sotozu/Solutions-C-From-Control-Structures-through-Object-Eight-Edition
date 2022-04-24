#include <iostream>
#include <ctime>

int* reverseArray(int[], const int size);
int main() {

	const int size = 10;
	int my_array[size];
	int num;
	int* backward_array;
	srand(time(NULL));

	for (int i = 0; i < size; i++) {
		my_array[i] = rand() % 10;
		std::cout << my_array[i] << " ";
	}
	std::cout << std::endl << std::endl;;

	backward_array = reverseArray(my_array, size);

	std::cout << "The array backwards:" << std::endl;
	for (int i = 0; i < size; i++) {
		std::cout << *(backward_array + i) << " ";
	}

	return 0;
}


int* reverseArray(int my_array[], const int size) {
	int counter = 0;

	int* backward_array;

	backward_array = new int[size];

	for (int i = size; i > 0; i--) {

		backward_array[counter] = my_array[i - 1];
		counter++;
	}

	return backward_array;
}