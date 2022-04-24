#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	int size, total = 0;
	double average;

	cout << "How many test scores?\n";
	cout << "HOW MANY: ";
	cin >> size;

	std::vector<int> V(size);
	std::vector<int>::iterator iter;


	cout << endl;
	for (int i = 0; i < size; i++) {

		do {
			cout << "TEST SCORE " << i + 1 << ": ";
			cin >> V[i];
			if (V[i] < 0) {
				cout << "Error: Please enter a positive number.\n";
			}

		} while (V[i] < 0);
		total += V[i];
	}

	average = total / static_cast<double>(size);
	std::sort(V.begin(), V.end());

	cout << "The scores in ascending order\n";
	for (iter = V.begin(); iter != V.end(); iter++) {
		std::cout << *iter << std::endl;
	}
	cout << endl;
	cout << "AVERAGE SCORE: " << average << endl;

	return 0;
}
