#include "11 PassFailExam.h"

PassFailExam11::PassFailExam11() : PassFailActivity11() {
	numQuestions = 0;
	pointsEach = 0;
	numMissed = 0;
}
PassFailExam11::PassFailExam11(int questions, int missed, double mps) : PassFailActivity11(mps) {
	set(questions, missed);
}
void PassFailExam11::set(int questions, int missed) {
	double numericScore;

	numQuestions = questions;
	numMissed = missed;
	pointsEach = 100.0 / questions;
	
	numericScore = 100.0 - (missed * pointsEach);

	setScore(numericScore);
}
double PassFailExam11::getNumQuestions() const {
	return numQuestions;
}
double PassFailExam11::getPointsEach() const {
	return pointsEach;
}
int PassFailExam11::getNumMissed() const {
	return numMissed;
}