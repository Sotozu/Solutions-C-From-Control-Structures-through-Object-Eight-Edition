#include <iostream>
#include <vector>
#include <string>
using namespace std;

// 14. Student Line Up

int main() {

		vector<string> students;
		string names, small_name, big_name, temp;
		int length;

		bool check = true;

		cout << "Please eneter the name of students.\n";
		cout << "Press 'Q' to Quit.\n";

		do {

			cin >> names;
			if (names != "Q") {
				students.push_back(names);
			}

		} while (names != "Q");

		for (int i = 0; i < students.size(); i++) { //'TEST NAME' that all string names will be tested against

			for (int j = i; j < students.size(); j++) { //Iterates through all the name 'COMPARED NAMES' to test.

				if (students[i].size() < students[j].size()) { //checks to see if the length of 'TEST NAME' is less in length
					length = students[i].size();
					small_name = students[i];
					big_name = students[j];
				}
				else if (students[j].size() < students[i].size()) { //checks to see if the 'COMPARED NAME' is less in length
					length = students[j].size();
					small_name = students[j];
					big_name = students[i];
				}
				else
					length = students[i].size(); //Assigns the the smaller length of the 'TEST NAME' and 'COMPARED NAME' to the variable 'length'

				for (int h = 0; h < length; h++) { //Will iterate through the characters in both the 'TEST NAME' and 'COMPARED NAME'.
												   //Won't go past the smaller length name in testing as the variable 'length' holds that smaller name length.
					if (students[i].at(h) < students[j].at(h)) { //The 'TEST NAME' is alphabetically first. It stays where it is in the array.
																 //We 'break' from the for loop and iterate through the next name.
						break;
					}
					else if (students[i].at(h) > students[j].at(h)) { //The 'COMPARED NAME' is alphabetically first when compared to the 'TEST NAME'.
																 //We switch the positions of the names being compared in the array.
						temp = students[i];
						students[i] = students[j];
						students[j] = temp;
						break;
					}

				}

			}
		}
		cout << "The names in order are\n";
		for (int i = 0; i < students.size(); i++) {
			cout << students[i] << endl;
		}
		cout << endl << "Alex" << endl;

		return 0;
}