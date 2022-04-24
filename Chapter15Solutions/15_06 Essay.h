#pragma once
#include "06 GradedActivity.h"
#include <iostream>


class Essay06 : public GradedActivity06 {

private:
	static int max_total_score;
	static int max_grammer_score;
	static int max_spelling_score;
	static int max_correct_length_score;
	static int max_content_score;

	int grammer_score;
	int spelling_score;
	int correct_lenght_score;
	int content_score;

protected:
	void calculateScore();
	bool isDataCorrect();
public:
	//Constructors
	Essay06();
	Essay06(int gs, int sp, int cls, int cs);

	//Mutators
	void setGrammerScore(int);
	void setSpellingScore(int);
	void setCorrectLengthScore(int);
	void setContentScore(int);

	//Accessors
	int getGrammerScore();
	int getSpellingScore();
	int getCorrectLengthScore();
	int getScore();

	//Member Functions
	static void displayMaxScoresPossible();

};
