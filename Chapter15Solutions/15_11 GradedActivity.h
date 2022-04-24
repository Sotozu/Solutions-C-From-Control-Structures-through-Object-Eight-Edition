#pragma once

class GradedActivity11 {
protected:
	double score;  // To hold the numeric score 
public:
	// Default constructor 
	GradedActivity11()
	{
		score = 0.0;
	}

	// Constructor 
	GradedActivity11(double s)
	{
		score = s;
	}

	// Mutator function 
	void setScore(double s)
	{
		score = s;
	}

	// Accessor functions 
	virtual double getScore() const
	{
		return score;
	}

	virtual char getLetterGrade() const;
};