#include "11 CourseGrades.h"

//Default Constructor
CourseGrades11::CourseGrades11() {
	for (int i = 0; i < 4; i++) {
		activities[i] = nullptr;
	}
}

//Mutators
void CourseGrades11::setLab(GradedActivity11 *lab) {
	activities[0] = lab;
}
void CourseGrades11::setPassFailExam(PassFailExam11 *pfExam) {
	activities[1] = pfExam;
}
void CourseGrades11::setEssay(GradedActivity11* essay) {
	activities[2] = essay;
}

void CourseGrades11::setFinalExam(FinalExam11* finalExam) {
	activities[3] = finalExam;
}

//Member Function

void CourseGrades11::print() {
	for (int i = 0; i < 4; i++) {
		std::cout << activities[i]->getScore() << std::endl;
		std::cout << activities[i]->getLetterGrade() << std::endl;
		std::cout << std::endl;
	}
}