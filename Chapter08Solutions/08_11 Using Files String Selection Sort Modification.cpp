#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void selectionSortSmallToLarge(string[], int);
void selectionSortAlphabeticall(string array[], int size);

int main() {
	const int NUM_NAMES = 20;
	ifstream inFile;
	string name_holder;
	inFile.open("names.txt");

	string names[NUM_NAMES];

	for (int i = 0; i < NUM_NAMES; i++) {
		getline(inFile, names[i]);
	}
	inFile.close();

	cout << "NOT SORTED\n\n";

	for (int i = 0; i < NUM_NAMES; i++) {
		cout << names[i] << endl;
	}

	selectionSortSmallToLarge(names, NUM_NAMES);

	cout << "\nSORTED BY SHORTEST NAME FIRST\n\n";

	for (int i = 0; i < NUM_NAMES; i++) {
		cout << names[i] << endl;
	}

	cout << "\nSORTED ALPHABETICALLY\n\n";

	selectionSortAlphabeticall(names, NUM_NAMES);

	for (int i = 0; i < NUM_NAMES; i++) {
		cout << names[i] << endl;
	}

	return 0;
}

void selectionSortSmallToLarge(string array[], int size) {

	int startScan,
		minIndex,
		minValue;

	string shortestWord;

	for (startScan = 0; startScan < (size - 1); startScan++)
	{
		minIndex = startScan;
		minValue = array[startScan].size();
		for (int index = startScan + 1; index < size; index++)
		{
			if (array[index].size() < minValue) //begings with minValue being == to th
			{
				minValue = array[index].size(); //holds the character number of the shortest word in the search
				minIndex = index; //holds the index of where the shortest word is in the search
			}
		}
		shortestWord = array[minIndex];
		array[minIndex] = array[startScan]; //places the name of the first index position into the position where the smallest name was found.
		array[startScan] = shortestWord; //places the shortest name into the position of the first index used in the search
	}
}

void selectionSortAlphabeticall(string array[], int size) {

	int startScan,
		minIndex;

	string minValue;

	string shortestWord;

	for (startScan = 0; startScan < (size - 1); startScan++)
	{
		minIndex = startScan;
		minValue = array[startScan];
		for (int index = startScan + 1; index < size; index++)
		{
			if (array[index] < minValue) //begings with minValue being == to th
			{
				minValue = array[index]; //holds the character number of the shortest word in the search
				minIndex = index; //holds the index of where the shortest word is in the search
			}
		}
		array[minIndex] = array[startScan]; //places the name of the first index position into the position where the smallest name was found.
		array[startScan] = minValue; //places the shortest name into the position of the first index used in the search
	}
}