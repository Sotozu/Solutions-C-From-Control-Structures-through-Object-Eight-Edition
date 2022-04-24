#pragma once
#include  "01 IntNode.h"
class IntList01 {

private:
	IntNode01* head;
public:
	//Constructor
	IntList01();


	//Linked List Operations
	void appendNode(int);
	void insertNode(int);
	void deleteNode(int);

	//Destructor
	~IntList01();

};
