#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	const int SIZE = 11;
	string my_array[SIZE] = { "Alejandra Cruz, 555-1223",
								"Joe Looney, 555-0097",
								"Geri Palmer, 555-8787",
								"Li Chen, 555-1212",
								"Holly Gaddis, 555-8878",
								"Sam Wiggins, 555-0998",
								"Bob Kain, 555-8712",
								"Tim Haynes, 555-7676",
								"Warren Gaddis, 555-9037",
								"Jean James, 555-4939",
								"Ron Palmer, 555-2783" };

	vector<int> index_match;

	string user_input;
	string name_number;

	int position_true;

	cout << "Enter a name or partial name on the list.\n";
	cout << "ENTER: ";

	getline(cin, user_input);

	for (int i = 0; i < SIZE; i++) {
		name_number = my_array[i];
		position_true = name_number.find(user_input, 0);
		if (position_true != -1) {
			cout << my_array[i] << endl;
		}
	}

	return 0;
}