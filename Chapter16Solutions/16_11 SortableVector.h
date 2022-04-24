#pragma once

#include "11 SimpleVector.h"

template <class T>
class SortableVector : public SimpleVector <T> {
public:
	//Default Constructor
	SortableVector() : SimpleVector <T>() {}

	//Constructor
	SortableVector(int size) : SimpleVector<T>(size) {};

	//Copy Constructor
	SortableVector(const SortableVector&);

	void sort();

};

template <class T>
SortableVector<T>::SortableVector(const SortableVector& obj) : SimpleVector<T>(obj.size()) {
	for (int count = 0; count < this->size(); count++)
		this->operator[](count) = obj[count];

}


template <class T>
void SortableVector<T>::sort() {
	std::cout << "HELLO" << std::endl;
	T current_smallest, temp;
	bool change_occured = false;
	int index = 0;

	for (int j = 0; j < this->arraySize; j++) {
		//BASE value set to be compared against the others in the array. It is aptr[j]
		current_smallest = this->aptr[j];
		for (int i = j; i < this->arraySize; i++) {
			//if a smaller value is found than the BASE then do this
			if (this->aptr[i] < current_smallest) {

				//the smaller value found is now being placed into the container "current_smallest"
				current_smallest = this->aptr[i];

				//The index of the value is stored
				index = i;
				change_occured = true;
			}
		}
		if (change_occured == true) {
			//set the position of the smallest value to the BASE
			this->aptr[index] = this->aptr[j];

			//set the BASE value to the smallest value found in the array so far
			this->aptr[j] = current_smallest;


			change_occured = false;
		}

	}

}