#include <iostream>
#include "07 TestScores.h"
int main() {
	const int SIZE = 6;
	double test_scores[SIZE] = { 67.5,100,77.1,101,82.3,100 };

	try {
		TestScores07 student1(test_scores, SIZE);
		student1.showTestScores();
		std::cout << "The Students Average Test Score Is: " << student1.getAverage() << std::endl;

	}
	catch (TestScores07::ScoreHigherThanOneHundred e) {
		std::cout << "Score higher than 100 found." << std::endl;
		std::cout << "SCORE: " << e.getValue() << std::endl;
		std::cout << "INDEX: " << e.getIndex() << std::endl;
	}
	catch (TestScores07::ScoreLessThanZero e) {
		std::cout << "Score less than 0 found." << std::endl;
		std::cout << "SCORE: " << e.getValue() << std::endl;
		std::cout << "INDEX: " << e.getIndex() << std::endl;

	}

	return 0;
}