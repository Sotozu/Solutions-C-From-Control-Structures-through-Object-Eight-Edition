#include <fstream>
#include <iostream>
#include <iomanip>

using namespace std;

const int ROWS = 15;
const int SEATS = 30;

void showTheater(const char theater[][SEATS], int ROWS);
bool askToExit();
int checkIfRowFull(const char theater[][SEATS]);
int checkIfSeatFull(const char theater[][SEATS], int row_num);
int seatsLeftInRow(const char theater[][SEATS], int row_num);
void  showSalesReport(const double row_prices[], const int tickets_sold_per_row[], int ROWS);
void showTicketReport(const char theater[][SEATS], int ROWS);

int main() {
	ifstream inFile;
	char theater[ROWS][SEATS]; //theater[15][30];
	double row_price[ROWS];
	int tickets_sold_per_row[ROWS] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0, };
	bool done = false;
	bool row_full;
	int row_num, seat_num;
	double total;
	double row_cost;
	int number_purchased;
	int seats_left;
	int sales_grand_total;
	int total_tickets_sold = 0;

	//input the '#' character into the theater array.
	for (int i = 0; i < ROWS; i++) {
		for (int j = 0; j < SEATS; j++) {
			theater[i][j] = '#';
		}
	}

	// Will input the row prices from a file into an array called "row_prices"
	inFile.open("rowprices.txt");

	for (int i = 0; i < ROWS; i++) {
		inFile >> row_price[i];
	}
	inFile.close();

	do {
		showTheater(theater, ROWS);

		row_num = checkIfRowFull(theater); //Will return a valid row number;

		row_cost = row_price[row_num];
		cout << endl;

		do {
			seats_left = seatsLeftInRow(theater, row_num);
			cout << "There are " << seats_left << " seats in the row.\n";
			cout << "How many would you like to purchase?\n";
			do {
				cout << "NUMBER TO PURCHASE: ";
				cin >> number_purchased;
				if (number_purchased > seats_left) {
					cout << endl;
					cout << "ERROR: There are less seats than what you are wanting to purchase.\n";
					cout << "seats avaialable: " << seats_left << endl;
				}
			} while (number_purchased > seats_left);
			for (int i = 0; i < number_purchased; i++) {
				seat_num = checkIfSeatFull(theater, row_num); //Will return a valid seat number;
				theater[row_num][seat_num] = '*'; // Sets the position in the array as sold
				tickets_sold_per_row[row_num]++; //counts how many tickets were sold per row;
				total_tickets_sold += number_purchased;
			}
			showTheater(theater, ROWS);
			cout << "\nContinue purchasing seats in row " << row_num + 1 << "?\n";
			done = askToExit();
		} while (done == true);

		cout << endl;

		cout << "Show Sales Report?\n";
		done = askToExit();
		if (done == true) {
			showSalesReport(row_price, tickets_sold_per_row, ROWS);
		}
		cout << "Show Ticket Report?\n";
		done = askToExit();
		if (done == true) {
			showTicketReport(theater, ROWS);
		}


		cout << "\nExit the Program?\n";
		done = askToExit();
	} while (done == false);

	return 0;
}

void showTheater(char const theater[][SEATS], int ROWS) {
	int width = 3;
	cout << "         ";
	for (int i = 0; i < 30; i++) {
		cout << setw(width) << left << i + 1;
	}
	cout << endl;
	for (int i = 0; i < ROWS; i++) { //iterate 15 times
		cout << "ROW " << setw(width) << left << i + 1 << ": ";
		for (int j = 0; j < SEATS; j++) { // iterate 30 times
			cout << setw(width) << left << theater[i][j];
		}
		cout << endl;
	}
}

bool askToExit() {

	int ask_to_end;
	cout << "Enter '1' YES.\n";
	cout << "Enter '0' NO\n";
	do {
		cout << "ENTER OPTION: ";
		cin >> ask_to_end;
	} while (ask_to_end != 1 && ask_to_end != 0);
	if (ask_to_end == 0) {
		return false;
	}
	else {
		return true;
	}
}

int checkIfRowFull(const char theater[][SEATS]) {

	int row_num;
	bool row_full;
	cout << "Please enter which row you would like to purchase a ticket from.\n";
	do {
		row_full = true;
		cout << "ENTER ROW: ";
		cin >> row_num;
		row_num--;
		for (int j = 0; j < SEATS; j++) {
			if (theater[row_num][j] == '#') {
				row_full = false;
			}
		}
		if (row_full == true) {
			cout << "ERROR: ROW FULL. Please enter another row.\n";
		}
	} while (row_full == true);
	return row_num;
}

int checkIfSeatFull(const char theater[][SEATS], int row_num) {
	int seat_num;
	bool seat_full;

	do {
		seat_full = false;
		do {
			cout << "Enter the seat number you would like to purchase.\n";
			cout << "SEAT NUMBER: ";
			cin >> seat_num;
			if (seat_num < 1 || seat_num > 30) {
				cout << endl;
				cout << "ERROR: That seat does not exist.\n";
				cout << "Seat numbers 1-30.\n";
				cout << "Please enter a valid seat number.\n";
				cout << endl;
			}
		} while (seat_num < 1 || seat_num > 30);
		seat_num--; //seat_num index will be one less than what the user will enter
		if (theater[row_num][seat_num] != '#') {
			cout << endl;
			cout << "ERROR: SEAT TAKEN. Please enter another seat number.\n";
			seat_full = true;
		}
	} while (seat_full == true);

	return seat_num;
}

int seatsLeftInRow(const char theater[][SEATS], int row_num) {
	int count = 0;
	for (int j = 0; j < SEATS; j++) {
		if (theater[row_num][j] == '#') {
			count++;
		}
	}
	return count;
}

void  showSalesReport(const double row_prices[], const int tickets_sold_per_row[], int ROWS) {
	int width1 = 15;
	double total = 0;;
	cout << setw(width1) << left << "ROW NUMBER" << setw(width1) << left << "ROW PRICE ($)" << setw(width1) << left << "TICKETS SOLD" << setw(width1) << left << "ROW SALES ($)" << endl;
	for (int i = 0; i < ROWS; i++) {
		cout << setw(width1) << left << i + 1 << setw(width1) << left << row_prices[i] << setw(width1) << left << tickets_sold_per_row[i] << setw(width1) << left << row_prices[i] * tickets_sold_per_row[i] << endl;
		total += (row_prices[i] * tickets_sold_per_row[i]);
	}
	cout << "\nGRAND TOTAL SALES: $" << total << endl;
}

void showTicketReport(const char theater[][SEATS], int ROWS) {

	int total_empty_seats = 0;
	int total_purchased_seats = 0;
	int seats_available_per_row[15];

	for (int i = 0; i < ROWS; i++) {
		int available_in_row_total = 0;
		for (int j = 0; j < SEATS; j++) {
			if (theater[i][j] == '#') {
				total_empty_seats++;
				available_in_row_total++;
			}
			if (theater[i][j] == '*') {
				total_purchased_seats++;
			}
		}
		seats_available_per_row[i] = available_in_row_total;
	}

	cout << "\nTOTAL SEATS SOLD: " << total_purchased_seats << endl;
	cout << "TOTAL SEATS AVAILABLE PER ROW:\n";
	cout << setw(10) << left << "ROWS" << setw(10) << left << "AVAILABLE" << endl;

	for (int i = 0; i < ROWS; i++) {
		cout << setw(10) << left << i + 1 << setw(10) << left << seats_available_per_row[i] << endl;
	}
	cout << "TOTAL SEATS AVAIALBLE IN AUDITORIUM: " << total_empty_seats << endl;
}
