#include <iostream>
using namespace std;


// 12. Star Search

void getJudgeData(double &);
void calcScore(double, double, double, double, double);
double findLowest(double, double, double, double, double);
double findHighest(double, double, double, double, double);

int main() {
	double judgeScore[5];

	for (int i = 0; i < 5; i++) {
		cout << "Please enter the score for judge " << i + 1 << endl;
		getJudgeData(judgeScore[i]);
	}

	calcScore(judgeScore[0], judgeScore[1], judgeScore[2], judgeScore[3], judgeScore[4]);


	return 0;
}

void getJudgeData(double& judgeScore) {
	do {
		cout << "SCORE: ";
		cin >> judgeScore;

		if (judgeScore < 0 || judgeScore > 10){
			cout << "ERROR: Please enter a number between 0 and 10\n";
		} 

	} while (judgeScore < 0 || judgeScore > 10);
}
void calcScore(double s1, double s2, double s3, double s4, double s5) {
	double lowestScore;
	double highestScore;
	bool check1 = true, check2 = true;
	double total = 0;
	double average;

	lowestScore = findLowest(s1, s2, s3, s4, s5);
	highestScore = findHighest(s1, s2, s3, s4, s5);

	double scores[5] = { s1, s2, s3, s4, s5 };

	for (int i = 0; i < 5; i++) {
		if (check1 == true) {
			if (scores[i] == lowestScore) {
				scores[i] = 0;
				check1 = false;
			}
		}
		if (check2 == true) {
			if (scores[i] == highestScore) {
				scores[i] = 0;
				check2 = false;
			}
		}
	}

	for (int i = 0; i < 5; i++) {
		total += scores[i];
	}

	average = total / 3;

	cout << "\nThe contestants score is: " << average;

}
double findLowest(double s1, double s2, double s3, double s4, double s5){
	double scores[5] = { s1, s2, s3, s4, s5 };

	for (int i = 0; i < 5; i++) {
		if (scores[0] > scores[i]) {
			scores[0] = scores[i];
		}
	}
	return scores[0];
}
double findHighest(double s1, double s2, double s3, double s4, double s5){
	double scores[5] = { s1, s2, s3, s4, s5 };
	for (int i = 0; i < 5; i++) {
		if (scores[0] < scores[i]) {
			scores[0] = scores[i];
		}
	}
	return scores[0];
}