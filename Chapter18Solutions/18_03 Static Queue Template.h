#pragma once
#include<iostream>

template<class T>
class StaticQueueTemplate03 {
private:
	T* queueArray;
	int queueSize;
	int front;
	int rear;
	int numItemsInQueue;
public:
	//Constructor
	StaticQueueTemplate03(int);

	//Copy Constructor
	StaticQueueTemplate03(const StaticQueueTemplate03&);

	//Destructor
	~StaticQueueTemplate03();

	//MemberFunctions
	void enqueue(T);
	void dequeue(T&);
	bool isEmpty() const;
	bool isFull() const;
	void clear();


};

//Constructor
template<class T>
StaticQueueTemplate03<T>::StaticQueueTemplate03(int size) {
	queueArray = new T[size];
	queueSize = size;
	front = -1;
	rear = -1;
	numItemsInQueue = 0;
}

//Copy Constructor
template<class T>
StaticQueueTemplate03<T>::StaticQueueTemplate03(const StaticQueueTemplate03& obj) {
	queueArray = new T[obj.queueSize];
	queueSize = obj.queueSize;
	front = obj.front;
	rear = obj.rear;

	for (int i = 0; i < obj.queueSize; i++) {
		queueArray[i] = obj.queueArray[i];
	}

}

//Destructor
template<class T>
StaticQueueTemplate03<T>::~StaticQueueTemplate03() {
	delete[] queueArray;
}

//Member Functions
template<class T>
void StaticQueueTemplate03<T>::enqueue(T a) {
	if (isFull()) {
		std::cout << "ERROR: Queue is Full" << std::endl;
		return;
	}
	else {
		//Calc new rear position
		rear = (rear + 1) % queueSize;
		//place new item
		queueArray[rear] = a;
		
		numItemsInQueue++;
	}
}

template<class T>
void StaticQueueTemplate03<T>::dequeue(T& b) {
	if (isEmpty()) {
		std::cout << "ERROR: Queue is Empty" << std::endl;
		return;
	}
	else {
		//Move the front subscript
		front = (front + 1) % queueSize;

		//retrieve the front item
		b = queueArray[front];

		numItemsInQueue--;
	}
}

template<class T>
bool StaticQueueTemplate03<T>::isEmpty() const {

	bool status;

	if (numItemsInQueue == 0) {
		status = true;
	}
	else {
		status = false;
	}

	return status;
}

template<class T>
bool StaticQueueTemplate03<T>::isFull() const {
	bool status;
	if (numItemsInQueue >= queueSize) {
		status = true;
	}
	else {
		status = false;
	}

	return status;
}

template<class T>
void StaticQueueTemplate03<T>::clear() {
	front = queueSize - 1;
	rear = queueSize - 1;
	numItemsInQueue = 0;
}