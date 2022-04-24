#pragma once
#include  "04 IntNode.h"
#include <iostream>
class IntList04 {

private:
	IntNode04* head;
public:
	//Constructor
	IntList04();

	//Copy Constructor
	IntList04(IntList04* L);


	//Linked List Operations
	void appendNode(int);
	void insertNode(int);
	void deleteNode(int);
	void print() const;
	void reverseList();

	//Destructor
	~IntList04();

};
