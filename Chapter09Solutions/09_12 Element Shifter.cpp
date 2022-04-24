#include <iostream>
#include <ctime>

int* shiftArray(int my_array[], const int size);

int main() {
	const int size = 10;
	int my_array[size];
	int* expanded_array;
	srand(time(NULL));

	for (int i = 0; i < size; i++) {
		my_array[i] = rand() % 10;
		std::cout << my_array[i] << " ";
	}
	std::cout << std::endl << std::endl;;

	expanded_array = shiftArray(my_array, size);

	std::cout << "The array shifted:" << std::endl;

	bool do_once = true;
	for (int i = 0; i < size + 1; i++) {
		std::cout << *(expanded_array + i) << " ";
	}

	return 0;

}

int* shiftArray(int my_array[], const int size) {
	int* shift_one_array;
	int new_size = size + 1;
	shift_one_array = new int[new_size];

	shift_one_array[0] = 0;

	for (int i = 1; i < new_size; i++) {
		shift_one_array[i] = my_array[i - 1];
	}

	return shift_one_array;
}