#include <iostream>
#include <time.h>
#include <iomanip>
using namespace std;

//17. Math Tutor

int main() {

	
	const int MIN_VALUE = 1;
	const int MAX_VALUE = 100;
	int num1, num2;
	srand(time(0));
	num1 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
	num2 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;

	int sum = num1 + num2;

	cout << "This program displays two random numbers to be added and then before\n"
	<< "outputting the result requests for the \"Enter\" button to be pressed.\n\n";

	cout << right << setw(5) << num1<<endl;
	cout <<"+"<<setw(4) << num2<<endl;
	cout << "_____" <<endl;

	cin.get();
	cout << right << setw(5) << sum << endl;
	cout << endl << "Alex" << endl;

	return 0;
}