/*Chapter 14 presented an IntArray class that dynamically creates an array of integers and performs bounds checking on the array. If an invalid subscript is used with 
the class, it displays an error message and aborts the program. Modify the class so it 
throws an exception instead. */

#include <iostream>
#include "06 IntArray.h"
int main() {
	const int SIZE = 10;

	IntArray arr(SIZE);

	for (int x = 0; x < SIZE; x++) {
		arr[x];
	}

	try {
		arr[SIZE + 1] = 0;
	}
	catch (IntArray::SubOutRange) {
		std::cout << "ERROR: subscription out of range!" << std::endl;
	}

	return 0;
}