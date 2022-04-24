#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

string tensAndFirstPlace(int);

string centsRemoveZero(float);

string singleDigit(int);
int main() {

	string date, payee_name, str_amount, decimal_position;

	string completed_amount;

	string thousand, hundred, tens_and_first, cents;

	float amount, num_cents;

	int decimal_place;

	int num_thousand, num_hundred, num_tens_and_first;

	cout << "Please Enter The Following Check Information.\n";
	cout << "ENTER DATE (mm/dd/yyyy): ";
	getline(cin, date);
	cout << "ENTER PAYEE'S NAME: ";
	getline(cin, payee_name);
	do {
		cout << "ENTER AMOUNT (MAX $10000): $";
		cin >> amount;
		if (amount > 10000 || amount <= 0) {
			cout << "ERROR: Please enter a positive value less than or equal to $10000.\n";
		}
	} while (amount > 10000 || amount <= 0);


	if (amount >= 1000) { //For amounts between (1000 - 10,000)

		num_thousand = amount / 1000; //will truncate to give the thousand amount
		num_hundred = (amount / 100) - (num_thousand * 10);
		num_tens_and_first = amount - (num_thousand * 1000) - (num_hundred * 100);
		num_cents = (amount * 100) - ((static_cast<int>(amount)) * 100);
		cout << num_cents;


		thousand = singleDigit(num_thousand);
		hundred = singleDigit(num_hundred);
		tens_and_first = tensAndFirstPlace(num_tens_and_first);
		cents = centsRemoveZero(num_cents);

		completed_amount = thousand + " Thousand ";
		if (hundred != "-1") {
			completed_amount += hundred + " Hundred ";
		}
		if (tens_and_first != "-1") {
			completed_amount += tens_and_first;

		}

		completed_amount += " Dollar(s) And " + cents + " Cent(s)";

	}
	else if (amount < 1000 && amount >= 100) { // For amounts between (999 - 100)
		num_hundred = (amount / 100);
		num_tens_and_first = amount - (num_hundred * 100);
		num_cents = (amount * 100) - ((static_cast<int>(amount)) * 100);

		hundred = singleDigit(num_hundred);
		tens_and_first = tensAndFirstPlace(num_tens_and_first);
		cents = centsRemoveZero(num_cents);

		completed_amount = hundred + " Hundred ";
		if (tens_and_first != "-1") {
			completed_amount += tens_and_first;

		}
		completed_amount += " Dollar(s) And " + cents + " Cent(s)";

	}
	else if (amount < 100 && amount >= 1) { //For amounts between (99 - 1)
		num_tens_and_first = amount;
		num_cents = (amount * 100) - ((static_cast<int>(amount)) * 100);

		tens_and_first = tensAndFirstPlace(num_tens_and_first);
		cents = centsRemoveZero(num_cents);

		completed_amount = tens_and_first;
		completed_amount += " Dollar(s) And " + cents + " Cent(s)";

	}
	else if (amount < 1) {
		num_cents = (amount * 100) - ((static_cast<int>(amount)) * 100);
		cents = centsRemoveZero(num_cents);

		completed_amount = cents + " Cent(s)";
	}

	int width = 55;
	string print_payee_name = "Pay to the Order of: " + payee_name;

	cout << endl;
	cout << setw(width) << right << "" << "Date: " << date << endl;
	cout << endl;
	cout << setw(width) << left << print_payee_name << "$";
	cout << showpoint << fixed << setprecision(2) << amount << endl;
	cout << endl;
	cout << completed_amount;



	return 0;
}

