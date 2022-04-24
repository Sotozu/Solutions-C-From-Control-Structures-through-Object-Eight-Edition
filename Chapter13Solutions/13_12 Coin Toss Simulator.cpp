#include <iostream>
#include <ctime>

#include "12 Coin Toss Simulator.h"

using namespace std;
int main() {
	int c_heads = 0, c_tails = 0;
	srand(time(NULL));

	Coin game;

	for (int i = 0; i < 20; i++) {

		game.Toss();
		cout << game.returnSideUp() << endl;
		if (game.returnSideUp() == "Heads") {
			c_heads++;
		}
		else {
			c_tails++;
		}

	}
	cout << endl;
	cout << "Heads: " << c_heads << endl;
	cout << "Tails: " << c_tails << endl;
	
	return 0;
}
