#pragma once
#include <iostream>
template<class T>
class Stack {
private:
	T* stackArray;
	int stackSize;
	int top;

public:
	//Constructor
	Stack(int);

	//Copy Constructor
	Stack(const Stack&);

	//Destructor
	~Stack();

	//Stack Operations
	void push(T);
	void pop(T&);
	bool isFull();
	bool isEmpty();
};

//Constructor
template<class T>
Stack<T>::Stack<T>(int size) {
	stackArray = new T[size];
	stackSize = size;
	top = -1;
}

//Copy Constructor
template<class T>
Stack<T>::Stack<T>(const Stack& obj) {
	if (obj.stackSize > 0) {
		stackArray = new T[obj.stackSize];
	}
	else {
		stackArray = nullptr;
	}

	stackSize = obj.stackSize;

	for (int i = 0; i < stackSize; i++) {
		stackArray[i] = obj.stackArray[i];
	}

	top = obj.top;
}

//Destructor

template<class T>
Stack<T>::~Stack() {
	if (stackSize > 0) {
		delete[] stackArray;
	}
}

//Member Functions

template<class T>
void Stack<T>::push(T item) {
	if (isFull()) {
		std::cout << "The stack is full.\n";
	}
	else {
		top++;
		stackArray[top] = item;
	}
}

template <class T>
void Stack<T>::pop(T& item) {
	if (isEmpty()) {
		std::cout << "The stack is empty.\n";
	}
	else {
		item = stackArray[top];
		top--;
	}
}

template <class T>
bool Stack<T>::isFull() {
	bool status;
	if (top == stackSize-1) {
		status = true;
	}
	else {
		status = false;
	}
	return status;
}

template <class T>
bool Stack<T>::isEmpty() {
	bool status;
	if (top == -1) {
		status = true;
	}
	else {
		status = false;
	}
	return status;
}