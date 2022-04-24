#include "06 IntList.h"

//Constructor
IntList06::IntList06() {
	head = nullptr;
}

//Copy Constructor
IntList06::IntList06(IntList06* L) {
	head = nullptr;
	IntNode06* copyNodePtr;

	IntNode06* newlyCreatedNode;

	IntNode06* previouslyCreatedNewNode;

	IntNode06* nodePtr;

	//if list is empty

	if (L->head == nullptr) {
		return;
	}
	else {
		//set the copyNodePtr to the head of the copy list
		copyNodePtr = L->head;

		//create the first copy node
		newlyCreatedNode = new IntNode06(copyNodePtr->value);

		//set head to the first newly copied
		head = newlyCreatedNode;

		//set nodePtr to head
		nodePtr = head;

		//move to the next node in the copy list
		copyNodePtr = copyNodePtr->next;

		while (copyNodePtr) {

			//create a new node
			newlyCreatedNode = new IntNode06(copyNodePtr->value);

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
void IntList06::appendNode(int v) {

	IntNode06* newNode;
	IntNode06* nodePtr;

	//Allocate a new node and store an int there;
	newNode = new IntNode06(v);

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

void IntList06::insertNode(int v) {

	IntNode06* newNode;
	IntNode06* nodePtr;
	IntNode06* previousNode = nullptr;

	newNode = new IntNode06(v);

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

void IntList06::deleteNode(int v) {
	IntNode06* nodePtr; //used to traverse the list
	IntNode06* previousNode = nullptr; // to point to the previouse node

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

void IntList06::print() const {
	IntNode06* nodePtr;

	if (!head) {
		return;
	}
	nodePtr = head;
	while (nodePtr) {
		std::cout << nodePtr->value << std::endl;
		nodePtr = nodePtr->next;
	}
}

void IntList06::reverseList() {
	IntNode06* currentNode = nullptr;
	IntNode06* previousNode = nullptr;
	IntNode06* nextNode = nullptr;

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

int IntList06::search(int v) {
	IntNode06* nodePtr;
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

void IntList06::insertAtPosition(int position, int value) {

	IntNode06* newNode;
	IntNode06* nodePtr;
	IntNode06* previousNode = nullptr;

	int counter;

	newNode = new IntNode06(value);

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


//Destructor
IntList06::~IntList06() {
	IntNode06* nodePtr;
	IntNode06* nextNode;

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

