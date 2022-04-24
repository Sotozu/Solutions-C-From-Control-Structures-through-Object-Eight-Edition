#include <string>
#include <iostream>

using namespace std;


int main() {

	string my_array;
	int sum = 0;
	int num;
	string letter;

	cout << "Enter digits (no spaces)\n";
	cout << "ENTER: ";
	getline(cin, my_array);


	char* cptr = nullptr;

	for (int i = 0; i < my_array.size(); i++) {

		letter = my_array[i];

		int num = atoi(letter.c_str());

		sum += num;

	}

	cout << "Total: " << sum;

	return 0;
}