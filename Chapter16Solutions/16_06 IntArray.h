#pragma once
class IntArray
{
private:
	int* aptr; // Pointer to the array 
	int arraySize; // Holds the array size 
public:
	//Exception class
	class SubOutRange {};
	IntArray(int); // Constructor 
	IntArray(const IntArray&); // Copy constructor 
	~IntArray(); // Destructor 

	int size() const // Returns the array size 
	{ return arraySize; }

	int& operator[](const int&); // Overloaded [] operator 
};