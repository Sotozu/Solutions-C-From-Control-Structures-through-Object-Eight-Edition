#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//19. Budget Analysis

int main() {

	int end_result, budget, expense, deposit, total_expense = 0, total_deposit = 0;
	bool isNumber = true;
	int counter_month = 0;
	int counter = 1;
	double grand_total;
	string num_check;
	string final;

	cout << "Please set your budget for the month: $";
	cin >> budget;

	cout << "\nPlease enter any character other than a number to quit\n";

	do {

		cout << "Enter Expenses for week " << counter << ": $";
		cin >> expense;

		num_check = to_string(expense); //converts the user input into a string;

		for (int i = 0; i < num_check.length(); i++) { //checks for any input that is not an integer.
			if (isdigit(num_check[i]) == false) { //iterated through each position in the string to check if it's a digit
				isNumber = false;
				break;
			}
		}

		if (isNumber == false) { // breaks out of 'do-while; loop
			break;
		}
		total_expense += expense;

		cout << "Enter Deposits for week " << counter << ": $";
		cin >> deposit;

		num_check = to_string(deposit); //converts the user input into a string;

		for (int i = 0; i < num_check.length(); i++) { //checks for any input that is not an integer.
			if (isdigit(num_check[i]) == false) { //iterated through each position in the string to check if it's a digit
				isNumber = false;
				break;// break out of the loop;
			}
		}
		if (isNumber == false) { // breaks out of 'do-while; loop
			break;
		}
		total_deposit += deposit;

		counter_month++;
		counter++;

		cout << endl;

	} while (counter_month < 4 || isNumber != true);


	grand_total = static_cast<double>(total_deposit) - static_cast<int>(total_expense);
	cout << grand_total;

	if ((budget - total_expense) == 0) {
		final = "ON BUDGET: ";
		end_result =budget - grand_total;
	}
	else if ((budget - total_expense) > 0) {
		final = "UNDER BUDGET BY:";
		end_result = budget - total_expense;
	}
	else if ((budget - total_expense) < 0) {
		final = "OVER BUDGET BY:";
		end_result = budget - total_expense;
	}

	cout << setprecision(2) << showpoint << fixed;
	cout << "\nAT END OF MONTH\n";
	cout << setw(20) << left << "Total Deposits: " << "$" << total_deposit << endl;
	cout << setw(20) << left << "Total Expenses: " << "$" << total_expense << endl;
	cout << setw(20) << left << "______________" << endl;
	cout << setw(20) << left << "Account Total: " << "$" << grand_total << endl;
	cout << setw(20) << left << "______________" << endl;
	cout << setw(20) << left << "Expense Budget: " << "$" << budget << endl;
	cout << setw(20) << left << "______________" << endl;
	cout << setw(20) << left << "______________" << endl;
	cout << setw(20) << left << final << ": " << "$" << end_result << endl;

	cout << endl << "Alex" << endl;

	return 0;
}