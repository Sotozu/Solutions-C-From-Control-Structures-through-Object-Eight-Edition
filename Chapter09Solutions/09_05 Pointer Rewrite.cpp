#include <iostream>

using namespace std;

int doSomething(int*, int*);

int main() {
	int result;

	int x_variable = 5;
	int* xptr = &x_variable;

	int y_variable = 10;
	int* yptr = &y_variable;

	result = doSomething(xptr, yptr);

	cout << result << endl;

	return 0;
}

int doSomething(int* x, int* y) {
	int temp = *x; //temp = 5
	*x = *y * 10; //y = 10 -> thus 10*10 = 100. New value of *x is 100
	*y = temp * 10; // temp = 5 -> this 5*10 = 50. New value of *y is 50
	return (*x + *y); //should return 150 -> (100 + 50)
}