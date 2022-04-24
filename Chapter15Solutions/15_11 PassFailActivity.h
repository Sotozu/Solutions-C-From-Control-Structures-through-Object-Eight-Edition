#pragma once
#include "11 GradedActivity.h"

class PassFailActivity11 : public GradedActivity11 {
private:
protected:
	double minPassingScore;
public:
	// Default constructor
	PassFailActivity11() : GradedActivity11()
	{ minPassingScore = 0.0; }
	
	// Constructor
	PassFailActivity11(double mps) : GradedActivity11()
	{ minPassingScore = mps; }
	
	// Mutator
	void setMinPassingScore(double mps)
	{ minPassingScore = mps; }
	
	// Accessors
	double getMinPassingScore() const
	{ return minPassingScore; }
	
	char getLetterGrade() const;

};