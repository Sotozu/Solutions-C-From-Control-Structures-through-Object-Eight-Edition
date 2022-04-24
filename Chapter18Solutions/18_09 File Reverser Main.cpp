#include <iostream>
#include <fstream>
#include "09 Dynamic Stack Template.h"

int main() {

	char c;

	Stack09<char> charStack;
	
	std::ifstream inputFile;
	std::ofstream outputFile;

	inputFile.open("09 File Char Text.txt");
	if (!inputFile.is_open()) {
		std::cout << "ERROR: FILE DID NOT OPEN" << std::endl;
		return 0;
	}

	while (inputFile.get(c)) {
		charStack.push(c);
	}
	inputFile.close();

	outputFile.open("09 Output File.txt");

	while (!charStack.isEmpty()) {
		charStack.pop(c);
		outputFile << c;
	}

	return 0;
}