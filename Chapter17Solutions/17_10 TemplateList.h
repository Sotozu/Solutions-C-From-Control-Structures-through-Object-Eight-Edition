#pragma once
#include <iostream>

template <class T>
class LinkNode10 {
private:
public:
	T value;
	LinkNode10<T>* next;

	LinkNode10<T>(T v) {
		value = v;
		next = nullptr;
	}
};

template <class T>
class LinkedList10 {

private:
	LinkNode10<T>* head;
public:
	//Constructor
	LinkedList10();

	//Copy Constructor
	LinkedList10(LinkedList10<T>* L);


	//Linked List Operations
	void appendNode(T);
	void insertNode(T);
	void deleteNode(T);
	void print() const;
	void reverseList();
	int search(T v);
	void insertAtPosition(int position, T value);
	void removeAtPosition(int position);
	T returnLargest();
	T returnSmallest();
	T average();
	T total();
	T returnValueAtIndex(int position);

	//Destructor
	~LinkedList10();

};


//Constructor
template <class T>
LinkedList10<T>::LinkedList10() {
	head = nullptr;
}

//Copy Constructor
template <class T>
LinkedList10<T>::LinkedList10(LinkedList10<T>* L) {
	head = nullptr;
	LinkNode10<T>* copyNodePtr;

	LinkNode10<T>* newlyCreatedNode;

	LinkNode10<T>* previouslyCreatedNewNode;

	LinkNode10<T>* nodePtr;

	//if list is empty

	if (L->head == nullptr) {
		return;
	}
	else {
		//set the copyNodePtr to the head of the copy list
		copyNodePtr = L->head;

		//create the first copy node
		newlyCreatedNode = new LinkNode10<T>(copyNodePtr->value);

		//set head to the first newly copied
		head = newlyCreatedNode;

		//set nodePtr to head
		nodePtr = head;

		//move to the next node in the copy list
		copyNodePtr = copyNodePtr->next;

		while (copyNodePtr) {

			//create a new node
			newlyCreatedNode = new LinkNode10<T>(copyNodePtr->value);

			//previous node 'next' value is set to the memory address of the newly created node
			nodePtr->next = newlyCreatedNode;

			//saves node memory address
			nodePtr = newlyCreatedNode;

			//iterates to the next node in the copy list
			copyNodePtr = copyNodePtr->next;
		}

		//set the last node to nullptr
		nodePtr->next = nullptr;
	}

}

