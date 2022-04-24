#include <iostream>

using namespace std;

struct MonthlyBudget {
	double housing;
	double utilities;
	double household_expenses;
	double transportation;
	double food;
	double medical;
	double insurance;
	double entertainment;
	double clothing;
	double miscellaneous;
};

void initializeSetBudget(MonthlyBudget&);
void insertData(MonthlyBudget&);
void compareBudgetAndExpenses(const MonthlyBudget&, MonthlyBudget&);


int main() {
	const int SIZE = 2;
	MonthlyBudget monthly[SIZE];
	initializeSetBudget(monthly[0]);

	cout << "ENTER YOUR EXPENSE FOR THE MONTH\n\n";
	insertData(monthly[1]);

	compareBudgetAndExpenses(monthly[0], monthly[1]);

	return 0;
}

void initializeSetBudget(MonthlyBudget& monthly) {
	monthly.housing = 500.00;
	monthly.utilities = 150.00;
	monthly.household_expenses = 65.00;
	monthly.transportation = 50.00;
	monthly.food = 250.00;
	monthly.medical = 30.00;
	monthly.insurance = 100.00;
	monthly.entertainment = 150.00;
	monthly.clothing = 75.00;
	monthly.miscellaneous = 50.00;
}

void insertData(MonthlyBudget& monthly) {
	cout << "Rent/Mortgage Expenses: $";
	cin >> monthly.housing;
	cout << "Utitilities Expenses: $";
	cin >> monthly.utilities;
	cout << "Household Expensess: $";
	cin >> monthly.household_expenses;
	cout << "Transportation Expenses: $";
	cin >> monthly.transportation;
	cout << "Food Expenses: $";
	cin >> monthly.food;
	cout << "Medical Expenses: $";
	cin >> monthly.medical;
	cout << "Insurance Expenses: $";
	cin >> monthly.insurance;
	cout << "Entertainment Expenses: $";
	cin >> monthly.entertainment;
	cout << "Clothing Expenses: $";
	cin >> monthly.clothing;
	cout << "Miscellaneous Expenses: $";
	cin >> monthly.miscellaneous;
}

void compareBudgetAndExpenses(const MonthlyBudget& budget, MonthlyBudget& expenses) {
	cout << endl;
	cout << "------BUDGET REPORT------" << endl;
	if (budget.housing < expenses.housing) {
		cout << "Rent/Mortage Expenses OVER BUDGET BY: $" << budget.housing - expenses.housing;
	}
	else if (budget.housing >= expenses.housing) {
		cout << "Rent/Mortage Expenses ON BUDGET (REMAINING): $" << budget.housing - expenses.housing;

	}

	cout << endl;

	if (budget.utilities < expenses.utilities) {
		cout << "Utilities Expenses OVER BUDGET BY: $" << budget.utilities - expenses.utilities;

	}
	else if (budget.utilities >= expenses.utilities) {
		cout << "Utilities Expenses ON BUDGET (REMAINING): $" << budget.utilities - expenses.utilities;

	}

	cout << endl;


	if (budget.household_expenses < expenses.household_expenses) {
		cout << "Houshold Expenses Expenses OVER BUDGET BY: $" << budget.household_expenses - expenses.household_expenses;
	}
	else if (budget.household_expenses >= expenses.household_expenses) {
		cout << "Houshold Expenses ON BUDGET (REMAINING): $" << budget.household_expenses - expenses.household_expenses;
	}

	cout << endl;

	if (budget.transportation < expenses.transportation) {
		cout << "Transportation Expenses OVER BUDGET BY: $" << budget.transportation - expenses.transportation;
	}
	else if (budget.transportation >= expenses.transportation) {
		cout << "Transportation Expenses ON BUDGET (REMAINING): $" << budget.transportation - expenses.transportation;
	}

	cout << endl;

	if (budget.food < expenses.food) {
		cout << "Food Expenses OVER BUDGET BY: $" << budget.food - expenses.food;
	}
	else if (budget.food >= expenses.food) {
		cout << "Food Expenses ON BUDGET (REMAINING): $" << budget.food - expenses.food;
	}

	cout << endl;

	if (budget.medical < expenses.medical) {
		cout << "Medical Expenses OVER BUDGET BY: $" << budget.medical - expenses.medical;
	}
	else if (budget.medical >= expenses.medical) {
		cout << "Medical Expenses ON BUDGET (REMAINING): $" << budget.medical - expenses.medical;
	}

	cout << endl;

	if (budget.insurance < expenses.insurance) {
		cout << "Insurance Expenses OVER BUDGET BY: $" << budget.insurance - expenses.insurance;
	}
	else if (budget.insurance >= expenses.insurance) {
		cout << "Insurance Expenses ON BUDGET (REMAINING): $" << budget.insurance - expenses.insurance;
	}

	cout << endl;

	if (budget.entertainment < expenses.entertainment) {
		cout << "Entertainment Expenses OVER BUDGET BY: $" << budget.entertainment - expenses.entertainment;
	}
	else if (budget.entertainment >= expenses.entertainment) {
		cout << "Entertainment Expenses ON BUDGET (REMAINING): $" << budget.entertainment - expenses.entertainment;
	}

	cout << endl;

	if (budget.clothing < expenses.clothing) {
		cout << "Clothing Expenses OVER BUDGET BY: $" << budget.clothing - expenses.clothing;
	}
	else if (budget.clothing >= expenses.clothing) {
		cout << "Clothing Expenses ON BUDGET (REMAINING): $" << budget.clothing - expenses.clothing;
	}

	cout << endl;

	if (budget.miscellaneous < expenses.miscellaneous) {
		cout << "Miscellaneous Expenses OVER BUDGET BY: $" << budget.miscellaneous - expenses.miscellaneous;
	}
	else if (budget.miscellaneous >= expenses.miscellaneous) {
		cout << "Miscellaneous Expenses ON BUDGET (REMAINING): $" << budget.miscellaneous - expenses.miscellaneous;
	}

	cout << endl;
}