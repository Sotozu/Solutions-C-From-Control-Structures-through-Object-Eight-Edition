#pragma once
#include <new>
#include <iostream>

template<class T>
class DynamicQueueTemplate13 {
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
	DynamicQueueTemplate13();

	//Destructor
	~DynamicQueueTemplate13();

	//Member Functions
	void enqueue(T);
	void dequeue(T&);
	bool isEmpty() const;
	void clear();
	int currentSize() const;
};
template<class T>
DynamicQueueTemplate13<T>::DynamicQueueTemplate13() {
	front = nullptr;
	rear = nullptr;
	numItems = 0;
}

//Destructor
template<class T>
DynamicQueueTemplate13<T>::~DynamicQueueTemplate13() {
	clear();
}

//Member Functions
template<class T>
void DynamicQueueTemplate13<T>::enqueue(T v) {
	QueueNode* newNode = nullptr;

	try {
		newNode = new QueueNode;
	}
	catch (std::bad_alloc) {
		std::cout << "Insufficient memory." << std::endl;
	}
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
void DynamicQueueTemplate13<T>::dequeue(T& v) {
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
bool DynamicQueueTemplate13<T>::isEmpty() const {
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
void DynamicQueueTemplate13<T>::clear() {
	T value;
	while (!isEmpty()) {
		dequeue(value);
	}
}

template<class T>
int DynamicQueueTemplate13<T>::currentSize() const {
	return numItems;
}
