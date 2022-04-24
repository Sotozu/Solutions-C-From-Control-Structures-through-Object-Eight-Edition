#include <iostream>
#include <ctime>

using namespace std;

int bubbleSortArray(int array[], int size);
int selectionSort(int array[], int size);


int main() {
	const int SIZE = 20;
	int array1[SIZE], array2[SIZE];
	int count1, count2;
	int rand_num;

	srand(time(NULL));

	for (int i = 0; i < SIZE; i++) {
		rand_num = rand() % 1000 + 1;
		array1[i] = rand_num;
		array2[i] = rand_num;
	}

	count1 = bubbleSortArray(array1, SIZE);
	count2 = selectionSort(array2, SIZE);

	cout << "\nNumber of exchanges for a size " << SIZE << " array using either bubble or selection sort.\n";
	cout << "Bubble: " << count1 << endl;
	cout << "Selection: " << count2 << endl;
	return 0;
}

int bubbleSortArray(int array[], int size) {
	cout << "In bubbleSortArray function" << endl;
	bool swap;
	int temp;
	int count = 0;
	do
	{
		swap = false;
		for (int i = 0; i < (size - 1); i++)
		{

			if (array[i] > array[i + 1])
			{
				count++;
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				swap = true;
			}
		}
	} while (swap);
	return count;
}

int selectionSort(int array[], int size) {

	cout << "In selectionSort function" << endl;

	int startScan, minIndex, minValue, count = 0;
	for (startScan = 0; startScan < (size - 1); startScan++)
	{
		minIndex = startScan;
		minValue = array[startScan];
		for (int index = startScan + 1; index < size; index++)
		{
			if (array[index] < minValue)
			{

				minValue = array[index];
				minIndex = index;
			}
		}
		count++;
		array[minIndex] = array[startScan];
		array[startScan] = minValue;
	}
	return count;
}