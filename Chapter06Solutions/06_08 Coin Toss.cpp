#include <iostream>
#include <time.h>
using namespace std;


// 8. Coin Toss

void coinToss(int);

int main() {

	int num;

	cout << "COINT TOSS\n";
	cout << "How many times would you like to flip the coin?\n";
	cout << "#: ";
	cin >> num;

	coinToss(num);
}

void coinToss(int num) {
	srand(time(0));
	int count1 = 0;
	int count2 = 0;
	for (int i = 0; i < num; i++) {
		int head_tail = rand() % 2 + 1;
		if (head_tail == 1) {
			cout << "HEADS\n";
			count1++;
		}
		else {
			cout << "TAILS\n";
			count2++;
		}
	}
	cout << "TOTAL HEADS: " << count1 << endl;
	cout << "TOTAL TAILS: " << count2 << endl;
}