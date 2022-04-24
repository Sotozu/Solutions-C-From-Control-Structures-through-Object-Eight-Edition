#include <iostream>

using namespace std;

int numCharacter(char*);

int main() {

	int char_size;
	const int SIZE = 50;

	char my_arr[SIZE] = "Hello how are you!";

	char_size = numCharacter(my_arr);

	cout << "The char array is " << char_size << " character large (including white spaces).\n";
	return 0;
}

int numCharacter(char* my_arr) {
	int len = strlen(my_arr);

	return len;
}