#pragma once
#include  "02 IntNode.h"
#include <iostream>
class IntList02 {

private:
	IntNode02* head;
public:
	//Constructor
	IntList02();


	//Linked List Operations
	void appendNode(int);
	void insertNode(int);
	void deleteNode(int);
	void print() const;

	//Destructor
	~IntList02();

};
