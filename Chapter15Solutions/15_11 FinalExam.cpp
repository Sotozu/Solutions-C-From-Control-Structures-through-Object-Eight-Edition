#include "11 FinalExam.h"

FinalExam11::FinalExam11() : GradedActivity11() {
	numQuestions = 0;
	pointsEach = 0;
	numMissed = 0;
}
FinalExam11::FinalExam11(int questions, int missed) : GradedActivity11() {
	set(questions, missed);
}
void FinalExam11::set(int questions, int missed) {
	double numericScore;

	numQuestions = questions;
	numMissed = missed;
	pointsEach = 100.0 / questions;

	numericScore = 100.0 - (missed * pointsEach);

	setScore(numericScore);
}
double FinalExam11::getNumQuestions() const {
	return numQuestions;
}
double FinalExam11::getPointsEach() const {
	return pointsEach;
}
int FinalExam11::getNumMissed() const {
	return numMissed;
}