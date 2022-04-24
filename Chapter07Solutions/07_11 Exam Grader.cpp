#include <iostream>
#include <vector>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {
	const int SIZE = 20;

	double percent;

	char correct_answers[SIZE];
	char student_answers[SIZE];

	vector<char> correct_answer_index;
	vector<char> incorrect_answer_index;

	ifstream inFile; //reading in from a file

	inFile.open("CorrectAnswers.txt");
	if (!inFile.is_open()) { //If the file fails to open then then execute this failure function
		exit(EXIT_FAILURE);
	}
	for (int i = 0; i < SIZE; i++) {
		inFile >> correct_answers[i];
	}
	inFile.close();

	inFile.open("StudentAnswers.txt");
	if (!inFile.is_open()) {
		exit(EXIT_FAILURE);
	}
	for (int i = 0; i < SIZE; i++) {
		inFile >> student_answers[i];
	}
	inFile.close();

	for (int i = 0; i < SIZE; i++) {
		if (correct_answers[i] == student_answers[i]) {
			correct_answer_index.push_back(i); // will hold the index of the problem correctly answered
		}
		if (correct_answers[i] != student_answers[i]) {
			incorrect_answer_index.push_back(i); // will hold the index of the problem incorrectly answered
		}
	}

	cout << "QUESTIONS MISSED\n";
	for (int i = 0; i < incorrect_answer_index.size(); i++) {
		cout << "Missed problem " << incorrect_answer_index[i] + 1 << endl;
		cout << "Student answered: " << student_answers[incorrect_answer_index[i]] << "'" << endl;
		cout << "Correct answer: '" << correct_answers[incorrect_answer_index[i]] << "'" << endl;
		cout << endl;
	}

	cout << "TOTAL QUESTIONS MISSED: " << incorrect_answer_index.size() << endl;

	percent = (static_cast<double>(correct_answer_index.size()) / SIZE) * 100;
	cout << showpoint << fixed << setprecision(2);
	cout << "PERCENT OF QUESTIONS ANSWERED CORRECTLY: " << percent << "%\n";

	if (percent > 70.00) {
		cout << "STUDENT PASSED THE EXAM!\n";
	}
	else {
		cout << "STUDENT FAILED THE EXAM!\n";
	}

	return 0;
}