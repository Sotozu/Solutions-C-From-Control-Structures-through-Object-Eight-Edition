#include <iostream>

using namespace std;

void sentenceCapitalizer(char*);
int main() {
	const int SIZE = 100;

	char my_sent[SIZE];

	cout << "Enter a simple senetence: ";
	cin.getline(my_sent, SIZE);
	sentenceCapitalizer(my_sent);
	cout << my_sent;

	return 0;
}

void sentenceCapitalizer(char* my_sent) {

	for (int i = 0; i < strlen(my_sent); i++) { //Capitlizes the first word in the sentence

		if (isalpha(my_sent[i])) {
			if (!isupper(my_sent[i])) {
				my_sent[i] = toupper(my_sent[i]);
			}
			break;
		}
	}

	for (int i = 0; i < strlen(my_sent); i++) {
		if (my_sent[i] == '.' || my_sent[i] == '!' || my_sent[i] == '?') {
			for (int j = i + 1; j < strlen(my_sent); j++) {
				if (isalpha(my_sent[j])) {
					if (!isupper(my_sent[j])) {
						my_sent[j] = toupper(my_sent[j]);
						break;
					}
				}
			}
		}
	}
}