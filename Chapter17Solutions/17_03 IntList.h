#pragma once
#include  "03 IntNode.h"
#include <iostream>
class IntList03 {

private:
	IntNode03* head;
public:
	//Constructor
	IntList03();

	//Copy Constructor
	IntList03(IntList03* L);


	//Linked List Operations
	void appendNode(int);
	void insertNode(int);
	void deleteNode(int);
	void print() const;

	//Destructor
	~IntList03();

};
