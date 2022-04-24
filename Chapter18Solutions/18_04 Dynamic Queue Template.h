#pragma once
#include <iostream>
template<class T>
class DynamicQueueTemplate04 {
private:
	struct QueueNode {
		T value;
		QueueNode* next;
	};
	QueueNode* front;
	QueueNode* rear;
	int numItems;

public:
	//Constructor
	DynamicQueueTemplate04();

	//Destructor
	~DynamicQueueTemplate04();

	//Member Functions
	void enqueue(T);
	void dequeue(T&);
	bool isEmpty() const;
	void clear();
};
template<class T>
DynamicQueueTemplate04<T>::DynamicQueueTemplate04() {
	front = nullptr;
	rear = nullptr;
	numItems = 0;
}

//Destructor
template<class T>
DynamicQueueTemplate04<T>::~DynamicQueueTemplate04() {
	clear();
}

//Member Functions
template<class T>
void DynamicQueueTemplate04<T>::enqueue(T v) {
	QueueNode* newNode = nullptr;

	newNode = new QueueNode;
	newNode->value = v;
	newNode->next = nullptr;

	//Adjust subscripts for front and rear
	if (isEmpty()) {
		front = newNode;
		rear = newNode;
	}
	else {
		rear->next = newNode;
		rear = newNode;
	}

	numItems++;
}

template<class T>
void DynamicQueueTemplate04<T>::dequeue(T& v) {
	QueueNode* temp = nullptr;
	if (isEmpty()) {
		std::cout << "The Queue Is Empty" << std::endl;
	}
	else {
		v = front->value;

		temp = front;
		front = front->next;
		delete temp;
		numItems--;

	}

}

template<class T>
bool DynamicQueueTemplate04<T>::isEmpty() const {
	bool status;

	if (numItems > 0) {
		status = false;
	}
	else {
		status = true;
	}
	return status;
}


template<class T>
void DynamicQueueTemplate04<T>::clear() {
	T value;
	while (!isEmpty()) {
		dequeue(value);
	}
}
