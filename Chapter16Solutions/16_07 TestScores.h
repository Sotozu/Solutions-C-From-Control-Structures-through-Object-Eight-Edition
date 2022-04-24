#pragma once
#include <iostream>
#include <iomanip>
class TestScores07 {

private:
	double* arr;
	int SIZE;
	double average;
public:
	//Exception class
	class ScoreLessThanZero {
	private:
		double value;
		int index;
	public:
		ScoreLessThanZero(double v, int i){
			value = v;
			index = i;
		}
		double getValue() const {
			return value;
		}
		int getIndex() const {
			return index;
		}
	};

	class ScoreHigherThanOneHundred {
	private:
		double value;
		int index;
	public:
		ScoreHigherThanOneHundred(double v, int i) {
			value = v;
			index = i;
		}
		double getValue() const {
			return value;
		}
		int getIndex() const {
			return index;
		}
	};

	//Constructors
	TestScores07() {
		arr = nullptr;
		SIZE = 0;
		average = 0;
	}
	TestScores07(double a[] , int size) {
		average = 0;
		SIZE = size;
		arr = new double[size];
		for (int i = 0; i < size; i++) {
			if (a[i] > 100) {
				throw ScoreHigherThanOneHundred(a[i], i);
			}
			else if (a[i] < 0) {
				throw ScoreLessThanZero(a[i], i);
			}
			arr[i] = a[i];
			average += arr[i];
		}
		average = (average / SIZE);
	}
	//Method
	void showTestScores() const {
		std::cout << std::showpoint << std::fixed << std::setprecision(2);
		for (int i = 0; i < SIZE; i++) {
			std::cout << "TEST " << i + 1 << ": " << arr[i] << std::endl;
		}
		std::cout << std::endl;
	}

	//Accessor
	double getAverage() const {
		return average;
	}

	//Destructor
	~TestScores07() {
		delete[] arr;
	}
};