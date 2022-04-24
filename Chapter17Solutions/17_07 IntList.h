#pragma once
#include  "07 IntNode.h"
#include <iostream>
class IntList07 {

private:
	IntNode07* head;
public:
	//Constructor
	IntList07();

	//Copy Constructor
	IntList07(IntList07* L);


	//Linked List Operations
	void appendNode(int);
	void insertNode(int);
	void deleteNode(int);
	void print() const;
	void reverseList();
	int search(int v);
	void insertAtPosition(int position, int value);
	void removeAtPosition(int position);

	//Destructor
	~IntList07();

};