string tensAndFirstPlace(int num_tens_and_first) {
	string tens;
	string appending_str;
	int appending_num;
	int tens_and_first_amount;
	//cout << tens_amount << endl;

	if (num_tens_and_first < 20) {
		switch (num_tens_and_first) {
		case 0:
			tens = "-1";
			break;
		case 1:
			tens = "One";
			break;
		case 2:
			tens = "Two";
			break;
		case 3:
			tens = "Three";
			break;
		case 4:
			tens = "Four";
			break;
		case 5:
			tens = "Five";
			break;
		case 6:
			tens = "Six";
			break;
		case 7:
			tens = "Seven";
			break;
		case 8:
			tens = "Eight";
			break;
		case 9:
			tens = "Nine";
			break;
		case 10:
			tens = "Ten";
			break;
		case 11:
			tens = "Eleven";
			break;
		case 12:
			tens = "Twelve";
			break;
		case 13:
			tens = "Thirteen";
			break;
		case 14:
			tens = "Fourteen";
			break;
		case 15:
			tens = "Fifteen";
			break;
		case 16:
			tens = "Sixteen";
			break;
		case 17:
			tens = "Seventeen";
			break;
		case 18:
			tens = "Eighteen";
			break;
		case 19:
			tens = "Nineteen";
			break;
		default:
			cout << "ERROR: tensAndFirstPlace Function.\n";
			break;
		}
	}
	else {
		if (num_tens_and_first <= 99 && num_tens_and_first >= 90) {
			tens = "Ninety";
			if (num_tens_and_first != 90) {
				appending_num = num_tens_and_first - 90;
				appending_str = singleDigit(appending_num);
				tens += " " + appending_str;
			}
		}
		else if (num_tens_and_first < 90 && num_tens_and_first >= 80) {
			tens = "Eighty";
			if (num_tens_and_first != 80) {
				appending_num = num_tens_and_first - 80;
				appending_str = singleDigit(appending_num);
				tens += " " + appending_str;
			}
		}
		else if (num_tens_and_first < 80 && num_tens_and_first >= 70) {
			tens = "Seventy";
			if (num_tens_and_first != 70) {
				appending_num = num_tens_and_first - 70;
				appending_str = singleDigit(appending_num);
				tens += " " + appending_str;
			}
		}
		else if (num_tens_and_first < 70 && num_tens_and_first >= 60) {
			tens = "Sixty";
			if (num_tens_and_first != 60) {
				appending_num = num_tens_and_first - 60;
				appending_str = singleDigit(appending_num);
				tens += " " + appending_str;
			}
		}
		else if (num_tens_and_first < 60 && num_tens_and_first >= 50) {
			tens = "Fifty";
			if (num_tens_and_first != 50) {
				appending_num = num_tens_and_first - 50;
				appending_str = singleDigit(appending_num);
				tens += " " + appending_str;
			}
		}
		else if (num_tens_and_first < 50 && num_tens_and_first >= 40) {
			tens = "Fourty";
			if (num_tens_and_first != 40) {
				appending_num = num_tens_and_first - 40;
				appending_str = singleDigit(appending_num);
				tens += " " + appending_str;
			}
		}
		else if (num_tens_and_first < 40 && num_tens_and_first >= 30) {
			tens = "Thirty";
			if (num_tens_and_first != 30) {
				appending_num = num_tens_and_first - 30;
				appending_str = singleDigit(appending_num);
				tens += " " + appending_str;
			}
		}
		else if (num_tens_and_first < 30 && num_tens_and_first >= 20) {
			tens = "Twenty";
			if (num_tens_and_first != 20) {
				appending_num = num_tens_and_first - 20;
				appending_str = singleDigit(appending_num);
				tens += " " + appending_str;
			}
		}
	}

	return tens;
}


string singleDigit(int number) {
	string num_return;
	switch (number) {
	case 0:
		num_return = "-1";
		break;
	case 1:
		num_return = "One";
		break;
	case 2:
		num_return = "Two";
		break;
	case 3:
		num_return = "Three";
		break;
	case 4:
		num_return = "Four";
		break;
	case 5:
		num_return = "Five";
		break;
	case 6:
		num_return = "Six";
		break;
	case 7:
		num_return = "Seven";
		break;
	case 8:
		num_return = "Eight";
		break;
	case 9:
		num_return = "Nine";
		break;
	case 10:
		num_return = "Ten";
		break;
	case 12:
		num_return = "Twelve";
		break;
	case 13:
		num_return = "Thirteen";
		break;
	case 14:
		num_return = "Fourteen";
		break;
	case 15:
		num_return = "Fifteen";
		break;
	case 16:
		num_return = "Sixteen";
		break;
	case 17:
		num_return = "Seventeen";
		break;
	case 18:
		num_return = "Eighteen";
		break;
	case 19:
		num_return = "Nineteen";
		break;
	default:
		cout << "ERROR: singleDigits Function.\n";
	}

	return num_return;

}
string centsRemoveZero(float num_cents) {

	string amount_string = to_string(num_cents);
	cout << amount_string;
	if (amount_string[1] == '.') {
		amount_string = amount_string[0];
	}
	else {
		amount_string = amount_string.substr(0, 2);
	}


	return amount_string;
}
