#include "11 PassFailActivity.h"

char PassFailActivity11::getLetterGrade() const
{
char letterGrade;

	if (score >= minPassingScore) {
		letterGrade = 'P';
	}
	else {
		letterGrade = 'F';
	}
	return letterGrade;

}