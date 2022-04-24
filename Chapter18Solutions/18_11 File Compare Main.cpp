#include <iostream>
#include <fstream>

#include "11 Dynamic Queue Template.h"

int main() {

	char c1;
	char c2;

	DynamicQueueTemplate11<char> Queue1;
	DynamicQueueTemplate11<char> Queue2;

	std::ifstream inputFile;
	inputFile.open("11 File1 Text Content.txt");


	if (!inputFile.is_open()) {
		std::cout << "ERROR: FILE DID NOT OPEN" << std::endl;
		return 0;
	}
	//Place char data from FIRST file into FIRST Queue
	while (inputFile.get(c1)) {
		Queue1.enqueue(c1);
	}
	inputFile.close();


	inputFile.open("11 File2 Text Content.txt");

	if (!inputFile.is_open()) {
		std::cout << "ERROR: FILE DID NOT OPEN" << std::endl;
		return 0;
	}

	//Place char data from SECOND file into SECOND Queue
	while (inputFile.get(c2)) {
		Queue2.enqueue(c2);
	}
	inputFile.close();

	//CHECK 1
	//If the files are of different sizes then they are not the same
	if (Queue1.currentSize() != Queue2.currentSize()) {
		std::cout << "The files are not the same." << std::endl;
		return 0;
	}

	//CHECK 2
	//Compare the contents of each Queue to determine if they are the same
	while (!Queue1.isEmpty() && !Queue2.isEmpty()) {
		Queue1.dequeue(c1);
		Queue2.dequeue(c2);
		if (c1 != c2) {
			std::cout << "The files are not the same." << std::endl;
			return 0;
		}
	}

	//PASS
	std::cout << "THE FILES ARE THE SAME!" << std::endl;


	return 0;
}