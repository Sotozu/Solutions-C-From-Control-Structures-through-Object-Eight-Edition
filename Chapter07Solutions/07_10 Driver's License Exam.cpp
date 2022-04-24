#include <iostream>
#include <vector>

using namespace std;

bool answerCheck(char);
int main() {
	const int SIZE = 20;
	char student_choice;
	bool check;
	vector<int> incorrect_answer_index;
	vector<int> correct_answer_index;
	int total_correct = 0, total_incorrect = 0;
	char answer[SIZE] = { 'A', 'D', 'B', 'B', 'C', 'B', 'A', 'B', 'C', 'D', 'A',
	'C', 'D', 'B', 'D', 'C', 'C', 'A', 'D', 'B' };

	cout << "Please enter the students 20 answers on the test.\n";
	cout << "The possible answers are 'A', 'B', 'C' and 'D'.\n";

	for (int i = 0; i < SIZE; i++) {
		do {
			check = true;
			cout << "Student answer " << i + 1 << ": ";
			cin >> student_choice;
			check = answerCheck(student_choice);
		} while (check != true);

		if (student_choice == answer[i]) {
			correct_answer_index.push_back(i);
		}
		else {
			incorrect_answer_index.push_back(i);
		}
	}

	cout << endl;
	cout << "Total Correctly Answered: " << correct_answer_index.size() << endl;
	cout << "Total Incorrectly Answered: " << incorrect_answer_index.size() << endl << endl;
	if (correct_answer_index.size() > 15) {
		cout << "PASSED THE EXAM!\n";
	}
	else {
		cout << "FAILED THE EXAM!\n";
	}

	for (int i = 0; i < incorrect_answer_index.size(); i++) {
		cout << "Problem " << incorrect_answer_index[i] + 1 << " missed.\n";
	}
	return 0;
}
bool answerCheck(char student_choice) {

	switch (student_choice) {
	case 'A':
		return true;
	case 'B':
		return true;
	case 'C':
		return true;
	case 'D':
		return true;
	default:
		cout << "Please enter a valid choice.\n";
		return false;
	}
}