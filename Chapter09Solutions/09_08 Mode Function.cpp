#include <iostream>
#include <ctime>
#include <vector>
using namespace std;

int modeReturn(int*, int);

int main() {

	srand(time(NULL));

	int mode;

	const int SIZE = 20;

	int* ptr = nullptr;
	ptr = new int[SIZE];

	cout << " The data set\n";
	for (int i = 0; i < SIZE; i++) { //Populate the dynamic array with 20 numbers between 1 and 10
		ptr[i] = rand() % 10 + 1;
		cout << ptr[i] << endl;
	}
	cout << endl;

	mode = modeReturn(ptr, SIZE);

	if (mode == -1) {
		cout << "The data set does not have a mode.\n";
	}
	else {
		cout << "It occurs " << mode << " times in the data set.\n";
	}

	return 0;
}

int modeReturn(int* ptr, int SIZE) {
	vector<int> number_amount;
	vector<int> unique_number;
	int counter;
	int test_number;
	int mode;


	unique_number.push_back(*(ptr + 0));

	bool unique;

	for (int i = 1; i < SIZE; i++) { //will iterate through all values in the *ptr array

		unique = true;

		test_number = *(ptr + i); //The test_number will be set to the next number in the array for each iteration

		for (int j = 0; j < unique_number.size(); j++) { //Will iterate through each number in the vector. WILL GROW EVERYTIME A UNIQUE NUMBER IS ADDED

			if (test_number == unique_number[j]) { //If the test_number is equal to a number in the vecotor then the test_number is NOT unique
				unique = false;
			}
		}
		if (unique == true) { // Once the test_number is determined to be unique execute this

			unique_number.push_back(test_number); //Add the uniuqe test_number to the vector
		}
	}

	for (int i = 0; i < unique_number.size(); i++) { //Will iterate through each value in the unique_numbers vector
		counter = 0;
		for (int j = 0; j < SIZE; j++) { //Will iterate through each value in the ptr array

			if (unique_number[i] == *(ptr + j)) { //If the value of unique_number[i] is equal to the value found in ptr array position j then execute
				counter++;
			}
		}

		number_amount.push_back(counter);
	}


	int startScan, maxIndex, maxValue, max_number = 0;

	int* ptr_placeholder;


	for (startScan = 0; startScan < (number_amount.size() - 1); startScan++)
	{
		maxIndex = startScan;
		maxValue = number_amount[startScan];
		for (int index = startScan + 1; index < number_amount.size(); index++)
		{
			if (number_amount[index] > maxValue)
			{
				maxValue = number_amount[index];
				max_number = unique_number[index]; //holds the number that shows up the least in the array;
				maxIndex = index;
			}
		}
		unique_number[maxIndex] = unique_number[startScan];
		unique_number[startScan] = max_number;

		number_amount[maxIndex] = number_amount[startScan];
		number_amount[startScan] = maxValue;
	}

	for (int i = 1; i < unique_number.size(); i++) {
		if (unique_number[0] == unique_number[i]) {
			return -1;
		}
	}

	cout << "The number " << unique_number[0] << " is the mode.\n";
	return number_amount[0];
}