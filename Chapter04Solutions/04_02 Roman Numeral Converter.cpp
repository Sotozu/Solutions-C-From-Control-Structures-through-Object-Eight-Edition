#include <iostream>
using namespace std;

//2. Roman Numeral Converter

int main() {
	
	cout << "This program will convert a number inputed from the user that is between 1-10 into Roman numerals.\n\n";

	int input;

	cout << "Please enter a number that is from 1-10: ";
	cin >> input;
	while (input > 10 || input < 1) {
		cout << "No...\n";
		cout << "Please enter a valid number between 1-10: ";
		cin >> input;
	}
	cout << "\nThank you, please press \"Enter\" to continue: ";
	cin.ignore();
	cin.get();

	switch (input) {
	case (1):cout << "The number " << input << " in roman numeral form is I.\n";
		break;
	case (2): cout << "The number " << input << " in roman numeral form is II.\n";
		break;
	case (3): cout << "The number " << input << " in roman numeral form is III";
		break;
	case (4): cout << "The number " << input << " in roman numeral form is IV";
		break;
	case (5): cout << "The number " << input << " in roman numeral form is V";
		break;
	case (6): cout << "The number " << input << " in roman numeral form is VI";
		break;
	case (7): cout << "The number " << input << " in roman numeral form is VII";
		break;
	case (8): cout << "The number " << input << " in roman numeral form is VIII";
		break;
	case (9): cout << "The number " << input << " in roman numeral form is IX";
		break;
	case (10): cout << "The number " << input << " in roman numeral form is X";
		break;
	}
	

	return 0;
}