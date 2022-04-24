#include <iostream>

using namespace std;

const int ROW = 3;
const int COL = 3;
// Checks if the players choices are the values 1, 2 or 3
void validateInput(int& player_row, int& player_col);
// Displays the board
void showBoard(const char game_array[][COL], int ROW);
// Checks for winning conditions
bool checkWin(const char game_array[][COL], int ROW, char player);
// Checks if the position on the board has input in it already
void choiceOverlapCheck(const char game_array[][COL], int& player_row, int& player_col, int ROW);

int main() {

	int player_row, player_col;
	bool game_complete = false;
	char player1 = 'X', player2 = 'O', winner;

	int max_moves = 0; // when this iterated to 9 the game is over 

	char game_array[COL][ROW] = { { '*','*','*' },
								{ '*', '*', '*' },
								{ '*', '*', '*' } };

	showBoard(game_array, ROW);

	cout << "Player one will be 'X'. Player two will be 'O'.\n";
	cout << "Player will select the row and column to place their 'X'/'O'.\n";

	do { // will go on untill 9 moves are made, which ends the game.
		 // if a win is determined.
		if (game_complete == true) {
			break;
		}
		if (max_moves == 9) {
			break;
		}
		for (int i = 1; i < 3; i++) {
			cout << "PLAYER " << i << endl;
			//Will check and confirm if player inputs are acceptable
			validateInput(player_row, player_col);
			//Will check if the position of the board chosen already has input. Will fix 
			choiceOverlapCheck(game_array, player_row, player_col, ROW);

			if (i == 1) {
				game_array[player_row][player_col] = player1;
				game_complete = checkWin(game_array, ROW, player1);
				winner = player1;

			}
			else if (i == 2) {
				game_array[player_row][player_col] = player2;
				game_complete = checkWin(game_array, ROW, player2);
				winner = player2;
			}

			if (game_complete == true) {//if win condition has been met then break the loop and proceed.
				break;
			}

			max_moves++;
			if (max_moves == 9) {// the maximum amount of moves have been played out. break and proceed.
				break;
			}

			showBoard(game_array, ROW);
			cout << endl;
		}
	} while (game_complete != true || max_moves != 9);

	cout << "Player '" << winner << "' is the winner!\n";
	cout << endl;
	showBoard(game_array, ROW);
	cout << endl;

	return 0;
}


void showBoard(const char game_array[][COL], int ROW) {

	for (int i = 0; i < COL; i++) {
		for (int j = 0; j < ROW; j++) {
			cout << game_array[i][j];
		}
		cout << endl;
	}
}

bool checkWin(const char game_array[][COL], int ROW, char player) {
	int win_count = 0; //if this becomes 3 then we have a win
	char checking_type = player;// will be either 'X' or 'O'	

	for (int i = 0; i < ROW; i++) { // checking rows for a win
		for (int j = 0; j < COL; j++) {
			if (game_array[i][j] == checking_type) {
				win_count++;
			}
		}
		if (win_count == 3) {

			return true;
		}
		win_count = 0; //reset the count back to 0
	}



	for (int j = 0; j < ROW; j++) { // checking columns for a win
		for (int i = 0; i < COL; i++) {
			if (game_array[i][j] == checking_type) {
				win_count++;
			}
		}
		if (win_count == 3) {

			return true;
		}
		win_count = 0; //reset the count back to 0
	}

	if (game_array[0][0] == checking_type) { //checks left to right for a cross win
		if (game_array[1][1] == checking_type) {
			if (game_array[2][2] == checking_type) {
				return true;
			}
		}
	}

	if (game_array[0][2] == checking_type) { //checks right to left for a cross win
		if (game_array[1][1] == checking_type) {
			if (game_array[2][0] == checking_type) {
				return true;
			}
		}
	}

	return false;
}


void choiceOverlapCheck(const char game_array[][COL], int& player_row, int& player_col, int ROW) {
	while (game_array[player_row][player_col] != '*') {

		cout << "ERROR: The position is already occupied by an 'X'/'O'.\n";
		cout << "Please choose another position.\n";
		validateInput(player_row, player_col);
	}
}

void validateInput(int& player_row, int& player_col) {

	cout << "Enter Row: ";
	cin >> player_row;
	while (player_row < 1 || player_row > 3) {
		cout << "ERROR: Please enter a row with a value of 1 - 3.\n";
		cout << "Enter Row: ";
		cin >> player_row;
	}
	cout << "Enter Column: ";
	cin >> player_col;
	while (player_col < 1 || player_col > 3) {
		cout << "ERROR: Please enter a column with a value of 1 - 3.\n";
		cout << "Enter Column: ";
		cin >> player_col;
	}

	// The first row is actually in position 0.
	// when the player choose 1 it should indicate position 0. 
	// Thats why we subtract 1 to get it to position 0.
	// This is for the player expectations of choosing the "first" column/row.
	player_row -= 1;
	player_col -= 1;
}