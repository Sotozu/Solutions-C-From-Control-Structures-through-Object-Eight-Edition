#include <string>
#include <iostream>

using namespace std;

struct Soccer {
	string name;
	int num;
	int points;
};

void inputData(Soccer&);
void outPutData(Soccer&);

int main() {

	int total_points = 0;
	int index_of_mvp, most_points;


	const int SIZE = 12;
	Soccer player[SIZE];

	cout << "INSERT TEAM DATA" << endl;
	cout << "---------------------------------" << endl;


	for (int i = 0; i < SIZE; i++) {
		inputData(player[i]);
		cout << endl;
	}

	cout << "TEAM ROSTER" << endl;
	cout << "---------------------------------" << endl;
	for (int i = 0; i < SIZE; i++) {
		outPutData(player[i]);
		total_points += player[i].points;
		cout << endl;
	}

	most_points = player[0].points;
	index_of_mvp = 0;
	for (int i = 1; i < SIZE; i++) {
		if (most_points < player[i].points) {
			most_points = player[i].points;
			index_of_mvp = i;
		}
	}

	cout << "TEAM STATISTICS" << endl;
	cout << "---------------------------------" << endl;
	cout << "Total Points Scored: " << total_points << endl;
	cout << "MVP NAME: " << player[index_of_mvp].name << endl;
	cout << "MVP SCORED POINTS: " << player[index_of_mvp].points << endl;

	return 0;
}

void inputData(Soccer& player) {
	static int p_num = 1;
	cout << "Player " << p_num << endl;
	cout << "NAME: ";
	getline(cin, player.name);

	do {
		cout << "NUMBER: ";

		cin >> player.num;

		if (player.num < 0) {
			cout << "ERROR: Player number can't be negative.\n";
		}
	} while (player.num < 0);

	do {
		cout << "POINTS SCORED: ";

		cin >> player.points;

		if (player.points < 0) {
			cout << "ERROR: Points scored can't be negative.\n";
		}
	} while (player.points < 0);

	p_num++;
	cin.ignore();
}

void outPutData(Soccer& player) {
	static int p_num = 1;
	cout << "Name: " << player.name << endl;
	cout << "Number: " << player.num << endl;
	cout << "Points: " << player.points << endl;
}