#include <ctime>
#include <iostream>

int* expandedArray(int[], const int size);

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

	expanded_array = expandedArray(my_array, size);

	std::cout << "The array expanded:" << std::endl;

	bool do_once = true;
	for (int i = 0; i < size * 2; i++) {
		if (i == size && do_once == true) {
			std::cout << "Newly added positons in the array" << std::endl;
			do_once = false;
		}
		std::cout << *(expanded_array + i) << std::endl;
	}

	return 0;
}


int* expandedArray(int my_array[], const int size) {

	int* expanded_array;
	int doublesize = size * 2;
	expanded_array = new int[doublesize];

	for (int i = 0; i < doublesize; i++) {
		if (i < size) {
			expanded_array[i] = my_array[i];

		}
		else {
			expanded_array[i] = 0;
		}
	}

	return expanded_array;
}

