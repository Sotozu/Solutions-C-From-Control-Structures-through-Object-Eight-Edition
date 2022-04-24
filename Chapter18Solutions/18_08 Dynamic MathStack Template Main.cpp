#include <iostream>
#include "08 MathStack.h"


int main() {

	int i_var;
	double d_var;
	char c_var;
	MathStack08<int> myStack;

	myStack.push(1);
	myStack.push(2);

	myStack.add();
	myStack.pop(i_var);

	std::cout << i_var << std::endl;

	MathStack08<double> myStack01;
	
	myStack01.push(1.1);
	myStack01.push(2.2);

	myStack01.add();
	myStack01.pop(d_var);

	std::cout << d_var << std::endl;

	MathStack08<char> myStack02;

	//33 + 33 = 66 which in ASCII is 'B'
	myStack02.push(33);
	myStack02.push(33);

	myStack02.add();
	myStack02.pop(c_var);

	std::cout << c_var << std::endl;




	return 0;
}