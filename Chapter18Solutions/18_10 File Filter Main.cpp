#include <iostream>
#include <fstream>
#include "10 Dynamic Queue Template.h"
int main() {
	char c;
	DynamicQueueTemplate10<char> charQue;

	std::ifstream inputFile;
	std::ofstream outputFile;
	inputFile.open("10 File Char Text.txt");

	if (!inputFile.is_open()) {
		std::cout << "ERROR: FILE DID NOT OPEN" << std::endl;
		return 0;
	}

	while (inputFile.get(c)) {
		charQue.enqueue(c);
	}
	inputFile.close();

	outputFile.open("10 Output File.txt");

	while (!charQue.isEmpty()) {
		charQue.dequeue(c);
		c = toupper(c);
		outputFile << c;
	}
	outputFile.close();

	return 0;
}
