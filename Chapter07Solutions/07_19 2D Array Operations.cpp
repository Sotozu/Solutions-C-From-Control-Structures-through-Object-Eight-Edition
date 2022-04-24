#include <iomanip>
#include <iostream>

using namespace std;

const int COL = 3;
const int ROW = 3;

double getTotal(double my_2D_array[][COL], int ROW);
double getAverage(double my_2D_array[][COL], int ROW);
double getRowTotal(double my_2D_array[][COL], int);
double getColumnTotal(double my_2D_array[][COL], int);
double getHighestInRow(double my_2D_array[][COL], int);
double getHighestInColumn(double my_2D_array[][COL], int);
double getLowestInRow(double my_2D_array[][COL], int);

int main() {
	double total,
		average,
		row_total,
		col_total,
		highest_in_row,
		highest_in_col,
		lowest_in_row;

	int width = 20;

	double my_2D_array[ROW][COL] = { {1,2,3},{4,5,6,},{7,8,9} };

	total = getTotal(my_2D_array, ROW);
	cout << setw(20) << left << "TOTAL OF 2D ARRAY: " << total << endl;

	average = getAverage(my_2D_array, ROW);
	cout << setw(20) << left << "AVERAGE OF 2D ARRAY: " << average << endl;

	cout << endl;
	for (int i = 0; i < ROW; i++) {
		row_total = getRowTotal(my_2D_array, i);
		cout << "ROW " << i << " TOTAL: " << row_total << endl;
	}

	cout << endl;
	for (int j = 0; j < COL; j++) {
		col_total = getColumnTotal(my_2D_array, j);
		cout << "COLUMN " << j << " TOTAL: " << col_total << endl;
	}

	cout << endl;
	for (int i = 0; i < ROW; i++) {
		highest_in_row = getHighestInRow(my_2D_array, i);
		cout << "HIGHEST IN ROW " << i << ": " << highest_in_row << endl;
	}

	cout << endl;
	for (int i = 0; i < ROW; i++) {
		highest_in_col = getHighestInColumn(my_2D_array, i);
		cout << "HIGHEST IN COLUMN " << i << ": " << highest_in_col << endl;
	}
	cout << endl;
	for (int i = 0; i < ROW; i++) {
		lowest_in_row = getLowestInRow(my_2D_array, i);
		cout << "LOWEST IN ROW " << i << ": " << lowest_in_row << endl;
	}
	return 0;
}
double getTotal(double my_2D_array[][COL], int ROW) {
	double total = 0;
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			total += my_2D_array[i][j];
		}
	}
	return total;
}
double getAverage(double my_2D_array[][COL], int ROW) {
	double total = 0;
	double average;
	int number_of_values = 0;
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			total += my_2D_array[i][j];
			number_of_values++;
		}
	}
	average = total / number_of_values;
	return average;
}
double getRowTotal(double my_2D_array[][COL], int i) {
	double row_total = 0;

	for (int j = 0; j < COL; j++) {
		row_total += my_2D_array[i][j];
	}

	return row_total;
}

double getColumnTotal(double my_2D_array[][COL], int j) {
	double col_total = 0;

	for (int i = 0; i < ROW; i++) {
		col_total += my_2D_array[i][j];
	}

	return col_total;
}
double getHighestInRow(double my_2D_array[][COL], int i) {
	double highest_in_row = my_2D_array[i][0];

	for (int j = 1; j < COL; j++) {
		if (highest_in_row < my_2D_array[i][j]) {
			highest_in_row = my_2D_array[i][j];
		}
	}

	return highest_in_row;
}
double getHighestInColumn(double my_2D_array[][COL], int j) {
	double highest_in_col = my_2D_array[0][j];

	for (int i = 0; i < ROW; i++) {
		if (highest_in_col < my_2D_array[i][j]) {
			highest_in_col = my_2D_array[i][j];
		}
	}
	return highest_in_col;
}

double getLowestInRow(double my_2D_array[][COL], int i) {
	double lowest_in_row = my_2D_array[i][0];

	for (int j = 1; j < COL; j++) {
		if (lowest_in_row > my_2D_array[i][j]) {
			lowest_in_row = my_2D_array[i][j];
		}
	}

	return lowest_in_row;
}
