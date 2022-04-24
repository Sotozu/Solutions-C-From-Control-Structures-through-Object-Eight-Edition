#pragma once
#include "11 PassFailActivity.h"

class FinalExam11 : public GradedActivity11 {
private:
	int numQuestions;
	double pointsEach;
	int numMissed;
protected:
public:
	FinalExam11();
	FinalExam11(int questions, int missed);
	void set(int, int);
	double getNumQuestions() const;
	double getPointsEach() const;
	int getNumMissed() const;

};