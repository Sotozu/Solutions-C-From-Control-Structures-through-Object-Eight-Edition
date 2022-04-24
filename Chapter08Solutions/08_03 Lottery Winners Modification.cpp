#include <iostream>

using namespace std;

void selectionSort(int[], int); //The array will be changed in main because of pass by reference
int binarySearch(const int[], int, int); //finds the lottery number
int lotteryNumber(); // asks the user for a lottery number

int main() {
	const int SIZE = 10;
	int winning_index;
	int user_numbers[SIZE] = { 13579, 26791,  26792,  33445,  55555,
							62483, 77777,  79422,  85647,  93121 };
	int lottery_number;
	for (int i = 0; i < SIZE; i++) {
		cout << user_numbers[i] << endl;
	}
	selectionSort(user_numbers, SIZE);
	cout << "\nSORTED\n";
	for (int i = 0; i < SIZE; i++) {
		cout << user_numbers[i] << endl;
	}
	cout << "Please enter the 5 digit winning lottery number.\n";
	lottery_number = lotteryNumber();

	winning_index = binarySearch(user_numbers, SIZE, lottery_number);

	if (winning_index == -1) {
		cout << "You don't have a matching ticket.\n";
	}
	else {
		cout << "The ticket " << user_numbers[winning_index] << " is a winning a ticket!\n";
	}

	return 0;
}

int binarySearch(const int user_numbers[], int SIZE, int lottery_number) {

	int first = 0,  // First array element 
		last = SIZE - 1,  // Last array element         
		middle,  // Midpoint of search         
		position = -1;  // Position of search value 
	bool found = false;  // Flag 

	while (!found && first <= last) {
		middle = (first + last) / 2;  // Calculate midpoint         
		if (user_numbers[middle] == lottery_number) {  // If value is found at mid
			found = true;
			position = middle;
		}
		else if (user_numbers[middle] > lottery_number) {// If value is in lower half 
			last = middle - 1;
		}
		else {
			first = middle + 1;  // If value is in upper half 
		}
	}
	return position;
}

void selectionSort(int user_numbers[], int SIZE) {
	int startScan, //For every iteration of the seatch this variable will be set to a starting position
		minIndex, // The min index set at the beginning for each search 
		minValue; // The min value ser at the beginnning for each search
	for (startScan = 0; startScan < (SIZE - 1); startScan++)
	{
		minIndex = startScan;
		minValue = user_numbers[startScan];
		for (int index = startScan + 1; index < SIZE; index++)
		{
			if (user_numbers[index] < minValue)
			{
				minValue = user_numbers[index]; //new lowest value is found AND set to minValue
				minIndex = index; // location of lowest value is found and set to minIndex
			}
		}

		//The smallest value and it's index have at this point been found within the range of the search.

		user_numbers[minIndex] = user_numbers[startScan]; //places the value of the first position in the index search
														  //to the position of where the smalles value was found.

		user_numbers[startScan] = minValue;				  //places the min value found in the range of values searched 
														  //into the first position in the search.

	}
	//The loop will now repeat BUT at a starting search position of + 1 from the previous loop.
	//At the end of that loop the lowest number will be placed at the begging position of that search.
}

int lotteryNumber() {
	int lottery_number;
	do {
		cout << "Winning Lottery Number: ";
		cin >> lottery_number;
		if (lottery_number < 10000 || lottery_number > 99999) {
			cout << "ERROR: Please enter a 5 digit number.\n";
		}
	} while (lottery_number < 10000 || lottery_number > 99999);
	return lottery_number;
}
