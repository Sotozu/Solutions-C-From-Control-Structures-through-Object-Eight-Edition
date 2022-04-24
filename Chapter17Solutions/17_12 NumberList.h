#pragma once
#include <iostream>
// Specification file for the NumberList class 

class NumberList
{
private:
// Declare a structure for the list 
	struct ListNode
	{
	 double value; // The value in this node 
	 struct ListNode* next; // To point to the next node 
	 };
		ListNode * head; // List head pointer 
public:
 // Constructor 
NumberList()
{ head = nullptr; }

// Destructor 
~NumberList();

// Linked list operations 
void appendNode(double);
void insertNode(double);
void deleteNode(double);
void displayList() const;

void mergeArray(double arrayDoubles[], int arraySize);
void sortList();

 };

void NumberList::appendNode(double num)
{
	ListNode * newNode; // To point to a new node 
	ListNode * nodePtr; // To move through the list 
	
// Allocate a new node and store num there. 
	newNode = new ListNode;
	newNode->value = num;
	newNode->next = nullptr;
	
// If there are no nodes in the list 
// make newNode the first node. 
	if (!head) {
		head = newNode;

	}
	else { // Otherwise, insert newNode at end. 
// Initialize nodePtr to head of list. 
		nodePtr = head;

	// Find the last node in the list. 
		while (nodePtr->next) {
			nodePtr = nodePtr->next;
		}

	// Insert newNode as the last node. 
	nodePtr->next = newNode;
	}
 }

void NumberList::displayList() const
{
ListNode * nodePtr; // To move through the list 

// Position nodePtr at the head of the list. 
nodePtr = head;

// While nodePtr points to a node, traverse the list. 
	while (nodePtr) {
	// Display the value in this node.
		std::cout << nodePtr->value << std::endl;
	// Move to the next node.
		nodePtr = nodePtr->next;
	}
}

void NumberList::insertNode(double num)
{
	ListNode * newNode; // A new node 
	ListNode * nodePtr; // To traverse the list 
	ListNode * previousNode = nullptr; // The previous node 

// Allocate a new node and store num there. 
	newNode = new ListNode;
	newNode->value = num;

// If there are no nodes in the list 
// make newNode the first node 
	if (!head) {
		head = newNode;
		newNode->next = nullptr;
	}
	else // Otherwise, insert newNode 
	{
		// Position nodePtr at the head of list. 
		nodePtr = head;

		// Initialize previousNode to nullptr. 
		previousNode = nullptr;

		// Skip all nodes whose value is less than num. 
		while (nodePtr != nullptr && nodePtr->value < num)
		{
			previousNode = nodePtr;
			nodePtr = nodePtr->next;
		}

		// If the new node is to be the 1st in the list, 
		// insert it before all other nodes. 
		if (previousNode == nullptr)
		{
			head = newNode;
			newNode->next = nodePtr;
		}
		 else // Otherwise insert after the previous node. 
		{
			previousNode->next = newNode;
			newNode->next = nodePtr;
		}
	}
}

void NumberList::deleteNode(double num)
{
	ListNode * nodePtr; // To traverse the list 
	ListNode * previousNode = nullptr; // To point to the previous node 

// If the list is empty, do nothing. 
	if (!head) {
		return;
	}

// Determine if the first node is the one. 
	if (head->value == num)
	{
	nodePtr = head->next;
	delete head;
	head = nodePtr;
	}
	 else
	{
		// Initialize nodePtr to head of list 
		nodePtr = head;

		// Skip all nodes whose value member is 
		// not equal to num. 
		while (nodePtr != nullptr && nodePtr->value != num)
		{
			previousNode = nodePtr;
			nodePtr = nodePtr->next;
		}

		// If nodePtr is not at the end of the list, 
		// link the previous node to the node after 
		// nodePtr, then delete nodePtr. 
		if (nodePtr)
		{
			previousNode->next = nodePtr->next;
			delete nodePtr;
		}
	}
}

NumberList::~NumberList()
{
	ListNode * nodePtr; // To traverse the list 
	ListNode * nextNode = nullptr; // To point to the next node 

// Position nodePtr at the head of the list. 
	nodePtr = head;

// While nodePtr is not at the end of the list... 
	while (nodePtr != nullptr)
	{
// Save a pointer to the next node.
	nextNode = nodePtr->next;
// Delete the current node. 	
	delete nodePtr;
// Position nodePtr at the next node.
	nodePtr = nextNode;
	}
}


void NumberList::mergeArray(double arrayDoubles[], int arraySize) {
	for (int i = 0; i < arraySize; i++) {
		insertNode(arrayDoubles[i]);
	}
}

void NumberList::sortList() {

	ListNode* nodePtr = nullptr; // To move through the list 
	ListNode* smallestNode = nullptr; //store pointer to the smallest node found during the search
	ListNode* nextNode = nullptr;
	ListNode* previousNode = nullptr;
	ListNode* secondNode = nullptr;
	ListNode* compareNode = nullptr;

	bool sortOccured = true;
	int compare = 0;
	// traverse to the last node in the list.

	if (!head) { //if the list is empty
		return;
	}
	else {
		nodePtr = head;
		previousNode = head;
		//traverse the list

		while (nodePtr->next) { //if it returns false (if the pointer returns 0 "nullptr")
			previousNode = nodePtr; // save position of current node
			nodePtr = nodePtr->next; // move up one node in the list
			nextNode = nodePtr->next; // save pointer to the NEXT node

			if (nodePtr->value < previousNode->value) { //if the current node is smaller than the previous node

				if (previousNode == head) { //if the second node is greater than head
					head = nodePtr;
					nodePtr->next = previousNode; //make the previouse node point to the NEXT node skipping nodePtr

					previousNode->next = nextNode;

					nodePtr = head; // return to the beginnig of the list

				}
				else {
					ListNode* PRE = nullptr;
					ListNode* ITER = head;
					//traverse the list to find the node before the previous node
					
					while (ITER != previousNode) {
						PRE = ITER;

						ITER = ITER->next;

					}
					PRE->next = nodePtr;
					nodePtr->next = previousNode;
					previousNode->next = nextNode;


					nodePtr = head; // return to the beginnig of the list
				}

			}
			//displayList();

		}
			
	}
}