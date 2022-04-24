#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

enum menu { ENTER_ALL = 1, ENTER_SPECIFIC, DISPLAY_ALL, EXIT };
struct Speaker {
	string name;
	string telephone_number;
	string speaking_topic;
	double fee;
};

void insertData(Speaker&, int);
void menu();
void displayData(Speaker&, int);
void initializeData(Speaker&);
bool checkIfEmpty(Speaker&, int);
int main() {

	const int SIZE = 10;
	Speaker speaker[SIZE];

	int menu_choice;
	int spec_speak;

	for (int i = 0; i < SIZE; i++) {
		initializeData(speaker[i]);
	}
	do {
		menu();
		cout << "\nENTER CHOICE: ";
		cin >> menu_choice;
		cin.ignore();
		switch (menu_choice) {
		case (ENTER_ALL):
			cout << "\nENTER DATA\n\n";
			for (int i = 0; i < SIZE; i++) {
				insertData(speaker[i], i);
				cout << endl;
			}
			cout << endl;
			break;
		case (ENTER_SPECIFIC):

			cout << "WHICH SPEAKER\n";
			for (int i = 0; i < SIZE; i++) {
				cout << "SPEAKER " << i + 1 << endl;
			}
			cout << "ENTER CHOICE: " << endl;
			cin >> spec_speak;
			spec_speak -= 1;
			cin.ignore();
			insertData(speaker[spec_speak], spec_speak);
			cout << endl;
			break;
		case (DISPLAY_ALL):

			for (int i = 0; i < SIZE; i++) {
				if (checkIfEmpty(speaker[i], i) == true) {
					cout << "Speaker " << i + 1 << ": EMPTY" << endl;
				}
				else {
					displayData(speaker[i], i);
				}
			}
			cout << endl;
			break;
		case (EXIT):
			cout << "Thank you" << endl;
			break;
		default:
			break;
		}
	} while (menu_choice != EXIT);
	for (int i = 0; i < SIZE; i++) {

	}

	return 0;
}

void insertData(Speaker& speaker, int speaker_num) {
	cout << "Speaker " << speaker_num + 1 << endl;
	cout << "Name: ";
	getline(cin, speaker.name);
	cout << "Telephone Number: ";
	getline(cin, speaker.telephone_number);
	cout << "Speaking Topic: ";
	getline(cin, speaker.speaking_topic);
	do {
		cout << "Fee Required: $";
		cin >> speaker.fee;
		if (speaker.fee < 0) {
			cout << "ERROR: Please enter a positive value.\n";
		}
	} while (speaker.fee < 0);
	cin.ignore();

}

void menu() {
	cout << "-------MENU-------" << endl;
	cout << "1. ENTER ALL DATA" << endl;
	cout << "2. ENTER SPECIFIC DATA" << endl;
	cout << "3. DISPLAY ALL DATA" << endl;
	cout << "4. EXIT" << endl;
}

void displayData(Speaker& speaker, int speak_num) {
	cout << endl;
	cout << "SPEAKER " << speak_num + 1 << endl;
	cout << "Speaker: " << speaker.name << endl;
	cout << "Telephone Number: " << speaker.telephone_number << endl;
	cout << "Speaking Topic: " << speaker.speaking_topic << endl;
	cout << showpoint << setprecision(2) << fixed;
	cout << "Fee Required: $" << speaker.fee << endl;
	cout << endl;
}

void initializeData(Speaker& speaker) {
	speaker.name = "-1";
	speaker.telephone_number = "-1";
	speaker.speaking_topic = "-1";
	speaker.fee = -1;
}

bool checkIfEmpty(Speaker& speaker, int speaker_num) {
	bool is_empty = true;
	if (speaker.name != "-1") {
		is_empty = false;
	}
	if (speaker.speaking_topic != "-1") {
		is_empty = false;
	}
	if (speaker.telephone_number != "-1") {
		is_empty = false;
	}
	if (speaker.fee != -1) {
		is_empty = false;
	}
	return is_empty;
}