#include <iostream>

using namespace std;

int lotteryNumber();
bool checkWin(int[], int, int);

int main() {
	const int SIZE = 10;
	bool win;
	int user_numbers[SIZE] = { 13579,  26791,  26792,  33445,  55555,
							62483,  77777,  79422,  85647,  93121 };
	int lottery_number;

	cout << "Please enter the 5 digit winning lottery number.\n";
	lottery_number = lotteryNumber();

	win = checkWin(user_numbers, SIZE, lottery_number);

	if (win == true) {
		cout << "You have a lucky winning ticket!\n";
	}
	else if (win == false) {
		cout << "You don't have a matching ticket.\n";
	}


	return 0;
}

int lotteryNumber() {
	int lottery_number;
	do {
		cout << "Winning Lottery Number: ";
		cin >> lottery_number;
		if (lottery_number < 10000 || lottery_number > 99999) {
			cout << "ERROR: Please enter a 5 digit number.\n";
		}
	} while (lottery_number < 10000 || lottery_number > 99999);
	return lottery_number;
}

bool checkWin(int user_numbers[], int SIZE, int lottery_number) {
	for (int i = 0; i < SIZE; i++) {
		if (user_numbers[i] == lottery_number) {
			return true;
		}
	}
	return false;
}
