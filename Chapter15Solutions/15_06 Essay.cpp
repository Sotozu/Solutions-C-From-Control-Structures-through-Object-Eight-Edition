#include "06 Essay.h"
int Essay06::max_total_score = 100;
int Essay06::max_grammer_score = 30;
int Essay06::max_spelling_score = 20;
int Essay06::max_correct_length_score = 20;
int Essay06::max_content_score = 30;

//Default Constructor
Essay06::Essay06() : GradedActivity06() {
	grammer_score = 0;
	spelling_score = 0;
	correct_lenght_score = 0;
	content_score = 0;
}

Essay06::Essay06(int gs, int sc, int cls, int cs) : GradedActivity06() {
	grammer_score = gs;
	spelling_score = sc;
	correct_lenght_score = cls;
	content_score = cs;

	if (!isDataCorrect()) {
		exit(0);
	}
	calculateScore();
}

bool Essay06::isDataCorrect() {
	bool is_data_correct = true;

	if (grammer_score > max_grammer_score || grammer_score < 0) {
		std::cout << "ERROR: Grammer Score Input (max: " << max_grammer_score << ")" << std::endl;
		is_data_correct = false;
	}
	if (spelling_score > max_spelling_score || spelling_score < 0) {
		std::cout << "ERROR: Spelling Score Input (max: " << max_spelling_score << ")" << std::endl;
		is_data_correct = false;
	}
	if (correct_lenght_score > max_correct_length_score || correct_lenght_score < 0) {
		std::cout << "ERROR: Correct Length Score Input (max: " << max_correct_length_score << ")" << std::endl;
		is_data_correct = false;
	}
	if (content_score > max_content_score || content_score < 0) {
		std::cout << "ERROR: Content Score Input (max: " << max_content_score << ")" << std::endl;
		is_data_correct = false;
	}

	return is_data_correct;
}

void Essay06::calculateScore() {
	score = static_cast<double>(grammer_score) + (spelling_score + correct_lenght_score + content_score);
}


//Mutators
void Essay06::setGrammerScore(int x) {
	int temp_hold = grammer_score;
	grammer_score = x;
	if (!isDataCorrect()) {
		grammer_score = temp_hold;
	}
	calculateScore();
}
void Essay06::setSpellingScore(int x) {
	int temp_hold = spelling_score;
	spelling_score = x;
	if (!isDataCorrect()) {
		spelling_score = temp_hold;
	}
	calculateScore();
}
void Essay06::setCorrectLengthScore(int x) {
	int temp_hold = correct_lenght_score;
	correct_lenght_score = x;
	if (!isDataCorrect()) {
		correct_lenght_score = temp_hold;
	}
	calculateScore();
}
void Essay06::setContentScore(int x) {
	int temp_hold = content_score;
	content_score = x;
	if (!isDataCorrect()) {
		content_score = temp_hold;
	}
	calculateScore();
}

//Accessors
int Essay06::getGrammerScore() {
	return grammer_score;
}
int Essay06::getSpellingScore() {
	return spelling_score;
}
int Essay06::getCorrectLengthScore() {
	return correct_lenght_score;
}
int Essay06::getScore() {
	return score;
}

//Member Functions
void Essay06::displayMaxScoresPossible() {
	std::cout << "MAX GRAMMER SCORE: " << max_grammer_score << std::endl;
	std::cout << "MAX SPELLING SCORE: " << max_spelling_score << std::endl;
	std::cout << "MAX CORRECT LENGTH SCORE: " << max_correct_length_score << std::endl;
	std::cout << "MAX CONTENT SCORE: " << max_content_score << std::endl;
}