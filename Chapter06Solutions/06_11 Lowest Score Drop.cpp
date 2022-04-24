#include <iostream>
using namespace std;


// 11. Lowest Score Drop

void getScore(int &);
void calcAverage(int, int, int, int, int);
int findLowest(int, int, int, int, int);
int main() {

	int score[5];
	for(int i = 0; i < 5; i++){
		cout << "Please enter a score for test " << i+1 <<".\n";
		getScore(score[i]);
	}
	calcAverage(score[0], score[1], score[2], score[3], score[4]);

	return 0;
}
void getScore(int &score) {
	do {
		
		cout << "SCORE: ";
		cin >> score;

		if (score < 0 || score > 100) {
			cout << "\nERROR: Please enter a valid score.\n";
		}

	} while (score < 0 || score > 100);

}
void calcAverage(int s1, int s2, int s3, int s4, int s5) {
	
	int average;
	int counter = 0;
	int lowest_num = findLowest(s1, s2, s3, s4, s5);

	int scores[5] = { s1, s2, s3, s4, s5 };
	
	for (int i = 0; i < 5; i++) {
		if (counter == 0) {
			if (scores[i] == lowest_num) {
				scores[i] = 0;
				counter++;
			}
		}
	}

	average = (scores[0] + scores[1] + scores[2] + scores[3] + scores[4])/4; //this includes the lowest value which
																			   //is now 0. We divide by 4 and calculate for
																			   //the scores that have values.
	cout << "\nDropped the lowest score.\n";
	cout << "LOWEST SCORE: " << lowest_num;
	cout << "\nThe average of the 4 highest test scores.\n";
	cout << "AVERAGE: " << average;
}

int findLowest(int s1, int s2, int s3, int s4, int s5) {
	int findLow[5] = { s1, s2, s3, s4, s5 };
	int place_holder;

	for (int i = 0; i < 5; i++) {
		if (findLow[0] > findLow[i]) {
			place_holder = findLow[0];

			findLow[0] = findLow[i];
			findLow[i] = place_holder;
		}
	}
	return findLow[0];
}