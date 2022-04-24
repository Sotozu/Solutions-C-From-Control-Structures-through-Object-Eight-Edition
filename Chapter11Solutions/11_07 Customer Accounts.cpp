#include <iostream>
#include <string>

using namespace std;

enum cust_elements { NAME = 1, ADDRESS, CITY, STATE, ZIP, TELEPHONE_NUMBER, ACCOUNT_BALANCE, LAST_PAYMENT };
enum menu_options { ENTER_ALL_CUSTOMER_DATA = 1, ENTER_SPECIFIC_DATA, DISPLAY_ALL_CUSTOMER_DATA, DISPLAY_SPECIFIC_DATA, EXIT };
struct Customer {

	string name;
	string address;
	string city;
	string state;
	int zip;
	string telephone_number;
	double account_balance;
	string last_payment_date;
};

void inputData(Customer&, int);
void changeData(Customer&, int);
void showAllData(const Customer&, int);
void showSpecificData(const Customer&, int);
void initializeEmptyData(Customer&); // int variables need to be initialized to -1 so that they can be checked IF the user has inserted any data into them.

bool checkIfAllEmpty(const Customer&, int);

void menu();
void element();

int main() {
	int menu_choice, option2_choice, option4_choice, data_field;
	const int SIZE = 10;
	Customer customer[SIZE];

	for (int i = 0; i < SIZE; i++) {
		initializeEmptyData(customer[i]);
	}

	do {

		menu();
		cout << endl;
		cout << "ENTER OPTION: ";
		cin >> menu_choice;
		cin.ignore(); // flushing out the newline out of the buffer form 'cin >> menu_choice'
		cout << endl;
		switch (menu_choice) {
		case ENTER_ALL_CUSTOMER_DATA:
			for (int i = 0; i < SIZE; i++) {
				inputData(customer[i], i);
			}
			cout << endl;
			break;

		case ENTER_SPECIFIC_DATA:
			cout << "Which customer would you like to enter data for?\n";
			for (int i = 0; i < SIZE; i++) {
				cout << "CUSTOMER " << i + 1 << ": " << customer[i].name << endl;
			}
			cout << endl;
			cout << "ENTER CUSTOMER NUMBER: ";
			cin >> option2_choice;
			option2_choice -= 1; //index will be one less than the number choice
			cout << endl;

			cout << "Which data field would you like to change?\n";
			element();
			cout << endl;
			cout << "ENTER DATA FIELD NUMBER: ";
			cin >> data_field;
			cout << endl;

			cin.ignore(); //flushing out newline from buffer;
			changeData(customer[option2_choice], data_field);
			cout << endl;
			break;

		case DISPLAY_ALL_CUSTOMER_DATA:

			for (int i = 0; i < SIZE; i++) {

				if (checkIfAllEmpty(customer[i], i) == true) {
					cout << "CUSTOMER " << i + 1 << ": EMPTY" << endl;
				}
				else {

					showAllData(customer[i], i);
				}

				cout << endl;
			}

			cout << endl;
			break;

		case DISPLAY_SPECIFIC_DATA:
			cout << "ENTER CUSTOMER NUMBER: ";
			cin >> option4_choice;
			option4_choice -= 1;
			showSpecificData(customer[option4_choice], option4_choice);
			cout << endl;

			break;

		case EXIT:

			break;

		default:
			cout << "ERROR: Please enter a valid option.\n";
			break;
		}

	} while (menu_choice != EXIT);

	return 0;
}

void inputData(Customer& customer, int cust_num) {
	cout << "Customer: " << cust_num + 1 << endl;
	cout << "Name: ";
	getline(cin, customer.name);
	cout << "Address: ";
	getline(cin, customer.address);
	cout << "City: ";
	getline(cin, customer.city);
	cout << "State: ";
	getline(cin, customer.state);
	cout << "Zipcode: ";
	cin >> customer.zip;
	cin.ignore(); //flushing out the newline out of the buffer
	cout << "Telephone Number: ";
	getline(cin, customer.telephone_number);

	cout << "Account Balance: $";
	cin >> customer.account_balance;

	while (customer.account_balance < 0) {

		cout << "ERROR: Enter a positive value.\n";
		cout << "Account Balance: $";
		cin >> customer.account_balance;

	};

	cout << "Last Payment Date (xx/xx/xxxx): ";
	cin.ignore(); // flushing out the newline out of the buffer
	getline(cin, customer.last_payment_date);
	cout << endl;
}

