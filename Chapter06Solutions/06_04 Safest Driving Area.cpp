#include <iostream>
#include <string>
using namespace std;

// 4. Safest Driving Area

int getNumAccidents(string);
void findLowest(int, int, int, int, int);

int main() {
	string region[5] = { "north", "south", "east", "west", "central" };
	int regionNum[5];

	for (int i = 0; i < 5; i++) {
		regionNum[i]=getNumAccidents(region[i]);
		cout << endl;
	}

	findLowest(regionNum[0], regionNum[1], regionNum[2], regionNum[3], regionNum[4]);
	return 0;
}

int getNumAccidents(string region) {
	int accidentNum;

	do {
		cout << "Enter the number of automobile accidents in the " << region << " region.\n";
		cout << "Accident #: ";
		cin >> accidentNum;
		if (accidentNum <= 0) {
			cout << "ERROR: Please enter a number greater than 0.\n";
		}
	} while (accidentNum <= 0);

	return accidentNum;

}
void findLowest(int north, int south, int east, int west, int central) {
	int count = 0;
	int accident[5] = { north, south, east, west, central };
	string region[5] = { "north", "south", "east", "west", "central" };

	for (int i = 1; i < 5; i++) {
		if (accident[0] > accident[i]) {
			accident[0] = accident[i];
			region[0] = region[i];
		}
	}
	cout << "The " << region[0] << " region has the lowest accidents totaling: " << accident[0];
}
