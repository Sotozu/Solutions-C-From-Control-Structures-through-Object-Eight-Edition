#pragma once
#include <new>
#include <string>
#include <iostream>

template<class T>
class Stack06 {
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
	Stack06();

	//Destructor
	~Stack06();

	//Stack06 Operations
	void push(T);
	void pop(T&);
	bool isEmpty();
};

//Constructor
template<class T>
Stack06<T>::Stack06() {
	top = nullptr;
	stackSize = 0;
}

//Destructor

template<class T>
Stack06<T>::~Stack06() {
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
void Stack06<T>::push(T item) {

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
	stackSize++;
}

template <class T>
void Stack06<T>::pop(T& item) {
	StackNode* temp = nullptr;

	if (isEmpty()) {
		std::cout << "The stack is empty.\n";
	}
	else {
		item = top->value;
		temp = top->next;
		delete top;
		top = temp;
		stackSize--;
	}
}

template <class T>
bool Stack06<T>::isEmpty() {
	bool status;
	if (top == nullptr) {
		status = true;
	}
	else {
		status = false;
	}
	return status;
}

/*
***********************************************************
Template Specialization for STRINGS
***********************************************************
*/

template<>
class Stack06<std::string> {
private:
	// Nodes
	struct StackNode {
		std::string value;
		StackNode* next;
	};
	int stackSize;
	StackNode* top; //pointer to the top of the stack

public:
	//Constructor
	Stack06();

	//Destructor
	~Stack06();

	//Stack06 Operations
	void push(std::string);
	void pop(std::string&);
	bool isEmpty();
};

//Constructor
Stack06<std::string>::Stack06() {
	top = nullptr;
	stackSize = 0;

}

//Copy Constructor

//Destructor

Stack06<std::string>::~Stack06() {
	StackNode* nodePtr, * nextNode;

	nodePtr = top;

	while (nodePtr != nullptr) {
		nextNode = nodePtr->next;
		delete nodePtr;
		nodePtr = nextNode;
	}
}

//Member Functions

void Stack06<std::string>::push(std::string item) {

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
	stackSize++;
}

void Stack06<std::string>::pop(std::string& item) {
	StackNode* temp = nullptr;

	if (isEmpty()) {
		std::cout << "The stack is empty.\n";
	}
	else {
		item = top->value;
		temp = top->next;
		delete top;
		top = temp;
		stackSize--;
	}
}

bool Stack06<std::string>::isEmpty() {
	bool status;
	if (top == nullptr) {
		status = true;
	}
	else {
		status = false;
	}
	return status;
}