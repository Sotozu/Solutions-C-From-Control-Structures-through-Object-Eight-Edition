#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//16. Running the Race

int main() {
	
	cout << "This program asks for the names of three runners and the time it took each of them to finish race.\n" << "This program will display who came in first second and third.\n\n";

	string name1, name2, name3, winfirst, winsecond, winthird;
	float time1, time2, time3, first, second, third;


	cout << "Please enter the name of the first runner: ";
	getline (cin,name1);
	cout << "How long did it take this runner to finish the race: ";
	cin >> time1;
	while (time1 <= 0) {
		cout << "Please enter a valid positive number: ";
		cin >> time1;
	}
	cout << endl;
	cin.ignore(); //Review what this does

	cout << "Please enter the name of the second runner: ";
	getline(cin, name2);
	cout << "How long did it take this runner to finish the race: ";
	cin >> time2;
	while (time1 <= 0) {
		cout << "Please enter a valid positive number: ";
		cin >> time2;
	}
	cout << endl;
	cin.ignore();

	cout << "Please enter the name of the third runner: ";
	getline(cin, name3);
	cout << "How long did it take this runner to finish the race: ";
	cin >> time3;
	while (time1 <= 0) {
		cout << "Please enter a valid positive number: ";
		cin >> time3;
	}
	cout << endl;
	cin.ignore();

	if (time1 < time2) {
		if (time1 < time3) {
			first = time1;
			winfirst = name1;
			if (time2 < time3) {
				second = time2;
				third = time3;
				winsecond = name2;
				winthird = name3;
			}
			else {
				second = time3;
				third = time2;
				winsecond = name3;
				winthird = name2;
			}
		}
	}
	else if (time2 < time1) {
		if (time2 < time3) {
			first = time2;
			winfirst = name2;
			if (time1 < time3) {
				second = time1;
				third = time3;
				winsecond = name1;
				winthird = name3;
			}
			else {
				second = time3;
				third = time1;
				winsecond = name3;
				winthird = name1;
			}
		}
	}
	else if (time3 < time1) {
		if (time3 < time2) {
			first = time3;
			winfirst = name3;
			if (time1 < time2) {
				second = time1;
				third = time2;
				winsecond = name1;
				winthird = name2;
			}
			else {
				second = time2;
				third = time1;

				winsecond = name2;
				winthird = name1;
			}
		}
	}

	cout << fixed << setprecision(2);
	cout << "\nIn first place is: " << winfirst << endl;
	cout << "With a time of: " << first << endl;

	cout << "\nIn second place is: " << winsecond << endl;
	cout << "With a time of: " << second << endl;

	cout << "\nIn third place is: " << winthird << endl;
	cout << "With a time of: " << third << endl;
	
	return 0;

}