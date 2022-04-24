#pragma once
#include <iostream>
#include "11 GradedActivity.h"
#include "11 PassFailExam.h"
#include "11 FinalExam.h"
class CourseGrades11 {
private:
	GradedActivity11 *activities[4];
protected:

public:
	//Default Constructor
	CourseGrades11();

	//Mutators
	void setLab(GradedActivity11* lab);
	void setPassFailExam(PassFailExam11* pfExam);
	void setEssay(GradedActivity11* essay);
	void setFinalExam(FinalExam11* finalExam);
	
	//Member Function
	void print();

};