#include <iostream>
using namespace std;

void ascendingSort(int*, int);
void displayArray(int*, int);
int main() {

	int size, total = 0;
	double average;

	int* ip_test_scores;

	cout << "How many test scores?\n";
	cout << "HOW MANY: ";
	cin >> size;
	ip_test_scores = new int[size];
	cout << endl;
	for (int i = 0; i < size; i++) {

		do {
			cout << "TEST SCORE " << i + 1 << ": ";
			cin >> *(ip_test_scores + i);
			if (*(ip_test_scores + i) < 0) {
				cout << "Error: Please enter a positive number.\n";
			}

		} while (*(ip_test_scores + i) < 0);
	}

	ascendingSort(ip_test_scores, size);

	for (int i = 1; i < size; i++) { //The lowest score is located in index 1. We are skipping that index and adding the rest
		total += *(ip_test_scores + i);//this effectively drops the lowest score.
	}

	average = total / (size - 1);

	cout << "The scores in ascending order\n";
	displayArray(ip_test_scores, size);
	cout << endl;
	cout << "Dropped the lowest score.\n";
	cout << "AVERAGE SCORE: " << average << endl;





	return 0;
}

void ascendingSort(int* ip_test_scores, int size) {

	int startScan, minIndex;

	int minValue;

	for (startScan = 0; startScan < (size - 1); startScan++)
	{
		minIndex = startScan; //set to 0 at first, then +1 every iteration
		minValue = *(ip_test_scores + startScan); //The TEST value is set to the integer located in position'startScan'
											  //this will change to the value in the next position every iteration
		for (int index = startScan + 1; index < size; index++)
		{
			if (*(ip_test_scores + index) < minValue) //if the value found is less than the TEST value execute the following
			{
				minValue = *(ip_test_scores + index); //set minValue with the smaller value found in ip_test_scores[index]
				minIndex = index; //set minIndex with the index where the smaller value was located in the array
			}
		}
		//The smalles value has been determined at this point in the search.
		*(ip_test_scores + minIndex) = *(ip_test_scores + startScan); //set the position of where the smallest value was
															  //found with the contents of the beginning search value
		*(ip_test_scores + startScan) = minValue; //place the smallest value found into the first poisitoon being searched in the array
	}
}

void displayArray(int* ip_test_scores, int size) {

	for (int i = 0; i < size; i++) {
		cout << *(ip_test_scores + i) << endl;
	}
}