#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
	const int MONKEY = 3, DAY = 5;

	int monkey_eat[MONKEY][DAY];

	int total_pounds = 0, total_days = 0;
	double average;

	int max_eat, max_monkey, max_day;
	int min_eat, min_monkey, min_day;

	string week_days[DAY] = { "Monday","Tuesday", "Wednesday","Thursday","Friday" };

	cout << "Enter the amount of food that each monkey eats for the day of the week.\n";

	for (int i = 0; i < MONKEY; i++) {
		cout << "Enter the food eaten by monkey " << i + 1 << " in pounds.\n";
		for (int j = 0; j < DAY; j++) {
			do {
				cout << week_days[j] << " (lbs): ";
				cin >> monkey_eat[i][j];
				if (monkey_eat[i][j] < 0) {
					cout << "ERROR: Please enter a positive integer.\n";
				}
			} while (monkey_eat[i][j] < 0);
			total_pounds += monkey_eat[i][j];
			total_days++;
		}
	}

	max_eat = monkey_eat[0][0];						//setting the value to the first in the index 
													//for comaparison in the following 'for-loop'
	min_eat = monkey_eat[0][0];

	for (int i = 0; i < MONKEY; i++) {
		for (int j = 0; j < DAY; j++) {
			if (max_eat < monkey_eat[i][j]) {
				max_eat = monkey_eat[i][j];						// will contain the most eaten
				max_monkey = i + 1;									// Will contain which monkey (1,2 or 3)
				max_day = j;									// Will contain the index for which day the max was eaten
			}
			if (min_eat > monkey_eat[i][j]) {
				min_eat = monkey_eat[i][j]; // will contain the most eaten
				min_monkey = i + 1; // Will contain which monkey (1,2 or 3)
				min_day = j; // Will contain the index for which day the min was eaten
			}
		}
	}
	average = static_cast<double>(total_pounds) / total_days; //one of these has to be cast to a double/float
															  //in order for it to be stored as a fraction.
	cout << showpoint << fixed << setprecision(2);
	cout << "The average eaten by all the monkeys (lbs): " << average << endl;
	cout << "The max eaten was by monkey " << max_monkey << " who ate " << max_eat << "(lbs) on " << week_days[min_day] << endl;
	cout << "The minimum eaten was by monkey " << min_monkey << " who ate " << min_eat << "(lbs) on " << week_days[min_day] << endl;
	return 0;
}
