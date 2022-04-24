#pragma once
class TestScores
{

private:
	double test_score[3];
public:
	//Constructor
	TestScores() {
		test_score[0] = 0;
		test_score[1] = 0;
		test_score[2] = 0;
	}
	TestScores(double one, double two, double three) {
		test_score[0] = one;
		test_score[1] = two;
		test_score[2] = three;
	}
	//Accessor
	double getScore(int num) const {
		return test_score[num];
	}
	//Mutator
	void setScore(int num, double score) {
		test_score[num] = score;
	}
	//Other
	double getAverge() {
		double average = (test_score[0] + test_score[1] + test_score[2]) / 3;
		return average;
	}
};

