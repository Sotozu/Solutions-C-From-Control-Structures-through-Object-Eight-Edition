#include <iostream>
#include <iomanip>

#include "07 TestScores Class.h"

using namespace std;

int main() {
	const int SIZE = 3;
	TestScores student;
	int test_num;
	double score;

	cout << "ENTER TEST SCORES.\n" << endl;
	for (int i = 0; i < SIZE; i++) {
		cout << "TEST SCORE " << i + 1  << ": "; cin >> score;
		student.setScore(i, score);
	}

	cout << "TEST SCORES FINISHED\n" << endl;
	for (int i = 0; i < SIZE; i++) {
		cout << "TEST SCORE " << i+1 <<": " <<student.getScore(i) << endl;
	}

	cout << fixed << setprecision(2) << showpoint;
	cout << "AVERAGE SCORE: " << student.getAverge() << endl;
	cout << endl;

	cout << "Which test would you like to change?\n";
	cout << "Test number: "; cin >> test_num;
	cout << "Score: "; cin >> score;

	student.setScore(test_num, score);
	cout << endl;
	cout << "Which test woud you like to view?\n";
	cout << "Test number: "; cin >> test_num;
	cout << student.getScore(test_num-1) << endl;
	cout << endl;

	cout << "NEW AVERAGE: " << student.getAverge();

	return 0;
}
