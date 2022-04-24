#pragma once

class GradedActivity06 {
protected:
    double score;  // To hold the numeric score 
public:
    // Default constructor 
    GradedActivity06()
    {
        score = 0.0;
    }

    // Constructor 
    GradedActivity06(double s)
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