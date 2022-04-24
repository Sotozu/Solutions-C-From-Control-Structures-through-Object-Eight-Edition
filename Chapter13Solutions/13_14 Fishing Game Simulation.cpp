#include <iostream>

#include "14 Fishing Game Simulation.h"

using namespace std;

void menu();
int main() {
	const int dice6 = 6;
	bool end = false;
	int user_choice, total_points = 0;
	Die my_die(dice6);
	cout << "Welcome to \"Fishing Game Simulation\"!" << endl;
	cout << endl;
	do {
		
		menu();
		do {
			cout << "CHOICE: "; cin >> user_choice;
			if (user_choice != 1 && user_choice != 2) {
				cout << "ERROR: Please enter a valid menu choice.\n";
			}
		} while (user_choice != 1 && user_choice != 2);

		if (user_choice == 2) {
			end = true;
			break;
		}
		else {
			my_die.roll();
			cout << "You cought a..." << endl;
			switch (my_die.getValue()) {
			case 1:
				cout << "BIG FISH! + 100 points" << endl;
				total_points += 100;
				cout << "TOTAL POINTS: " << total_points << endl;
				break;
			case 2:
				cout << "small fish! + 10 points" << endl;
				total_points += 10;
				cout << "TOTAL POINTS: " << total_points << endl;
				break;
			case 3:
				cout << "Jelly Fish! + 5 points" << endl;
				total_points += 5;
				cout << "TOTAL POINTS: " << total_points << endl;
				break;
			case 4:
				cout << "Old Boot! - 50 points" << endl;
				total_points -= 50;
				cout << "TOTAL POINTS: " << total_points << endl;
				break;
			case 5:
				cout << "Crab! + 20 points" << endl;
				total_points += 20;
				cout << "TOTAL POINTS: " << total_points << endl;
				break;
			case 6:
				cout << "Squid! + 50 points" << endl;
				total_points += 50;
				cout << "TOTAL POINTS: " << total_points << endl;
				break;
			default:
				cout << "ERROR:" << endl;
				break;
			}
		}
	} while (end == false);

	cout << "TOTAL POINTS: " << total_points << endl;
	return 0;
}

void menu() {
	cout << "MENU" << endl;
	cout << "1. Fish" << endl;
	cout << "2. Quit" << endl;
	cout << endl;
}
