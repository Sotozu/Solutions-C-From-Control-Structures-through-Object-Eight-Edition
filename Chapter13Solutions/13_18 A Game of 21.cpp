#include <iostream>
#include <ctime>

#include "18 A Game of 21.h"
#include "18 Die.h"

using namespace std;

int main() {
	srand(time(0));

	char cont, up_cont;

	Die dice(12);
	Game21 my_game;
	bool check = false;
	cout << "Welcome to \"Game 21\"." << endl;
	cout << "The computer will roll a 12 sided die.\nThe computer is playing as well but you won't know it's total until you win, stop or lose the game.\n";
	cout << "Closest to 21 WINS!" << endl;

	cout << "Click \'ENTER\' to roll the dice.";
	cin.get();
	do {

		dice.roll();
		my_game.addCompScore(dice.getValue());

		dice.roll();
		my_game.addUserScore(dice.getValue());
		cout << "Your Score: " << my_game.getUserScore() << endl;
		if (my_game.getUserScore() == 21 && my_game.getCompScore() == 21) {
			cout << endl;
			cout << "YOU AND THE COMPUTER WIN!" << endl;
			cout << "..." << endl;
			cout << "Your Score: " << my_game.getUserScore() << endl;
			cout << "Computer Score: " << my_game.getCompScore() << endl;
			check = true;

		}
		if (my_game.getUserScore() == 21) {
			cout << endl;
			cout << "YOU WIN!" << endl;
			cout << "..." << endl;
			cout << "Your Score: " << my_game.getUserScore() << endl;
			cout << "Computer Score: " << my_game.getCompScore() << endl;
			check = true;
		}
		if (my_game.getUserScore() > 21) {
			cout << endl;
			cout << "YOU LOSE!" << endl;
			cout << "..." << endl;
			cout << "Your Score: " << my_game.getUserScore() << endl;
			cout << "Computer Score: " << my_game.getCompScore() << endl;
			check = true;
			break;
		}
		cout << "Roll Again?" << endl;
		
		do {
			cout << "(Y/N): "; cin >> cont;
			up_cont = toupper(cont);
			if (up_cont != 'Y' && up_cont != 'N') {
				cout << "ERROR: Please enter a valid option.\n" << endl;
			}
		} while (up_cont != 'Y' && up_cont != 'N');
		
	} while (up_cont != 'N');
	
	if (check == false) {
		cout << endl;

		cout << my_game.Win() << endl;

		cout << "Your Score: " << my_game.getUserScore() << endl;
		cout << "Computer Score: " << my_game.getCompScore() << endl;
	}

	
	return 0;
}
