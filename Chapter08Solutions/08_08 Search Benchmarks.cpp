#include <ctime>
#include <iostream>

using namespace std;

void selectionSort(int rand_num_array[], int SIZE);
int linearList(const int rand_num_array[], int SIZE, int user_input);
int binarySearch(const int rand_num_array[], int SIZE, int user_input);

int main() {

	const int SIZE = 20; //size of the array
	int rand_num_array[SIZE];

	int user_input,
		linear,
		binary,
		random_number; // int variable that will hold the value of the random number;

	bool sent;

	srand(time(NULL)); //seeds the rand function to create a more random number

	for (int i = 0; i < SIZE; i++) { // places a random number between 1 and 100,000 into each position in an array.
		rand_num_array[i] = random_number = rand() % 100000 + 1;
	}

	selectionSort(rand_num_array, SIZE); //This function will sort the values in the array from least to greatest


	cout << "The values in the array are: " << endl;

	for (int i = 0; i < SIZE; i++) {
		cout << "value " << i + 1 << ": " << rand_num_array[i] << endl;
	}

	cout << "\nPlease enter one of the numbers in the array.\n";
	do {
		sent = false;
		cout << "NUM: ";
		cin >> user_input;
		for (int i = 0; i < SIZE; i++) {
			if (user_input == rand_num_array[i]) {
				sent = true;
			}
		}
		if (sent == false) {
			cout << "ERROR: Please enter a valid number in the array.\n";
		}
	} while (sent != true);
	linear = linearList(rand_num_array, SIZE, user_input);
	binary = binarySearch(rand_num_array, SIZE, user_input);

	cout << "\nThe number of searches performed to find the value\n";
	cout << "Linear: " << linear << endl;
	cout << "Binary: " << binary << endl;



	return 0;
}
void selectionSort(int rand_num_array[], int SIZE) {
	int startScan, minIndex, minValue;
	for (startScan = 0; startScan < (SIZE - 1); startScan++)
	{
		minIndex = startScan;
		minValue = rand_num_array[startScan];
		for (int index = startScan + 1; index < SIZE; index++)
		{
			if (rand_num_array[index] < minValue)
			{
				minValue = rand_num_array[index];
				minIndex = index;
			}
		}
		rand_num_array[minIndex] = rand_num_array[startScan];
		rand_num_array[startScan] = minValue;
	}
}
int linearList(const int rand_num_array[], int SIZE, int user_input) {
	int index = 0, count = 0;        // Used as a subscript to search array 

	for (int i = 0; i < SIZE; i++) {
		count++;
		if (user_input == rand_num_array[i]) {
			return count;
		}
	}
}

int binarySearch(const int rand_num_array[], int SIZE, int user_input) {


	int first = 0,  // First array element 
		last = SIZE - 1,  // Last array element         
		middle,  // Midpoint of search         
		count = 0;  // counts how many times it took to find the number
	bool found = false;  // Flag 

	while (!found && first <= last) {
		count++;
		middle = (first + last) / 2;  // Calculate midpoint   
		if (rand_num_array[middle] == user_input) {  // If value is found at mid
			found = true;
			return count;
		}
		else if (rand_num_array[middle] > user_input) {// If value is in lower half 
			last = middle - 1;
		}
		else {
			first = middle + 1;  // If value is in upper half 
		}
	}
}