#include <iostream>
#include <iomanip>
using namespace std;

//3. Test Average

int main() {

	float score1, score2, score3, score4, score5;
	float average;
	cout << "Please enter 5 test scores:\n";

	cout << "Test Score 1: ";
	cin >> score1;
	cout << "Test Score 2: ";
	cin >> score2;
	cout << "Test Score 3: ";
	cin >> score3;
	cout << "Test Score 5: ";
	cin >> score4;
	cout << "Test Score 5: ";
	cin >> score5;

	cout << "The average of these scores is: ";
	average = (score1 + score2 + score3 + score4 + score5) / 5;
	cout << fixed << setprecision(1) << showpoint << average;
	cout << endl << "Alex" << endl;

	return 0;
}