#include <iostream>
#include <iomanip>
#include <ctime>

#include "13 Tossing Coins for a Dollar.h"

using namespace std;

int main() {
	srand(time(NULL));
	const int size = 3;
	int flip_amount = 8;
	char user_choice, choice_upper;
	float total = 0;
	Coin coin;

	cout << "Welcome to \"Coins for a Dollar!\"" << endl << endl;
	cout << "EXPLAINED:" << endl;
	cout << "Flip either a Quarter, Dime or Nickle." << endl;
	cout << "For everytime the coins lands on heads you will recieve that amount of cents." << endl;
	cout << "Quarter = 25 , Dime = 10, Nickle = 5" << endl;
	cout << "Get to $1.00 and you WIN!" << endl;
	cout << "Go over $1.00 and you LOSE!" << endl;
	cout << "You have " << flip_amount <<" times to flip!" << endl;
	cout << endl;

	for (int i = 0; i < flip_amount; i++) {
		cout << "CHOOSE WHICH COIN TO FLIP?" << endl;
		cout << "A) Quarter = 25 cents" << endl;
		cout << "B) Dime = 10 cents" << endl;
		cout << "C) Nickle = 5 cents" << endl;
		cout << endl;
		cout << showpoint << fixed << setprecision(2);

		do {
			cout << "CHOICE: "; cin >> user_choice;
			choice_upper = toupper(user_choice);
			if (choice_upper != 'A' && choice_upper != 'B' && choice_upper != 'C') {
				cout << "ERROR: Please enter a valid choice.\n";
			}
		} while (choice_upper != 'A' && choice_upper != 'B' && choice_upper != 'C');

		coin.Toss();

		switch (choice_upper
			) {
		case 'A':
			if (coin.returnSideUp() == "Heads") {
				cout << coin.returnSideUp() << "+ .25" << endl;

				total += .25;
				}
			else {
				cout << coin.returnSideUp() << "+ 0" << endl;
			}
			break;
		case 'B':
			if (coin.returnSideUp() == "Heads") {
				cout << coin.returnSideUp() << "+ .10" << endl;
				total += .10;
			}
			else {
				cout << coin.returnSideUp() << "+ 0" << endl;
			}
			break;
		case 'C':
			if (coin.returnSideUp() == "Heads") {
				cout << coin.returnSideUp() << "+ .5"<< endl;
				total += .05;
			}
			else {
				cout << coin.returnSideUp() << "+ 0" << endl;
			}
			break;
		default:
			cout << "ERRROR.\n";
			break;
		}
		cout << "TOTAL: $" << total << endl;
		cout << "FLIPS LEFT: " << flip_amount - (i+1) << endl;
		if (total == 1) {
			cout << endl << "YOU WIN!" << endl;
			return 0;
		}
		else if (total > 1) {
			cout << "YOU LOSE!" << endl;
			return 0;
		}
		cout << endl;
	}
	

	cout << "YOU LOSE!" << endl;

	return 0;
}
