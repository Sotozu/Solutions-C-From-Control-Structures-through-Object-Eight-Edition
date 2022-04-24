#pragma once

// Specification file for the MathStack class 

#include "08 Dynamic Stack Template.h"
template<class T>
class MathStack08 : public Stack08<T>
{
public:
	// Constructor 
	MathStack08() : Stack08<T>() {}

	// MathStack operations 
	void add();
	void sub();
	void mult();
	void div();
	void addAll();
	void multAll();
};



//************************************************ 
// Member function add. add pops * 
// the first two values off the stack and * 
// adds them. The sum is pushed onto the stack. * 
//************************************************ 

template<class T>
void MathStack08<T>::add()
{
	T num, sum;

	// Pop the first two values off the stack. 
	Stack08<T>::pop(sum);
	Stack08<T>::pop(num);

	// Add the two values, store in sum. 
	sum += num;

	// Push sum back onto the stack. 
	Stack08<T>::push(sum);
}

//*********************************************** 
// Member function sub. sub pops the * 
// first two values off the stack. The * 
// second value is subtracted from the * 
// first value. The difference is pushed * 
// onto the stack. * 
//*********************************************** 

template<class T>
void MathStack08<T>::sub()
{
	T num, diff;

	// Pop the first two values off the stack. 
	Stack08<T>::pop(diff);
	Stack08<T>::pop(num);

	// Subtract num from diff. 
	diff -= num;

	// Push diff back onto the stack. 
	Stack08<T>::push(diff);
}

template<class T>
void MathStack08<T>::mult()
{
	T num, product;
	Stack08<T>::pop(num);
	Stack08<T>::pop(product);
	product *= num;
	Stack08<T>::push(product);
}

template<class T>
void MathStack08<T>::div()
{
	T num, quotient;
	Stack08<T>::pop(num);
	Stack08<T>::pop(quotient);

	quotient /= num;
	Stack08<T>::push(quotient);
}

template<class T>
void MathStack08<T>::addAll()
{
	T num, total;
	Stack08<T>::pop(num);
	total = num;
	while (!Stack08<T>::isEmpty()) {
		Stack08<T>::pop(num);
		total += num;
	}

	Stack08<T>::push(total);
}

template<class T>
void MathStack08<T>::multAll()
{
	T num, product;

	Stack08<T>::pop(num);
	product = num;

	while (!Stack08<T>::isEmpty()) {
		Stack08<T>::pop(num);
		product *= num;
	}

	Stack08<T>::push(product);
}
