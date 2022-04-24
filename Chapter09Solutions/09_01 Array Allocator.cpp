#include <iostream>

using namespace std;

int* positionReturn(int&);

int main() {

	int size;

	int* position;

	cout << "How large would you like your dynamic array to be?\n";

	cout << "SIZE: ";
	cin >> size;

	position = positionReturn(size);

	cout << "The starting position of the array is " << position << endl;

	cout << "The contents of the array are: ";
	for (int i = 0; i < size; i++) {
		cout << *position + i << " ";
	}

	return 0;
}

int* positionReturn(int& size) {

	int* ip_array = nullptr;

	ip_array = new int[size];

	for (int i = 0; i < size; i++) {
		ip_array[i] = i + 1;
	}
	return ip_array;
}