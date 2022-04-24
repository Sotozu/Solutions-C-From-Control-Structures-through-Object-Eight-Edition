#include <iostream>
#include <time.h>
using namespace std;

//20. Random Number Guessing Game

int main() {
	int random_num, user_input;

	srand(time(0));

	random_num = (rand() % 100) + 1 ;
	cout << "GUESS MY NUMBER!\n";
	do {
		cout << "Guess: ";
		cin >> user_input;

		if (user_input < random_num) {
			cout << "Try higher!\n";
		}
		else if (user_input > random_num) {
			cout << "Try lower!\n";
		}

	} while (user_input != random_num);

	cout << "CONGRATULATIONS! THE NUMBER IS: " << random_num << endl;

	cout << endl << "Alex" << endl;

	return 0;
}