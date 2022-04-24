#include <iostream>
#include <string>
#include <vector>

using namespace std;

int binarySearch(const string[], string, int);
void selectionSort(string[], int);
int main() {
	const int NUM_NAMES = 20;
	int position;
	string user_input;
	string names[NUM_NAMES] = { "Collins, Bill", "Smith, Bart", "Allen, Jim",
								  "Griffin, Jim", "Stamey, Marty", "Rose, Geri",
							 "Taylor, Terri", "Johnson, Jill",
								  "Allison, Jeff", "Looney, Joe", "Wolfe, Bill",
							"James, Jean", "Weaver, Jim", "Pore, Bob",
							"Rutherford, Greg", "Javens, Renee",
							"Harrison, Rose", "Setzer, Cathy",
							"Pike, Gordon", "Holland, Beth" };

	cout << "NOT SORTED\n\n";

	for (int i = 0; i < NUM_NAMES; i++) {
		cout << names[i] << endl;
	}

	selectionSort(names, NUM_NAMES);

	cout << "\nSORTED BY SHORTEST NAME FIRST\n\n";
	for (int i = 0; i < NUM_NAMES; i++) {
		cout << names[i] << endl;
	}

	cout << "Please enter the name in the following format: \"LAST, FIRST\"\n";
	cout << "ENTER NAME: ";
	getline(cin, user_input);

	position = binarySearch(names, user_input, NUM_NAMES);

	if (position == -1) {
		cout << "\nThe name is not found\n";
	}
	else {
		cout << "\nThere is a match for " << names[position] << ".\n";
	}


	return 0;
}

void selectionSort(string array[], int size) {

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

int binarySearch(const string array[], string user_input, int SIZE) {

	vector<string> size_match;

	int first = 0,  // First array element 
		last = SIZE - 1,  // Last array element         
		middle,  // Midpoint of search         
		position = -1;  // Position of search value 
	bool found = false;  // Flag 

	while (!found && first <= last) {
		middle = (first + last) / 2;  // Calculate midpoint   
		cout << array[middle] << endl;
		if (array[middle] == user_input) {  // If value is found at mid
			found = true;
			position = middle;
		}
		else if (array[middle] > user_input) {// If value is in lower half 
			last = middle - 1;
		}
		else {
			first = middle + 1;  // If value is in upper half 
		}
	}
	return position;
}