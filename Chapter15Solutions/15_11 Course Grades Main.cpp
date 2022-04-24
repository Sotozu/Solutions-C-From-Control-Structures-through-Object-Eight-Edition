#include <iostream>
#include "11 CourseGrades.h"
#include "11 GradedActivity.h"
#include "11 PassFailExam.h"
#include "11 Essay.h"
#include "11 FinalExam.h"
int main() {
	const int FINAL_EXAM_QUESTIONS = 50, 
		PASS_FAIL_EXAM_QUESTIONS = 10;
	double input;
	CourseGrades11 course;

	//LAB ACTIVITY
	do {
		std::cout << "Please enter the score of the lab activity" << std::endl;
		std::cout << "LAB SCORE: "; std::cin >> input;
		if (input > 100 || input < 0) {
			std::cout << "ERROR: Please enter a valid range from 0 - 100" << std::endl;
		}
		std::cout << std::endl;
	} while (input > 100 || input < 0);
	GradedActivity11* lab = new GradedActivity11(input);
	course.setLab(lab);

	//PASS-FAIL EXAM
	do {
		std::cout << "Please enter the number of questions MISSED in the pass/fail exam (TOTAL QUESTIONS IS 10)." << std::endl;
		std::cout << "QUESTIONS MISSED: "; std::cin >> input;
		if (input > PASS_FAIL_EXAM_QUESTIONS || input < 0) {
			std::cout << "ERROR: Please enter a valid range from 0 - 10" << std::endl;
		}
		std::cout << std::endl;
	} while (input > PASS_FAIL_EXAM_QUESTIONS || input < 0);
	PassFailExam11* pfExam = new PassFailExam11(PASS_FAIL_EXAM_QUESTIONS, input, 70);
	course.setPassFailExam(pfExam);

	//ESSAY
	do {
		std::cout << "Please enter the score of the essay" << std::endl;
		std::cout << "ESSAY SCORE: "; std::cin >> input;
		if (input > 100 || input < 0) {
			std::cout << "ERROR: Please enter a valid range from 0 - 100" << std::endl;
		}
		std::cout << std::endl;
	} while (input > 100 || input < 0);
	Essay11* essay = new Essay11(input);
	course.setEssay(essay);

	//FINAL EXAM
	do {
		std::cout << "Please enter the number of questions MISSED in the final exam (TOTAL QUESTIONS IS 50)." << std::endl;
		std::cout << "QUESTIONS MISSED: "; std::cin >> input;
		if (input > FINAL_EXAM_QUESTIONS || input < 0) {
			std::cout << "ERROR: Please enter a valid range from 0 - 10" << std::endl;
		}
		std::cout << std::endl;
	} while (input > FINAL_EXAM_QUESTIONS || input < 0);
	FinalExam11* finalExam = new FinalExam11(FINAL_EXAM_QUESTIONS, input);
	course.setFinalExam(finalExam);

	std::cout << std::endl;   
	course.print();

	return 0;
}