#include <iostream>
#include <string>
#include <fstream>
#include "10 File Double Space.h"

int main() {

	std::ifstream inputFile;

	inputFile.open("originalFile.txt");

	if (!inputFile) {
		std::cout << "Error Opening Input File!" << std::endl;
	}

	std::ofstream newFile;
	newFile.open("fileDoubleSpace10.txt");

	FileDoubleSpace10 myClass10;

	myClass10.doFilter(inputFile, newFile);

	inputFile.close();
	newFile.close();



	return 0;
}