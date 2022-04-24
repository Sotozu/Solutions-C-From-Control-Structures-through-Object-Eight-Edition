#include <iostream>
using namespace std;

int consonantsCount(char*, int);
int vowelCount(char*);

int main() {

	const int SIZE = 100;
	char my_sent[SIZE];

	int num_vowel;
	int num_cons;
	char user_choice;
	bool end = false;

	cout << "Enter a simple sentence: ";
	cin.getline(my_sent, SIZE);

	do {
		cout << "A) Count the number of vowels in the string\nB) Count the number of consonants in the string\nC) Count both the vowelsand consonants in the string\nD) Enter another string\nE) Exit the program\n";
		cout << "\nENTER: ";
		cin >> user_choice;

		num_vowel = vowelCount(my_sent);
		num_cons = consonantsCount(my_sent, num_vowel);

		if (toupper(user_choice) == 'A') {
			cout << "There are " << num_vowel << " vowels in that sentence." << endl;
			cout << endl;
		}
		else if (toupper(user_choice) == 'B') {
			cout << "There are " << num_cons << " consonants in that sentence." << endl;
			cout << endl;
		}
		else if (toupper(user_choice) == 'C') {
			cout << "There are " << num_vowel << " vowels in that sentence." << endl;
			cout << "There are " << num_cons << " consonants in that sentence." << endl;
			cout << endl;
		}
		else if (toupper(user_choice) == 'D') {
			cout << "Enter a simple sentence: ";
			cin.get();
			cin.getline(my_sent, SIZE);
		}
		else if (toupper(user_choice) == 'E') {
			cout << "Good Bye.\n";
			end = true;
		}
		else {
			cout << "ERROR: Please enter a valid choice.\n";
			cout << "\nENTER: ";
			cin >> user_choice;
		}
	} while (end == false);

	return 0;
}
int vowelCount(char* my_sent) {
	int vowels = 0;
	for (int i = 0; i < strlen(my_sent); i++) {
		if (toupper(my_sent[i]) == 'A' || toupper(my_sent[i]) == 'E'
			|| toupper(my_sent[i]) == 'I' || toupper(my_sent[i]) == 'O' || toupper(my_sent[i]) == 'U') {

			vowels++;
		}
	}
	return vowels;
}
int consonantsCount(char* my_sent, int num_vowel) {

	int cons = 0;
	int other_char = 0;
	for (int i = 0; i < strlen(my_sent); i++) {
		if (!isalpha(my_sent[i])) {
			other_char++;
		}
	}

	cons = strlen(my_sent) - (other_char + num_vowel);

	return cons;

}