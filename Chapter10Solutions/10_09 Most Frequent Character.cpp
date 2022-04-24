#include <iostream>
#include <vector>

using namespace std;

char mostFrequent(char*);
int main() {

	const int SIZE = 40;
	char my_arr[SIZE];
	char most_frequent;
	cout << "Please eneter a sentence.\n";
	cout << "SENTENCE: ";
	cin.getline(my_arr, SIZE);

	most_frequent = mostFrequent(my_arr);

	cout << "The most frequent character is '" << most_frequent << "'" << endl;
	return 0;
}


char mostFrequent(char* my_arr) {

	char frequent = 'a';
	vector<char> unique_arr;
	vector<int> frequence;
	int count;

	bool unique;

	char first;

	first = tolower(my_arr[0]);
	unique_arr.push_back(first);

	for (int i = 1; i < strlen(my_arr); i++) {
		unique = true;
		if (isalpha(my_arr[i])) {
			for (int j = 0; j < unique_arr.size(); j++) {

				if (tolower(my_arr[i]) == tolower(unique_arr[j])) {
					unique = false;
				}
			}
			if (unique == true) {
				unique_arr.push_back(tolower(my_arr[i]));
			}
		}
	}

	cout << "\nUnique characters.\n";
	for (int i = 0; i < unique_arr.size(); i++) {
		cout << unique_arr[i];
	}
	cout << endl;

	for (int i = 0; i < unique_arr.size(); i++) { //counts the number of times the 
		char test = unique_arr[i];
		count = 0;
		for (int j = 0; j < strlen(my_arr); j++) {
			if (test == tolower(my_arr[j])) {
				count++;
			}

		}
		frequence.push_back(count);
	}

	int most_frequent = frequence[0];
	int frequent_index = 0;
	for (int i = 1; i < frequence.size(); i++) {
		if (most_frequent < frequence[i]) {
			most_frequent = frequence[i];
			frequent_index = i;
		}
	}

	frequent = unique_arr[frequent_index];

	cout << frequent << endl;

	return frequent;

}