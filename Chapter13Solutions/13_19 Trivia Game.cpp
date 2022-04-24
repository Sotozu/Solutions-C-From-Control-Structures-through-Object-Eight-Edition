#include <iostream>
#include <ctime>

#include "19 Trivia Game.h"

using namespace std;

int main() {
	srand(time(0));
	const int QUESTION = 10;
	int player1_score = 0, player2_score = 0;
	int player1_choice, player2_choice;

	Trivia19 game;

	for (int i = 0; i < QUESTION; i++) {
		game.playGame(i);

		cout << "Player 1: "; cin >> player1_choice;
	
		cout << "Player 2: "; cin >> player2_choice;
		
		cout << endl;


		if (game.isCorrect(player1_choice, i)) {
			cout << "CORRECT choice player 1!" << endl;
			player1_score++;
		}
		else {
			cout << "WRONG choice player 1!" << endl;
		}

		if (game.isCorrect(player2_choice, i)) {
			cout << "CORRECT choice player 2!" << endl;
			player1_score++;
		}
		else {
			cout << "WRONG choice player 2!" << endl;
		}
		cout << endl;
	}


	cout << endl;
	if (player1_score < player2_score) {
		cout << "PLAYER 2 WINS!" << endl;
	}
	else {
		cout << "PLAYER 1 WINS!" << endl;
	}

return 0;
}
