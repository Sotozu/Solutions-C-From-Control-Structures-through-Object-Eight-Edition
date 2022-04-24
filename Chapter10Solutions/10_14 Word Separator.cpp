#include <iostream>
#include <string>
using namespace std;

int main() {
	string user_input;
	char chr_check;
	cout << "Enter a sentence.\n";
	cout << "The first letter of every word MUST be capitilized.\n";
	cout << "There are no spaces between the words.\n";
	cout << "\nENTER: ";
	getline(cin, user_input);

	for (int i = 1; i < user_input.size(); i++) {
		chr_check = user_input[i];
		if (isupper(chr_check)) {
			user_input[i] = tolower(chr_check);
			user_input = user_input.insert(i, 1, ' ');
			i++;
		}
	}
	cout << user_input;
	return 0;
}