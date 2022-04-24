#include <iostream>
#include <time.h>
#include "10 SortableVector.h"

int main() {
	int size = 10;
	std::srand(time(0));

	int random = 0;

	SortableVector<int> vec(10);


	for (int i = 0; i < size; i++) {
		random = rand() % 100;
		vec[i] = random;
		std::cout << "INDEX " << i <<": " << vec[i] << std::endl;
	}

	std::cout << std::endl;

	vec.sort();
	std::cout << "SORTED" << std::endl;
	std::cout << std::endl;

	for (int i = 0; i < size; i++) {
		std::cout << "INDEX " << i << ": " << vec[i] << std::endl;
	}
	return 0;
}