#pragma once
#include <ctime>
#include <stdlib.h>
#include <time.h>
#include <iostream>
class MyArray10
{

private:
	float* my_f_array;
	int num;
	void initArray(int size) {
		my_f_array = new float[size];
		srand(time(0));
		for (int i = 0; i < size; i++) {
			my_f_array[i] = static_cast<float> (rand() % 10 + 1);
		}
	}

public:

	//Constructor
	MyArray10(int num) {
		initArray(num);
	}

	//Mutators
	void changeValue(int num, float new_num) {
		my_f_array[num] = new_num;
	}

	//Accessors
	float getValue(int num) const {
		return my_f_array[num];
	}
	float getLowest(int size) const {
		int smallest_num = my_f_array[0];
		int smallest_index = 0;
		for (int i = 0; i < size; i++) {
			if (smallest_num > my_f_array[i]) {
				smallest_index = i;
				smallest_num = my_f_array[i];
			}
		}
		return my_f_array[smallest_index];
	}
	float getHighest(int size) const {
		int largest_num = my_f_array[0];
		int largest_index = 0;
		for (int i = 0; i < size; i++) {
			if (largest_num < my_f_array[i]) {
				largest_index = i;
				largest_num = my_f_array[i];
			}
		}
		return my_f_array[largest_index];

	}
	float getAverage(int size) const {
		float total = 0, average;
		for (int i = 0; i < size; i++) {
			total += my_f_array[i];
		}

		average = total / size;
		return average;
	}
	void showArray(int size) const {

		for (int i = 0; i < size; i++) {

			std::cout << "Index " << i + 1 << ": " << my_f_array[i] << std::endl;
		}
	}

	//Desctructor
	~MyArray10() {
		delete[] my_f_array;
	}

};

