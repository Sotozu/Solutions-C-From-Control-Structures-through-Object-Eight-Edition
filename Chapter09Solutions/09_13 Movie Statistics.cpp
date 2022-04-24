#include <iostream>
#include <vector>

using namespace std;

int modeReturn(int*, int);
double findMedian(int*, int);

int main() {
	int size;
	int mode;
	double median;
	std::cout << "How many students were surveyed?" << std::endl;
	std::cout << "NUMBER OF STUDENTS: "; std::cin >> size;

	int* my_array = new int[size];

	std::cout << std::endl;
	std::cout << "How many movies did each student watch?" << std::endl;
	int movie_num;
	for (int i = 0; i < size; i++) {
		do {
			std::cout << "STUDENT " << i + 1 << ": "; std::cin >> movie_num;
			if (movie_num < 0) {
				std::cout << "ERROR: PLEASE ENTER A NON NEGATIVE NUMBER." << std::endl;
			}
		} while (movie_num < 0);
		my_array[i] = movie_num;
	}

	mode = modeReturn(my_array, size);
	median = findMedian(my_array, size);
	if (mode == -1) {
		std::cout << "The data set does not have a mode.\n";
	}
	else {
		std::cout << "THE MODE IS: " << mode << std::endl;
	}
	std::cout << "THE MEDIAN IS: " << median << std::endl;

	return 0;
}

int modeReturn(int* ptr, int SIZE) {
	std::vector<int> number_amount;
	std::vector<int> unique_number;
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

	//for (int i = 0; i < unique_number.size(); i++) {
	//	std::cout << unique_number[i] << " ";
	//}


	for (int i = 0; i < unique_number.size(); i++) { //Will iterate through each value in the unique_numbers vector
		counter = 0;
		for (int j = 0; j < SIZE; j++) { //Will iterate through each value in the ptr array

			if (unique_number[i] == *(ptr + j)) { //If the value of unique_number[i] is equal to the value found in ptr array position j then execute
				counter++;
			}
		}

		number_amount.push_back(counter);
	}
	int maxIndex = 0,
		times_number_appears_max = number_amount[0];
	mode = 0;


	//within the list of times a number appears it finds the one that appeared the most (the greatest number)
	for (int i = 1; i < number_amount.size(); i++) {
		if (times_number_appears_max < number_amount[i]) {
			times_number_appears_max = number_amount[i];
			maxIndex = i;
		}
	}
	//Now we run throug the list again and try to find if it repeats. IF IT DOES THEN WE DONT HAVE A MODE
	for (int i = 0; i < number_amount.size(); i++) {
		//Will compare all numbers except it's own by skipping it's index position
		if (times_number_appears_max == number_amount[i] && i != maxIndex) {
			return -1;
		}
	}

	mode = unique_number[maxIndex];
	return mode;

}

double findMedian(int* array, int SIZE) {
	double median;
	if (SIZE % 2 == 0) {
		median = (array[(SIZE / 2) - 1] + array[(SIZE / 2)]) / 2.0f;
		std::cout << array[(SIZE / 2) - 1] << std::endl;
		std::cout << array[(SIZE / 2)] << std::endl;

	}
	else {
		median = array[SIZE / 2];
	}
	return median;
}