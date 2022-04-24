#pragma once
#include "11 PassFailActivity.h"

class PassFailExam11 : public PassFailActivity11 {
private:
	int numQuestions;
	double pointsEach;
	int numMissed;
protected:
public:
	PassFailExam11();
	PassFailExam11(int questions, int missed, double mps);
	void set(int, int);
	double getNumQuestions() const;
	double getPointsEach() const;
	int getNumMissed() const;

};