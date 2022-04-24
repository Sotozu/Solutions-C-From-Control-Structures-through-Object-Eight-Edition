#include <iostream>
#include <fstream>
using namespace std;

// 18.Population Bar Chart

int main() {
	ifstream inputFile;
	ofstream outFile;

	int population[6];
	string date[6] = { "1900", "1920", "1940", "1960", "1980", "2000" };
	int bar_size;

	inputFile.open("pop.txt"); // Opens the file pop.txt

	cout << "PRARIEVILLE POPULATION GROWTH\n(each '*' represents 1,000 people)\n";

	for (int i = 0; i < 6; i++) {

		inputFile >> population[i];
		bar_size = population[i] / 1000;
		cout << date[i] << ":";
		for (int j = 0; j < bar_size; j++) {
			cout << "*";
		}
		cout << endl;

	}

	inputFile.close(); // Close the file

	cout << endl << "Alex" << endl;

	return 0;
}