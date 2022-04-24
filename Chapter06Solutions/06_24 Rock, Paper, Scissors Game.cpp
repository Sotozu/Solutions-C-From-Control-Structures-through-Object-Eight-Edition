#include <iostream>
#include <iomanip>
using namespace std;

// 24. Rock, Paper, Scissors Game

void randomChoice(int&);
void determineWinner(int, int);
int main() {
	int computer_choice;
	int player_choice;
	randomChoice(computer_choice);

	cout << "Please enter your choice.\n";
	cout << setw(10) << left << "ROCK:" << 1 << endl;
	cout << setw(10) << left << "PAPER:" << 2 << endl;
	cout << setw(10) << left << "SCISSORS: " << 3 << endl << endl;

	cout << "(ENTER) CHOICE: ";
	cin >> player_choice;

	switch (computer_choice) {
	case (1):
		cout << "Computer chooses: ROCK" << endl;
		break;
	case (2):
		cout << "Computer chooses: PAPER" << endl;
			break;
	case (3):
		cout << "Computer chooses: SCISSORS" << endl;
	}

	determineWinner(player_choice, computer_choice);

	return 0;
}
void randomChoice(int& computer_choice) {
	srand(time(0));
		computer_choice = rand() % 3 + 1;
}
void determineWinner(int player_choice, int computer_choice) {
	bool playerWins;

	if (player_choice == computer_choice) {
		cout << "Draw!.\n";
		exit;
	}
	else if (player_choice == 1 && computer_choice == 3) { //player ROCK and computer SCISSORS
		playerWins = true;
	}
	else if (player_choice == 2 && computer_choice == 1) { //player PAPER and computer ROCK
		playerWins = true;
	}
	else if (player_choice == 3 && computer_choice == 2) { //player SCISSORS and computer PAPER
		playerWins = true;
	}
	else {
		playerWins = false;
	}

	if (playerWins == true) {
		cout << "Player is the WINNER!\n";
	}
	else {
		cout << "Computer is the WINNER!\n";
	}
}
