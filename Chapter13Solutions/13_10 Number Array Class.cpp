#include <iostream>

#include "10 Number Array Class.h"

using namespace std;
int main() {
	int size;
	int index;
	float num;
	cout << "Enter the size of the array.\n";
	cin >> size;
	MyArray10 my_array(size);

	cout << endl;
	cout << "ARRAY" << endl;
	my_array.showArray(size);
	cout << endl;

	cout << "Enter a index number to view the number in the array.\n";
	cout << "Index: "; cin >> index;

	

	cout << "Number at index " << index << ": " << my_array.getValue(index - 1) << endl;

	

	cout << "Chose an index and change the number.\n";
	cout << "Index: "; cin >> index;
	cout << "Insert Number: "; cin >> num;
	my_array.changeValue(index - 1, num);

	cout << "Highest Number: " << my_array.getHighest(size) << endl;
	cout << "Lowest Number: " << my_array.getLowest(size) << endl;
	cout << "Average of The Array: " << my_array.getAverage(size) << endl;

	cout << endl;
	cout << "ARRAY" << endl;
	my_array.showArray(size);
	cout << endl;
	return 0;
}
