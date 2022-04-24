#include <iostream>
using namespace std;

//2. Characters of the ASCII Codes

int main() {

	for (int i = 0; i <= 127; i++) {
		cout << static_cast<char>(i);
		if (i % 16 == 0) {
			cout << endl;
		}
	}
	cout << endl << "Alex" << endl;

	return 0;
}