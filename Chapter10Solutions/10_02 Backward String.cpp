#include <iostream>

using namespace std;

void backwardsString(char*);

int main() {

	const int SIZE = 50;

	char my_arr[SIZE];
	cout << "Enter a simple sentence: ";
	cin.getline(my_arr, SIZE);

	backwardsString(my_arr);

	return 0;
}
void backwardsString(char* my_arr) {

	char* cptr = nullptr;
	cptr = new char[strlen(my_arr)]; //makes a dynamic char array that's the same size as the 'my_arr'

	int counter = 0;

	for (int i = strlen(my_arr) - 1; i >= 0; i--) {
		cptr[counter] = my_arr[i];
		cout << cptr[counter];
	}

	delete[] cptr;
}