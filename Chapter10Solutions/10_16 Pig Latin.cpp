#include <string>
#include <iostream>

using namespace std;

int main() {
	string user_input;
	string ay = "AY";

	cout << "Enter a sentence.\n";
	cout << "SENTENCE: ";
	getline(cin, user_input);

	char* switch_a = nullptr;
	char* switch_b = nullptr;

	char letter_swap;
	bool complete = false;

	for (int i = 0; i < user_input.size(); i++) {
		if (complete == true) {
			break;
		}

		if (isalpha(user_input[i])) {
			switch_a = &user_input[i];

			for (int j = i; j < user_input.size(); j++) {
				if (user_input[j] == ' ' || user_input[j] == '.' || user_input[j] == '!' || user_input[j] == '?' || user_input[j] == ':' || user_input[j] == ';') {
					switch_b = &user_input[j - 1];
					user_input[j] = *switch_a;
					user_input.insert((j + 1), 1, ' ');
					user_input.erase(i, 1);


					i = j;
					break;
				}
				if (j == user_input.size() - 1) {
					if (isalpha(user_input[j])) {
						user_input.append(1, ' ');
						user_input[j + 1] = *switch_a;
						user_input.erase(i, 1);
						complete = true;
						break;
					}
				}
			}
		}
	}
	for (int i = 0; i < user_input.size(); i++) {
		if (user_input[i] == ' ' || user_input[i] == '.' || user_input[i] == '!' || user_input[i] == '?' || user_input[i] == ':' || user_input[i] == ';') {
			if (isalpha(user_input[i - 1])) {
				user_input.insert(i, ay);
				i = i + 2;
			}
		}
		if (i == user_input.size() - 1) {
			if (isalpha(user_input[i])) {
				user_input.append(ay);
				break;
			}
		}
	}
	cout << user_input << endl;
	return 0;

}