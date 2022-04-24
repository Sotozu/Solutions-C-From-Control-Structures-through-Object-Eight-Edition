#include <iostream>
#include <string>
using namespace std;

int wordCounter(char*);
int wordCounter(string);

int main() {
	int words;
	string my_words;
	const int SIZE = 50;
	char my_arr[SIZE];
	cout << "Enter a simple sentence: ";
	cin.getline(my_arr, SIZE);

	my_words = my_arr;

	words = wordCounter(my_words);
	cout << "STRING\n";
	cout << "There are " << words << " words in that sentence.\n";

	words = wordCounter(my_arr);
	cout << "\nC-STRING.\n";
	cout << "There are " << words << " words in that sentence.\n";
	return 0;
}
int wordCounter(char* my_arr) {
	int counter = 0;
	for (int i = 0; i < strlen(my_arr); i++) {
		if (my_arr[i] == ' ') {
			counter++;
		}
	}
	counter++;
	return counter;
}

int wordCounter(string my_words) {

	int counter = 0;
	for (int i = 0; i < my_words.size(); i++) {
		if (my_words[i] == ' ') {
			counter++;
		}
	}
	counter++;
	return counter;
}