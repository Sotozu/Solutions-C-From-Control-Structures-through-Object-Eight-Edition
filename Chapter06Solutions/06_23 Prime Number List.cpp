#include <iostream>
#include <fstream>
using namespace std;


// 23. Prime Number List

bool isPrime(int);

int main() {
	ofstream inFile;
	inFile.open("primelist.txt");

	inFile << "PRIME NUMBERS.\n";
	for (int i = 0; i <= 100; i++) {
		if (isPrime(i) == true) {
			inFile << i<<endl;
		}
	}
	inFile.close();

	cout << endl << "Prime List Report (primelist.txt)." << endl;
	return 0;
}

bool isPrime(int num){
	if (num <= 1) {
		return false;
	}
	for (int i = 2; i < num; i++) {
		if (num % i == 0) {
			return false;
		}
	}
	return true;
}
