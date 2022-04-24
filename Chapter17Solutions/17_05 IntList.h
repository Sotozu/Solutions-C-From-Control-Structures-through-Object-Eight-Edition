#pragma once
#include  "05 IntNode.h"
#include <iostream>
class IntList05 {

private:
	IntNode05* head;
public:
	//Constructor
	IntList05();

	//Copy Constructor
	IntList05(IntList05* L);


	//Linked List Operations
	void appendNode(int);
	void insertNode(int);
	void deleteNode(int);
	void print() const;
	void reverseList();
	int search(int v);

	//Destructor
	~IntList05();

};
