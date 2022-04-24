#pragma once
// Specification file for the IntStack07 class 

class IntStack07
{
private:
int* stackArray; // Pointer to the stack array 
int stackSize; // The stack size 
 int top; // Indicates the top of the stack 

 public:
// Constructor 
IntStack07(int);

// Copy constructor 
IntStack07(const IntStack07&);

// Destructor 
~IntStack07();

// Stack operations 
void push(int);
void pop(int&);
bool isFull() const;
bool isEmpty() const;
};
