#include <iostream>
#include <string>
using namespace std;

void ascendingSort(int*, string*, int);
void displayArray(int*, string*, int);
int main() {

	int size, total = 0;
	double average;

	int* ip_test_scores; //integer pointer
	string* sp_student_names; //string pointer

	cout << "How many test scores?\n";
	cout << "HOW MANY: ";
	cin >> size;

	sp_student_names = new string[size];
	ip_test_scores = new int[size];

	cout << endl;
	for (int i = 0; i < size; i++) {
		cout << "Student " << i + 1 << " name: ";
		cin.get();
		getline(cin, sp_student_names[i]);


		do {
			cout << "TEST SCORE " << i + 1 << ": ";
			cin >> *(ip_test_scores + i);
			if (*(ip_test_scores + i) < 0) {
				cout << "Error: Please enter a positive number.\n";
			}

		} while (*(ip_test_scores + i) < 0);
		cout << endl;
	}
	ascendingSort(ip_test_scores, sp_student_names, size);

	for (int i = 1; i < size; i++) { //The lowest score is located in index 1. We are skipping that index and adding the rest
		total += *(ip_test_scores + i);//this effectively drops the lowest score.
	}

	average = total / (size - 1);
	cout << "The scores in ascending order\n";
	displayArray(ip_test_scores, sp_student_names, size);
	cout << endl;
	cout << "Dropped the lowest score.\n";
	cout << "AVERAGE SCORE: " << average << endl;
	return 0;
}

void ascendingSort(int* ip_test_scores, string* sp_student_names, int size) {

	int startScan, minIndex;

	int minValue;

	string min_student;

	for (startScan = 0; startScan < (size - 1); startScan++)
	{
		minIndex = startScan; //set to 0 at first, then +1 every iteration
		minValue = *(ip_test_scores + startScan); //The TEST value is set to the integer located in position'startScan'
											  //this will change to the value in the next position every iteration
		min_student = *(sp_student_names + startScan);

		for (int index = startScan + 1; index < size; index++)
		{
			if (*(ip_test_scores + index) < minValue) //if the value found is less than the TEST value execute the following
			{
				min_student = *(sp_student_names + index);
				minValue = *(ip_test_scores + index); //set minValue with the smaller value found in ip_test_scores[index]
				minIndex = index; //set minIndex with the index where the smaller value was located in the array

			}
		}
		//The smalles value has been determined at this point in the search.
		*(ip_test_scores + minIndex) = *(ip_test_scores + startScan); //set the position of where the smallest value was
															  //found with the contents of the beginning search value
		*(ip_test_scores + startScan) = minValue; //place the smallest value found into the first poisitoon being searched in the array

		*(sp_student_names + minIndex) = *(sp_student_names + startScan);
		*(sp_student_names + startScan) = min_student;
	}
}

void displayArray(int* ip_test_scores, string* sp_student_names, int size) {

	for (int i = 0; i < size; i++) {
		cout << *(sp_student_names + i) << ": ";
		cout << *(ip_test_scores + i) << endl;
	}
}
