#include <iostream>
#include <vector>
using namespace std;

// 13. The Greatest and Least of These

int main() {

		vector<int> num;
		vector<int> ordered;
		int number;
		int temp;

		cout << "Please enter an asortment of numbers." << endl;
		cout << "Enter '-99' to stop the entering numbers." << endl;
		do {
			cin >> number;
			if (number == -99) {
				break;
			}
			num.push_back(number);

		} while (number != -99);

		for (int i = 0; i < num.size(); i++) { // this will be the value that is being compared to the others
			for (int j = 0; j < num.size(); j++) { // All values 'j' will be iterated to compare against the 'i'
				if (num[i] > num[j]) { // tests to see if the value being compared is smaller than 'i'

					temp = num[i];  //stores the value of the variable 'i' in the variable 'temp'
					num[i] = num[j]; // 'j' is less than 'i' so we give 'i' the lower value.
					num[j] = temp; //we give 'j' the value of 'temp' (the bigger value)
				}
			}
		}
		cout << "The numbers from greatest to least is: " << endl;
		for (int i = 0; i < num.size(); i++) {
			cout << num[i] << endl;
		}

		cout << "The greates number is: " << num[0] << endl;
		int size = num.size() -1;
		cout << "The smallest number is: " << num[size] << endl;
		cout << endl << "Alex" << endl;

		return 0;
}