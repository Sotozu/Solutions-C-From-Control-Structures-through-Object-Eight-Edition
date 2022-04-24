#pragma once
#include <iostream>
#include <new> // Needed for bad_alloc exception 
#include <cstdlib> // Needed for the exit function 
using namespace std;

template < class T>
class SimpleVector
{
private:
	T* aptr; // To point to the allocated array 
	int arraySize; // Number of elements in the array 
	void memError(); // Handles memory allocation errors 
	void subError(); // Handles subscripts out of range 

public:
	// Default constructor 
	SimpleVector()
	{
		aptr = 0; arraySize = 0;
	}

	// Constructor declaration 
	SimpleVector(int);

	// Copy constructor declaration 
	SimpleVector(const SimpleVector&);

	// Destructor declaration 
	~SimpleVector();

	// Accessor to return the array size 
	int size() const
	{
		return arraySize;
	}

	// Accessor to return a specific element 
	T getElementAt(int position);

	// Overloaded [] operator declaration 
	T& operator[](const int&);

	//add another element to the array
	void push_back(T);

	void pop_back();
};

//************************************************************ 
// Constructor for SimpleVector class. Sets the size of the * 
// array and allocates memory for it. * 
//************************************************************ 998 Chapter 16 Exceptions, Templates, and the Standard Template Library (STL)

template < class T>
SimpleVector<T>::SimpleVector(int s)
{
	arraySize = s;
	// Allocate memory for the array. 
	try
	{
		aptr = new T[s];
	}
	catch (bad_alloc)
	{
		memError();
	}

	// Initialize the array. 
	for (int count = 0; count < arraySize; count++)
		*(aptr + count) = 0;
}

//******************************************* 
// Copy Constructor for SimpleVector class. * 
//******************************************* 

template < class T>
SimpleVector<T>::SimpleVector(const SimpleVector& obj)
{
	// Copy the array size. 
	arraySize = obj.arraySize;

	// Allocate memory for the array. 
	aptr = new T[arraySize];
	if (aptr == 0)
		memError();

	// Copy the elements of obj's array. 
	for (int count = 0; count < arraySize; count++)
		*(aptr + count) = *(obj.aptr + count);
}

//************************************** 
// Destructor for SimpleVector class. * 
//************************************** 

template < class T>
SimpleVector<T>::~SimpleVector()
{
	if (arraySize > 0)
		delete[] aptr;
}

//******************************************************** 
// memError function. Displays an error message and * 
// terminates the program when memory allocation fails. * 
//******************************************************** 16.4 Class Templates 999

template < class T>
void SimpleVector<T>::memError()
{
	cout << "ERROR:Cannot allocate memory.\n";
	exit(EXIT_FAILURE);
}

//************************************************************ 
// subError function. Displays an error message and * 
// terminates the program when a subscript is out of range. * 
//************************************************************ 

template < class T>
void SimpleVector<T>::subError()
{
	cout << "ERROR: Subscript out of range.\n";
	exit(EXIT_FAILURE);
}

//******************************************************* 
// getElementAt function. The argument is a subscript. * 
// This function returns the value stored at the * 
// subcript in the array. * 
//******************************************************* 

template < class T>
T SimpleVector<T>::getElementAt(int sub)
{
	if (sub < 0 || sub >= arraySize)
		subError();
	return aptr[sub];
}

//******************************************************** 
// Overloaded [] operator. The argument is a subscript. * 
// This function returns a reference to the element * 
// in the array indexed by the subscript. * 
//******************************************************** 

template < class T>
T& SimpleVector<T>::operator[](const int& sub)
{
	if (sub < 0 || sub >= arraySize)
		subError();
	return aptr[sub];
}

template < class T>
void SimpleVector<T>::push_back(T v) {

	int array_new_size = arraySize + 1;

	try
	{
		//create a new array that is temporary and will be +1 larger than the original array;
		T* newArr = new T[array_new_size];

		//copy all the contents of the original array to the newly created temporary array
		memcpy(newArr, aptr, arraySize * sizeof(T));

		//officially resize the original arraySize variable to the new size of origianl+1
		arraySize = array_new_size;

		//delete the original array because it needs to be resized
		delete[] aptr;

		//The orignial array will now be set to the newArray. This means it will receive all its contents AND be one size larger than before
		aptr = newArr;

		//set the last index to the value the client passed into the function
		aptr[arraySize - 1] = v;

	}
	catch (bad_alloc)
	{
		memError();
	}

}

template < class T>
void SimpleVector<T>::pop_back()
{
	int	array_new_size = arraySize - 1;
	try
	{
		//create a new array that is temporary and will be +1 larger than the original array;
		T* newArr = new T[array_new_size];

		//copy all the contents of the original array to the newly created temporary array
		memcpy(newArr, aptr, array_new_size * sizeof(T));

		//officially resize the original arraySize variable to the new size of origianl+1
		arraySize = array_new_size;

		//delete the original array because it needs to be resized
		delete[] aptr;

		//The orignial array will now be set to the newArray. This means it will receive all its contents AND be one size larger than before
		aptr = newArr;

	}
	catch (bad_alloc)
	{
		memError();
	}
}