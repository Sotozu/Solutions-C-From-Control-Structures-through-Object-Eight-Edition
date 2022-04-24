#include <iostream>

using namespace std;

void selectionSort(int[], int); //The array will be changed in main because of pass by reference
int binarySearch(const int[], int, int); //finds the lottery number

int main() {
	int match_index;

	const int SIZE = 18;

	int user_input;

	int account_number[SIZE] = { 5658845,  4520125,  7895122,  8777541,  8451277,  1302850,
								8080152,  4562555,  5552012,  5050552,  7825877,  1250255,
								1005231,  6545231,  3852085,  7576651,  7881200,  4581002 };


	selectionSort(account_number, SIZE);

	cout << "Please enter the 'Account Number'.\n";
	cout << "ACCOUNT NUMBER: ";
	cin >> user_input;

	match_index = binarySearch(account_number, user_input, SIZE);

	if (match_index == -1) {
		cout << "The number is invalid.\n";
	}
	else {
		cout << "The account number " << account_number[match_index] << " is a match!\n";
	}

	return 0;
}

bool checkUserInput(int account_number[], int user_input, int SIZE) {
	bool match;
	for (int i = 0; i < SIZE; i++) {
		if (user_input == account_number[i]) {
			return true;
		}
	}
	return false;
}
int binarySearch(const int user_numbers[], int user_input, int SIZE) {

	int first = 0,  // First array element 
		last = SIZE - 1,  // Last array element         
		middle,  // Midpoint of search         
		position = -1;  // Position of search value 
	bool found = false;  // Flag 

	while (!found && first <= last) {
		middle = (first + last) / 2;  // Calculate midpoint         
		if (user_numbers[middle] == user_input) {  // If value is found at mid
			found = true;
			position = middle;
		}
		else if (user_numbers[middle] > user_input) {// If value is in lower half 
			last = middle - 1;
		}
		else {
			first = middle + 1;  // If value is in upper half 
		}
	}
	return position;
}

void selectionSort(int account_numbers[], int SIZE) {
	int startScan, //For every iteration of the seatch this variable will be set to a starting position
		minIndex, // The min index set at the beginning for each search 
		minValue; // The min value ser at the beginnning for each search
	for (startScan = 0; startScan < (SIZE - 1); startScan++)
	{
		minIndex = startScan;
		minValue = account_numbers[startScan];
		for (int index = startScan + 1; index < SIZE; index++)
		{
			if (account_numbers[index] < minValue)
			{
				minValue = account_numbers[index]; //new lowest value is found AND set to minValue
				minIndex = index; // location of lowest value is found and set to minIndex
			}
		}

		//The smallest value and it's index have at this point been found within the range of the search.

		account_numbers[minIndex] = account_numbers[startScan]; //places the value of the first position in the index search
														  //to the position of where the smalles value was found.

		account_numbers[startScan] = minValue;				  //places the min value found in the range of values searched 
														  //into the first position in the search.

	}
	//The loop will now repeat BUT at a starting search position of + 1 from the previous loop.
	//At the end of that loop the lowest number will be placed at the begging position of that search.
}