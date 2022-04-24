#include <iostream>
#include <string>
#include "09 File Uppercase.h"
#include "09 File Encryption.h"
#include "09 File Copy.h"
int main() {

	std::ifstream inputFile;

	inputFile.open("originalFile.txt");
	if (!inputFile) {
		std::cout << "Error Opening Input File!" << std::endl;
	}

	std::ofstream newFile;
	newFile.open("fileUppercase09.txt");
	
	FileUppercase09 myClass0;

	myClass0.doFilter(inputFile, newFile);

	inputFile.close();
	newFile.close();

	inputFile.open("originalFile.txt");
	newFile.open("fileEncryption09.txt");

	FileEncryption09 myClass1(1);

	myClass1.doFilter(inputFile, newFile);

	inputFile.close();
	newFile.close();

	inputFile.open("originalFile.txt");
	newFile.open("fileCopy09.txt");

	FileCopy09 myClass2;

	myClass2.doFilter(inputFile, newFile);


	return 0;
}