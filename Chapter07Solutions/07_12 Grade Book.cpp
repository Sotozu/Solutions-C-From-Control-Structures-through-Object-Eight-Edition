#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

const int SIZE = 5;
const int TEST = 4;

double averageGrade(const double[][TEST], int);
char letterGrade(const double[], int SIZE);


int main() {


	string student_name[SIZE];
	char letter_grade[SIZE];
	double test_grades[SIZE][TEST];
	double student_average[SIZE];

	for (int i = 0; i < SIZE; i++) {
		cout << "Enter student " << i + 1 << " name." << endl;
		getline(cin, student_name[i]);

		cout << "Enter " << student_name[i] << "'s test grades (out of 100).\n";
		for (int j = 0; j < TEST; j++) {
			do {
				cout << "Grade " << j + 1 << " : ";
				cin >> test_grades[i][j]; //user enters the test grade
				if (test_grades[i][j] < 0 || test_grades[i][j] > 100) { //checks to see if input is valid
					cout << "ERROR: Please enter a value less than 100 or greater than 0.\n";
				}
			} while (test_grades[i][j] < 0 || test_grades[i][j] > 100);

			cin.get(); // for some reason in the stream there is a null space at the end.
					   // review getline/string/stream to figure this out. for now this is a solution.
		}
		cout << endl;

		student_average[i] = averageGrade(test_grades, SIZE); // gives the average grade for the student
		letter_grade[i] = letterGrade(student_average, SIZE);
	}
	cout << showpoint << fixed << setprecision(2);
	for (int i = 0; i < SIZE; i++) {
		cout << student_name[i] << endl;
		cout << "Average: " << student_average[i] << endl;
		cout << "Letter Grade: " << letter_grade[i] << endl;
		cout << endl;
	}

	return 0;
}

double averageGrade(const double test_grades[][TEST], int SIZE) {
	static int counter; //initialized to 0 when it's a static variable
	double sum = 0;
	double average;
	for (int i = 0; i < TEST; i++) {
		sum += test_grades[counter][i]; //will begin with counter = 0. This is the first student
	}
	counter++; // will have the next student average be calculate when this function is called again
	average = sum / TEST;
	return average;
}

char letterGrade(const double average[], int SIZE) {
	static int counter;
	char letter_grade;

	if (average[counter] >= 90 && average[counter] <= 100) {
		letter_grade = 'A';
	}
	else if (average[counter] >= 80 && average[counter] < 90) {
		letter_grade = 'B';
	}
	else if (average[counter] >= 70 && average[counter] < 80) {
		letter_grade = 'C';
	}
	else if (average[counter] >= 60 && average[counter] < 70) {
		letter_grade = 'D';
	}
	else if (average[counter] < 60) {
		letter_grade = 'F';
	}
	counter++; // will have the next student average be calculate when this function is called again
	return letter_grade;
}
