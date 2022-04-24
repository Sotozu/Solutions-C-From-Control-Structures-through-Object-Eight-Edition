#pragma once
#include <new>
#include <iostream>

template<class T>
class Stack12 {
private:
	// Nodes
	struct StackNode {
		T value;
		StackNode* next;
	};
	int stackSize;
	StackNode* top; //pointer to the top of the stack

public:
	//Constructor
	Stack12();

	//Destructor
	~Stack12();

	//Stack12 Operations
	void push(T);
	void pop(T&);
	bool isEmpty();
};

//Constructor
template<class T>
Stack12<T>::Stack12() {
	top = nullptr;
	stackSize = 0;
}

//Destructor

template<class T>
Stack12<T>::~Stack12() {
	StackNode* nodePtr, * nextNode;

	nodePtr = top;

	while (nodePtr != nullptr) {
		nextNode = nodePtr->next;
		delete nodePtr;
		nodePtr = nextNode;
	}
}

//Member Functions

template<class T>
void Stack12<T>::push(T item) {

	StackNode* newNode = nullptr;
	try {
		newNode = new StackNode;
	}
	catch (std::bad_alloc) {
		std::cout << "Insufficient memory." << std::endl;
	}
	newNode->value = item;

	//If  the stack is empty and this is to be the first node in it
	if (isEmpty()) {
		top = newNode;
		newNode->next = nullptr;
	}
	else {
		newNode->next = top;
		top = newNode;
	}
}

template <class T>
void Stack12<T>::pop(T& item) {
	StackNode* temp = nullptr;

	if (isEmpty()) {
		std::cout << "The stack is empty.\n";
	}
	else {
		item = top->value;
		temp = top->next;
		delete top;
		top = temp;

	}
}

template <class T>
bool Stack12<T>::isEmpty() {
	bool status;
	if (top == nullptr) {
		status = true;
	}
	else {
		status = false;
	}
	return status;
}