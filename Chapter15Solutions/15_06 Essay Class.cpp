#include <iostream>

#include "06 Essay.h"

int main() {
	int setting_score;
	Essay06::displayMaxScoresPossible();

	Essay06 myEssay(10, 10, 10, 10);

	std::cout << std::endl;
	std::cout << "CURRENT ESSAY SCORE: " << myEssay.getScore() << std::endl;
	std::cout << std::endl;

	std::cout << "Please enter scores for Essay:" << std::endl;
	std::cout << "SET GRAMMER SCORE: "; std::cin >> setting_score;
	myEssay.setGrammerScore(setting_score);
	std::cout << "SET SPELLING SCORE: "; std::cin >> setting_score;
	myEssay.setSpellingScore(setting_score);
	std::cout << "SET CORRECT LENGTH SCORE: "; std::cin >> setting_score;
	myEssay.setCorrectLengthScore(setting_score);
	std::cout << "SET CONTENT SCORE: "; std::cin >> setting_score;
	myEssay.setContentScore(setting_score);

	std::cout << std::endl;
	std::cout << "NEW ESSAY SCORE: " << myEssay.getScore();

	return 0;
}