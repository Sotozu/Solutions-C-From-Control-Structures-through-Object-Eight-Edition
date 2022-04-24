#include <iostream>
#include "09 SearchableVector.h"
int main() {
	
	SearchableVector<int> vec(10);

	for (int i = 0; i < vec.size(); i++) {
		vec[i] = i*2;
		
	}

	std::cout << vec.findItem(8) << std::endl;


	return 0;
}