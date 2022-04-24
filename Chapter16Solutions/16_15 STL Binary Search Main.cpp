#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	bool match;

	const int SIZE = 18;

	int user_input;

	//int account_number[SIZE] = { 5658845,  4520125,  7895122,  8777541,  8451277,  1302850,
	//							8080152,  4562555,  5552012,  5050552,  7825877,  1250255,
	//							1005231,  6545231,  3852085,  7576651,  7881200,  4581002 };


	std::vector<int> V{5658845,  4520125,  7895122,  8777541,  8451277,  1302850,
									8080152,  4562555,  5552012,  5050552,  7825877,  1250255,
									1005231,  6545231,  3852085,  7576651,  7881200,  4581002 };

	cout << "Please enter the 'Account Number'.\n";
	cout << "ACCOUNT NUMBER: ";
	cin >> user_input;

	std::sort(V.begin(), V.end());
	match = std::binary_search(V.begin(), V.end(), user_input);

	if (match == true) {
		cout << "The number is valid.\n";
	}
	else {
		cout << "The number is invalid.\n";
	}

	return 0;
}

