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

	cout << "STRING\n";
	words = wordCounter(my_words);
	cout << "There are " << words << " words in that sentence.\n";

	cout << "\nC-STRING.\n";
	words = wordCounter(my_arr);
	cout << "There are " << words << " words in that sentence.\n";
	return 0;
}
int wordCounter(char* my_arr) {
	int counter = 0;
	double average;
	int total_letters;
	for (int i = 0; i < strlen(my_arr); i++) {
		if (my_arr[i] == ' ') {
			counter++;
		}
	}
	total_letters = strlen(my_arr) - counter;
	counter++;
	average = total_letters / counter;


	cout << "The average number of letters in this sentence is: " << average << endl;
	return counter;
}

int wordCounter(string my_words) {
	int counter = 0;
	double average;
	int total_letters;
	for (int i = 0; i < my_words.size(); i++) {
		if (my_words[i] == ' ') {
			counter++;
		}
	}
	total_letters = my_words.size() - counter;
	counter++;
	average = total_letters / counter;

	cout << "The average number of letters in this sentence is: " << average << endl;

	return counter;
}