#pragma once
#include  "06 IntNode.h"
#include <iostream>
class IntList06 {

private:
	IntNode06* head;
public:
	//Constructor
	IntList06();

	//Copy Constructor
	IntList06(IntList06* L);


	//Linked List Operations
	void appendNode(int);
	void insertNode(int);
	void deleteNode(int);
	void print() const;
	void reverseList();
	int search(int v);
	void insertAtPosition(int position, int value);

	//Destructor
	~IntList06();

};
