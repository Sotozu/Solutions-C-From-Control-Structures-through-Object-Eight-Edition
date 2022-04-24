#include <iostream>
#include <iomanip>
using namespace std;

// 9. Hotel Occupancy

int main() {

		int floors, rooms, occupied;

		int total_rooms = 0, total_occupied = 0;
		do {
			cout << "How many floors does the hotel have: ";
			cin >> floors;
			if (floors < 1) {
				cout << "\nPlease enter floors greater than or equal to 1.\n";
			}
		} while (floors < 1);

		for (int i = 1; i <= floors; i++) {
			do {
				cout << "How many rooms are there on floor " << i << "?\n";
				cout << "Rooms: ";
				cin >> rooms;
				if (rooms < 10) {
					cout << "\nPlease enter rooms of 10 or more.\n";
				}
			} while (rooms < 10);

			cout << "How many of those rooms are occupied?\n";
			cout << "Occupied: ";
			cin >> occupied;
			total_rooms += rooms;
			total_occupied += occupied;
		}
		cout << total_rooms << " total rooms in the hotel.\n";
		cout << total_occupied << " of these rooms are occupied.\n";
		double percent;

		percent = static_cast<double>(occupied) / static_cast<double>(rooms);
		cout << setprecision(2) << fixed;
		cout << percent*100 << "% of the rooms are occupied.\n";
		cout << endl << "Alex" << endl;

		return 0;
}