#include <iostream>
#include <string>
using namespace std;

//17. Personal Best

int main() {
	cout << "This program requests the name of a pole vaulter, their recorded attempt and when it was done.\n";

	string name;
	bool check = true;

	struct heigth_date {
		double height;
		string date;
	} record1, record2, record3;

	cout << "\nPlease enter the name of the pole vaulter: ";
	getline(cin, name);
	//cin.ignore();

		do {
			cout << "\nEnter the first recroded jump in meters: ";
			cin >> record1.height;

			if (record1.height < 2 || record1.height > 5) {
				cout << "Please enter a realistic jump (between 2.0m - 5.0m)\n";
				check = false;
			}
			else {
				check = true;
			}
		} while (check == false);
		cin.ignore();
		cout << "Date the jump was recorded (mm/dd/yyyy): ";
		getline(cin, record1.date);

		do {
			cout << "\nEnter the second recroded jump in meters: ";
			cin >> record2.height;

			if (record2.height < 2 || record2.height > 5) {
				cout << "Please enter a realistic jump (between 2.0m - 5.0m)\n";
				check = false;
			}
			else {
				check = true;
			}
		} while (check == false);
		cin.ignore();
		cout << "Date the jump was recorded (mm/dd/yyyy): ";
		getline(cin, record2.date);

		do {
			cout << "\nEnter the third recroded jump in meters: ";
			cin >> record3.height;

			if (record3.height < 2 || record3.height > 5) {
				cout << "Please enter a realistic jump (between 2.0m - 5.0m)\n";
				check = false;
			}
			else {
				check = true;
			}
		} while (check == false);
		cin.ignore();
		cout << "Date the jump was recorded (mm/dd/yyyy): ";
		getline(cin, record3.date);

		if (record1.height > record2.height && record1.height > record3.height) {
			if (record2.height > record3.height) {
				cout << "\nthe following are the jumps from highest to lowest\n\n";
				cout << record1.height << "m " << "recorded on " << record1.date<<endl;
				cout << record2.height << "m " << "recorded on " << record2.date << endl;
				cout << record3.height << "m " << "recorded on " << record3.date << endl;

			}
			else {
				cout << "\nthe following are the jumps from highest to lowest\n\n";
				cout << record1.height << "m " << "recorded on " << record1.date << endl;
				cout << record3.height << "m " << "recorded on " << record3.date << endl;
				cout << record2.height << "m " << "recorded on " << record2.date << endl;

			}
		}
		else if (record2.height > record1.height && record2.height > record3.height){
			if (record1.height > record3.height) {
				cout << "\nthe following are the jumps from highest to lowest\n\n";
				cout << record2.height << "m " << "recorded on " << record2.date << endl;
				cout << record1.height << "m " << "recorded on " << record1.date << endl;
				cout << record3.height << "m " << "recorded on " << record3.date << endl;

			}
			else {
				cout << "\nthe following are the jumps from highest to lowest\n\n";
				cout << record2.height << "m " << "recorded on " << record2.date << endl;
				cout << record3.height << "m " << "recorded on " << record3.date << endl;
				cout << record1.height << "m " << "recorded on " << record1.date << endl;

			}
		}
		else {
			if (record1.height > record2.height) {
				cout << "\nthe following are the jumps from highest to lowest\n\n";
				cout << record3.height << "m " << "recorded on " << record3.date << endl;
				cout << record1.height << "m " << "recorded on " << record1.date << endl;
				cout << record2.height << "m " << "recorded on " << record2.date << endl;

			}
			else {
				cout << "\nthe following are the jumps from highest to lowest\n\n";
				cout << record3.height << "m " << "recorded on " << record3.date << endl;
				cout << record2.height << "m " << "recorded on " << record2.date << endl;
				cout << record1.height << "m " << "recorded on " << record1.date << endl;

			}

		}

	return 0;
}