//Linked List Operations
template<class T>
void LinkedList10<T>::appendNode(T v) {

	LinkNode10<T>* newNode;
	LinkNode10<T>* nodePtr;

	//Allocate a new node and store an int there;
	newNode = new LinkNode10<T>(v);

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
template<class T>

void LinkedList10<T>::insertNode(T v) {

	LinkNode10<T>* newNode;
	LinkNode10<T>* nodePtr;
	LinkNode10<T>* previousNode = nullptr;

	newNode = new LinkNode10<T>(v);

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

template<class T>
void LinkedList10<T>::deleteNode(T v) {
	LinkNode10<T>* nodePtr; //used to traverse the list
	LinkNode10<T>* previousNode = nullptr; // to point to the previouse node

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

template<class T>
void LinkedList10<T>::print() const {
	LinkNode10<T>* nodePtr;

	if (!head) {
		return;
	}
	nodePtr = head;
	while (nodePtr) {
		std::cout << nodePtr->value << std::endl;
		nodePtr = nodePtr->next;
	}
}

template<class T>
void LinkedList10<T>::reverseList() {
	LinkNode10<T>* currentNode = nullptr;
	LinkNode10<T>* previousNode = nullptr;
	LinkNode10<T>* nextNode = nullptr;

	//if list is empty
	if (!head) {
		return;
	}
	currentNode = head;
	while (currentNode) {
		//-------------------------------------------------------------------------------------
				//save the memory location of the next node
		nextNode = currentNode->next;
		//-------------------------------------------------------------------------------------
				//Reverse current node pointer
		currentNode->next = previousNode;
		//-------------------------------------------------------------------------------------

				//move the position of pointers up one in the list
		previousNode = currentNode;
		currentNode = nextNode;
		//-------------------------------------------------------------------------------------

	}
	//previouse node will be the one that points to nullptr at the end of the while loop (the end of the old list being reversed) 
	head = previousNode;
}

template<class T>
int LinkedList10<T>::search(T v) {
	LinkNode10<T>* nodePtr;
	int position;

	if (!head) {
		return -1;
	}

	nodePtr = head;
	position = 1;

	while (nodePtr != nullptr) {
		if (nodePtr->value == v) {
			return position;
		}
		nodePtr = nodePtr->next;
		position++;
	}

	return -1;
}

template<class T>
void LinkedList10<T>::insertAtPosition(int position, T value) {

	LinkNode10<T>* newNode;
	LinkNode10<T>* nodePtr;
	LinkNode10<T>* previousNode = nullptr;

	int counter;

	newNode = new LinkNode10<T>(value);

	//If there are no nodes in the list then INSERT the new node into head
	if (!head) {
		head = newNode;
		newNode->next = nullptr;
	}
	else {

		counter = 0;
		nodePtr = head;
		previousNode = nullptr;

		//Skip all nodes untill we reach the nedo f the list. IF the counter and position match then break the while loop
		while (nodePtr != nullptr) {
			if (counter == position) {
				break;
			}
			previousNode = nodePtr; //save position of current node
			nodePtr = nodePtr->next; //move to next node
			counter++;
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

template<class T>
void LinkedList10<T>::removeAtPosition(int position) {

	LinkNode10<T>* nodePtr;
	LinkNode10<T>* previousNode = nullptr;
	bool validPosition = false;
	int counter;

	//If there are no nodes in the list then INSERT the new node into head
	if (!head) {
		return;
	}
	else {

		counter = 0;
		nodePtr = head;
		previousNode = nullptr;

		//Skip all nodes untill we reach the node of the list. IF the counter and position match then break the while loop
		while (nodePtr != nullptr) {
			if (counter == position) {
				validPosition = true;
				break;
			}
			previousNode = nodePtr; //save position of current node
			nodePtr = nodePtr->next; //move to next node
			counter++;
		}
		if (validPosition) {
			//if the node to be deleted is the first node in the list
			if (nodePtr == head) {
				head = nodePtr->next;
				delete nodePtr;
			}
			else {
				previousNode->next = nodePtr->next;
				delete nodePtr;
			}
		}
	}

}
template <class T>
T LinkedList10<T>::returnLargest() {

	LinkNode10<T>* nodePtr;

	T largest_value = NULL;

	//If list is empty
	if (!head) {
		return largest_value;
	}
	//If nodes already exist then...
	else {
		nodePtr = head;
		//traverse the list
		//Find the last node in the list
		while (nodePtr->next) { //if it returns false (if the pointer returns 0 "nullptr"
			nodePtr = nodePtr->next;
			if (largest_value < nodePtr->value) {
				largest_value = nodePtr->value;
			}
		}
		return largest_value;
	}

}
template <class T>
T LinkedList10<T>::returnSmallest() {

	LinkNode10<T>* nodePtr;

	T smallest_value = NULL;

	//If list is empty
	if (!head) {
		return smallest_value;
	}
	//If nodes already exist then...
	else {
		nodePtr = head;
		smallest_value = head->value;
		//traverse the list
		while (nodePtr->next) { //if it returns false (if the pointer returns 0 "nullptr"
			nodePtr = nodePtr->next;
			if (smallest_value > nodePtr->value) {
				smallest_value = nodePtr->value;
			}
		}
		return smallest_value;
	}
}

template <class T>
T LinkedList10<T>::average() {

	LinkNode10<T>* nodePtr;
	int counter = 0;
	T average = NULL;

	//If list is empty
	if (!head) {
		return average;
	}
	//If nodes already exist then...
	else {
		nodePtr = head;

		//traverse the list
		while (nodePtr->next) { //if it returns false (if the pointer returns 0 "nullptr"
			counter++;
			average += nodePtr->value;
			nodePtr = nodePtr->next;
		}
		//the last node will be skipped in the while loop so we must work with it here
		counter++;
		average += nodePtr->value;
		average /= counter;
		return average;
	}
}

template <class T>
T LinkedList10<T>::total() {

	LinkNode10<T>* nodePtr;
	T total = NULL;

	//If list is empty
	if (!head) {
		return total;
	}
	//If nodes already exist then...
	else {
		nodePtr = head;

		//traverse the list
		while (nodePtr->next) { //if it returns false (if the pointer returns 0 "nullptr"
			total += nodePtr->value;
			nodePtr = nodePtr->next;
		}
		//the last node will be skipped in the while loop so we must work with it here
		total += nodePtr->value;
		return total;
	}
}

template<class T>
T LinkedList10<T>::returnValueAtIndex(int position) {

	LinkNode10<T>* nodePtr;
	T emptyList = NULL;
	int counter;

	//If there are no nodes in the list then return NULL
	if (!head) {
		return emptyList;
	}
	else {

		counter = 0;
		nodePtr = head;

		//Skip all nodes untill we reach the nedo f the list. IF the counter and position match then break the while loop
		while (nodePtr) {
			if (counter == position) {
				break;
			}
			nodePtr = nodePtr->next; //move to next node
			counter++;
		}

		return nodePtr->value;
		//if the new node is to be the 1st in the list insert it before all other nodes.
		
	}
}


//Destructor
template<class T>
LinkedList10<T>::~LinkedList10() {
	LinkNode10<T>* nodePtr;
	LinkNode10<T>* nextNode;

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


