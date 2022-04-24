#include <iostream>
using namespace std;

//13. Book Club Points

int main() {
	
	cout << "This program awards points to book club members based on the number of books they have purchased."<<endl;
	int booknum;

	cout << "Please enter the number of books you have purchased this month: ";

	cin >> booknum;

	if (booknum >= 4) {
		cout << "You have earned 60 points!";
	}
	else if (booknum == 3) {
		cout << "You have earned 30 points!";
	}
	else if (booknum == 2) {
		cout << "You have earned 15 points!";
	}
	else if (booknum == 1) {
		cout << "You have earned 5 points!";
	}
	else if (booknum == 0) {
		cout << "You have earned 0 points!";
	}

	return 0;
}