void changeData(Customer& customer, int data_field) {
	switch (data_field) {
	case NAME:
		cout << "Name: ";
		getline(cin, customer.name);
		break;
	case ADDRESS:
		cout << "Address: ";
		getline(cin, customer.address);
		break;
	case CITY:
		cout << "City: ";
		getline(cin, customer.city);
		break;
	case STATE:
		cout << "State: ";
		getline(cin, customer.state);
		break;
	case ZIP:
		cout << "Zipcode: ";
		cin >> customer.zip;
		break;
	case TELEPHONE_NUMBER:
		cout << "Telephone Number: ";
		getline(cin, customer.telephone_number);
		break;
	case ACCOUNT_BALANCE:
		do {
			cout << "Account Balance: $";
			cin >> customer.account_balance;
			if (customer.account_balance < 0) {
				cout << "ERROR: Enter a positive value.\n";
			}
		} while (customer.account_balance < 0);
		break;
	case LAST_PAYMENT:
		cout << "Last Payment Date (xx/xx/xxxx): ";
		getline(cin, customer.last_payment_date);
		break;
	default:
		cout << "ERROR: changeData funcition.\n";
		break;
	}
}


void menu() {
	cout << "------------------------------\n";
	cout << "            MENU              \n";
	cout << "------------------------------\n";

	cout << "1. Enter ALL Customer Data\n";
	cout << "2. Edit Data For A Specific Customer\n";
	cout << "3. Display ALL Customer Data\n";
	cout << "4. Display A Specific Customers Data\n";
	cout << "5. EXIT\n";
	cout << "------------------------------\n";
}

void element() {
	cout << "DATA FIELDS\n";
	cout << "1. NAME\n";
	cout << "2. ADDRESS\n";
	cout << "3. CITY\n";
	cout << "4. STATE\n";
	cout << "5. ZIP\n";
	cout << "6. TELEPHONE NUMBER\n";
	cout << "7. ACCOUNT BALANCE.\n";
	cout << "8. LAST PAYMENT\n";
}

void showAllData(const Customer& customer, int cust_num) {
	cout << "Customer: " << cust_num + 1 << endl;
	cout << "Name: " << customer.name << endl;
	cout << "Address: " << customer.address << endl;
	cout << "City: " << customer.city << endl;
	cout << "State: " << customer.state << endl;
	cout << "Zipcode: " << customer.zip << endl;
	cout << "Telephone Number: " << customer.telephone_number << endl;
	cout << "Account Balance: $" << customer.account_balance << endl;
	cout << "Last Payment Date: " << customer.last_payment_date << endl;
}

bool checkIfAllEmpty(const Customer& customer, int cust_num) {
	bool is_empty = true;
	if (!customer.name.empty()) {
		is_empty = false;
	}
	if (!customer.address.empty()) {
		is_empty = false;
	}
	if (!customer.city.empty()) {
		is_empty = false;
	}
	if (!customer.state.empty()) {
		is_empty = false;
	}
	if (customer.zip != -1) {
		is_empty = false;
	}
	if (customer.telephone_number.empty()) {
		is_empty = false;
	}
	if (customer.account_balance != -1) {
		is_empty = false;
	}
	if (!customer.last_payment_date.empty()) {
		is_empty = false;
	}

	return is_empty;
}

void initializeEmptyData(Customer& customer) {
	customer.zip = -1;
	customer.account_balance = -1;
}

void showSpecificData(const Customer& customer, int cust_num) {
	cout << "Customer: " << cust_num + 1 << endl;
	cout << "Name: " << customer.name << endl;
	cout << "Address: " << customer.address << endl;
	cout << "City: " << customer.city << endl;
	cout << "State: " << customer.state << endl;
	cout << "Zipcode: " << customer.zip << endl;
	cout << "Telephone Number: " << customer.telephone_number << endl;
	cout << "Account Balance: $" << customer.account_balance << endl;
	cout << "Last Payment Date: " << customer.last_payment_date << endl;
}