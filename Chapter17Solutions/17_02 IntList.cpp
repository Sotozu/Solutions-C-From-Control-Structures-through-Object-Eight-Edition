#include "02 IntList.h"

//Constructor
IntList02::IntList02() {
	head = nullptr;
}

//Linked List Operations
void IntList02::appendNode(int v) {

	IntNode02* newNode;
	IntNode02* nodePtr;

	//Allocate a new node and store an int there;
	newNode = new IntNode02(v);

	//If this is the first node then...
	if (!head) {
		head = newNode;
	}
	//If nodes already exist then...
	else {
		nodePtr = head;

		//Find the last node in the list
		while (nodePtr->next) { //if it returns false (if the pointer returns 0 "nullptr"
			nodePtr = nodePtr->next;
		}

		//Insert newNode as the last node
		nodePtr->next = newNode;
	}

}

void IntList02::insertNode(int v) {

	IntNode02* newNode;
	IntNode02* nodePtr;
	IntNode02* previousNode = nullptr;

	newNode = new IntNode02(v);

	//If there are no nodes in the list then...
	if (!head) {
		head = newNode;
		newNode->next = nullptr;
	}
	else {

		nodePtr = head;
		previousNode = nullptr;

		//Skip all nodes whose value is less than 'v'
		while (nodePtr != nullptr && nodePtr->value < v) {
			previousNode = nodePtr; //save position of current node
			nodePtr = nodePtr->next; //move to next node
		}

		//if the new node is to be the 1st in the list insert it before all other nodes.
		if (previousNode == nullptr) {
			head = newNode;
			newNode->next = nodePtr;
		}
		else {
			previousNode->next = newNode;
			newNode->next = nodePtr;
		}
	}

}

void IntList02::deleteNode(int v) {
	IntNode02* nodePtr; //used to traverse the list
	IntNode02* previousNode = nullptr; // to point to the previouse node

	//if the list is empty do nothing

	if (!head) {
		return;
	}

	//Is the first node a match, if so delete it
	if (head->value == v) {
		nodePtr = head->next; //set nodePtr to the next node
		delete head;
		head = nodePtr;
	}
	else { // traverse the list
		//Initialise nodePtr to head of list
		nodePtr = head;

		//skip all nodes whose value member is not equal to 'v'
		while (nodePtr != nullptr && nodePtr->value != v) {
			previousNode = nodePtr;
			nodePtr = nodePtr->next;
		}

		//If nodePtr is not at the end of the list, link the previous node to the node after nodePtr,
		//then delete nodePtr;

		//if nodePtr returns false it means we have traversed the list and goten to the end
		//the last node will point to null. This means the value was not found and this statement will not execute.
		if (nodePtr) {

			previousNode->next = nodePtr->next;
			delete nodePtr;
		}
	}
}

IntList02::~IntList02() {
	IntNode02* nodePtr;
	IntNode02* nextNode;

	nodePtr = head;

	//traverse the list until the last node points to nullptr
	while (nodePtr != nullptr) {
		//Save pointer to the next node
		nextNode = nodePtr->next;

		//delete the current node
		delete nodePtr;

		//position the nodePtr at the next node.
		nodePtr = nextNode;
	}
}

void IntList02::print() const {
	IntNode02* nodePtr;
	
	if (!head) {
		return;
	}
	nodePtr = head;
	while (nodePtr) {
		std::cout << nodePtr->value << std::endl;
		nodePtr = nodePtr->next;
	}
}