
#include <iostream>
#include <time.h>
#include "11 SearchableVector.h"

int main() {
	int size = 100;
	std::srand(time(0));
	int index = -1;
	int random = 0;

	SearchableVector<int> vec(size);


		for (int i = 0; i < size; i++) {
			random = rand() % 100;
			vec[i] = random;
		}

		index = vec.sortAndSearch(20);


		for (int i = 0; i < size; i++) {
			std::cout << "INDEX " << i << ": " << vec[i] << std::endl;
		}
		std::cout << std::endl;
		std::cout << "FOUND 20 AT INDEX: " << index << std::endl;


	return 0;
}
