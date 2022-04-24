// Implementation file for the MathStack07 class 
#include "07 MathStack.h"


//************************************************ 
// Member function add. add pops * 
// the first two values off the stack and * 
// adds them. The sum is pushed onto the stack. * 
//************************************************ 

void MathStack07::add()
 {
	int num, sum;

	// Pop the first two values off the stack. 
	pop(sum);
	pop(num);

	// Add the two values, store in sum. 
	sum += num;

	// Push sum back onto the stack. 
	push(sum);
}

//*********************************************** 
// Member function sub. sub pops the * 
// first two values off the stack. The * 
// second value is subtracted from the * 
// first value. The difference is pushed * 
// onto the stack. * 
//*********************************************** 

void MathStack07::sub()
{
	int num, diff;

	// Pop the first two values off the stack. 
	pop(diff);
	pop(num);

	// Subtract num from diff. 
	diff -= num;

	// Push diff back onto the stack. 
	push(diff);
}

void MathStack07::mult() 
{
	int num, product;
	pop(num);
	pop(product);
	product *= num;
	push(product);
}

void MathStack07::div() 
{
	int num, quotient;
	pop(num);
	pop(quotient);

	quotient /= num;
	push(quotient);
}
void MathStack07::addAll()
{
	int num, total = 0;
	while (!isEmpty()) {
		pop(num);
		total += num;
	}

	push(total);
}
void MathStack07::multAll() 
{
	int num, product = 0;

	pop(num);
	product = num;

	while (!isEmpty()) {
		pop(num);
		product *= num;
	}

	push(product);
}
