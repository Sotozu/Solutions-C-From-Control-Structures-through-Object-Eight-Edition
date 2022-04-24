#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct DMachine {
	string drink_n;
	double drink_c;
	int num_drinks;
};
enum Machine { EXIT, OPERATING };

void DisplayMenu();
bool ValidInput(int);
bool ValidInput(double);

int main() {
	const int SIZE = 5;
	Machine machine_state;
	float user_money;
	int user_choice;
	float return_amount;
	float total_revenue = 0;

	machine_state = OPERATING;
	DMachine softdrinks[SIZE] = {

	{ "Cola", .75, 20 } ,
	{ "Root Beer", .75, 20 } ,
	{ "Lemon-Lime", .75, 20 } ,
	{ "Grape Soda", .80, 20 } ,
	{ "Cream Soda", .80, 20 }

	};

	cout << showpoint << fixed << setprecision(2);

	do {

		DisplayMenu();

		do {
			cout << "ENTER OPTION: ";
			cin >> user_choice;

		} while (!ValidInput(user_choice));



		cout << endl;

		if (user_choice == 6) {
			machine_state = EXIT;

		}
		else if (softdrinks[user_choice].num_drinks == 0) {
			cout << "OUT OF DRINK CHOICE. CHOOSE ANOTHER PLEASE.\n";
		}
		else {

			do {
				cout << "Please enter coins (MAX $1.00): $";
				cin >> user_money;
			} while (!ValidInput(user_money));

			cout << endl;


			switch (user_choice) {
			case 1:
				return_amount = user_money - softdrinks[user_choice].drink_c;
				if (return_amount < 0) {
					cout << "Not enough coins.\n";
				}
				else if (return_amount >= 0) {
					cout << "Change: $" << return_amount << endl;
					softdrinks[user_choice].num_drinks--;
					total_revenue += softdrinks[user_choice].drink_c;
				}
				break;
			case 2:
				return_amount = user_money - softdrinks[user_choice].drink_c;
				if (return_amount < 0) {
					cout << "Not enough coins.\n";
				}
				else if (return_amount >= 0) {
					cout << "Change: $" << return_amount << endl;
					softdrinks[user_choice].num_drinks--;
					total_revenue += softdrinks[user_choice].drink_c;
				}
				break;
			case 3:
				return_amount = user_money - softdrinks[user_choice].drink_c;
				if (return_amount < 0) {
					cout << "Not enough coins.\n";
				}
				else if (return_amount >= 0) {
					cout << "Change: $" << return_amount << endl;
					softdrinks[user_choice].num_drinks--;
					total_revenue += softdrinks[user_choice].drink_c;
				}
				break;
			case 4:
				return_amount = user_money - softdrinks[user_choice].drink_c;
				if (return_amount < 0) {
					cout << "Not enough coins.\n";
				}
				else if (return_amount >= 0) {
					cout << "Change: $" << return_amount << endl;
					softdrinks[user_choice].num_drinks--;
					total_revenue += softdrinks[user_choice].drink_c;
				}
				break;
			case 5:
				return_amount = user_money - softdrinks[user_choice].drink_c;
				if (return_amount < 0) {
					cout << "Not enough coins.\n";
				}
				else if (return_amount >= 0) {
					cout << "Change: $" << return_amount << endl;
					softdrinks[user_choice].num_drinks--;
					total_revenue += softdrinks[user_choice].drink_c;
				}
			}
		}
		cout << endl;
	} while (machine_state != EXIT);

	if (total_revenue > 0) {
		cout << "Total Revenue: $" << total_revenue << endl;
		cout << "GOOD BYE.\n";
	}
	else {
		cout << "GOOD BYE.\n";
	}




	return 0;
}

void DisplayMenu() {
	cout << "----DRINK MACHINE MENU----" << endl;
	cout << "1. COLA" << endl;
	cout << "2. ROOT BEER" << endl;
	cout << "3. LEMON-LIME" << endl;
	cout << "4. GRAPE SODA" << endl;
	cout << "5. CREAM SODA" << endl;
	cout << "6. EXIT" << endl;
	cout << endl;
}

bool ValidInput(double user_money) {
	if (user_money < 0 || user_money > 1) {
		cout << "ERROR: Please enter a valid choice.\n";
		return false;
	}
	else {
		return true;
	}
}
bool ValidInput(int user_choice) {

	if (user_choice < 1 || user_choice > 6) {
		cout << "ERROR: Please enter a valid choice.\n";
		return false;
	}
	else {
		return true;
	}
}