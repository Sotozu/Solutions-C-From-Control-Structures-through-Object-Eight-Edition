#include <iostream>
#include <iomanip>

using namespace std;

// 25. Travel Expenses

void numOfDays(int&);

void timeOfDeparture(double&, double&, bool&);
void timeOfArrival(double&, double&, bool&);

void roundTripFare(double&);
void carRentalExpense(double&);
void privateCar(double&);
void parkingFees(double&, double&, int);
void taxiFare(double&, double&, int);
void registrationFees(double&);
void hotelExpenses(double&, double&, int);
void foodExpenses(double&, double&, double, double, bool, bool);
void totalExpenses(double&, double, double, double, double, double, double, double, double);
void totalOwed(double&, double, double, double, double);


int main() {
	int days, fees_days;
	double dep_hour, dep_min, arr_hour, arr_min, ret_time, round_trip_fare, car_rental_expense, miles_driven_expense,
		total_parking_fees, total_parking_fees_owed, total_taxi_fare, total_taxi_fees_owed, registration_fees,
		hotel_expenses_owed, total_hotel_expenses, food_expenses_owed, total_food_expenses, total_expense, total_owed;
	bool dep_AM, arr_AM;

	cout << "---------------------------------\n";
	cout << "BUSINESS TRIP PROGRAM\n";
	cout << "---------------------------------\n";

	numOfDays(days);

	timeOfDeparture(dep_hour, dep_min, dep_AM);

	timeOfArrival(arr_hour, arr_min, arr_AM);

	roundTripFare(round_trip_fare);

	carRentalExpense(car_rental_expense);

	privateCar(miles_driven_expense);

	parkingFees(total_parking_fees_owed, total_parking_fees, days);

	taxiFare(total_taxi_fees_owed, total_taxi_fare, days);

	registrationFees(registration_fees);

	hotelExpenses(hotel_expenses_owed, total_hotel_expenses, days);

	foodExpenses(food_expenses_owed, total_food_expenses, arr_hour, dep_hour, arr_AM, dep_AM);

	totalExpenses(total_expense, round_trip_fare, car_rental_expense, miles_driven_expense,
		total_parking_fees, total_taxi_fare, registration_fees,
		total_hotel_expenses, total_food_expenses);

	totalOwed(total_owed, total_parking_fees_owed, total_taxi_fees_owed, hotel_expenses_owed, food_expenses_owed);

	return 0;
}
void numOfDays(int& days) {
	cout << "\nNUMBER OF DAYS INFORMATION\n";
	cout << "Please enter the total amount of days spent on the trip.\n";
	do {
		cout << "DAYS: ";
		cin >> days;
		if (days < 1) {
			cout << "ERROR: Please enter 1 or greater for the days.\n";
		}
	} while (days < 1);
	return;
}

void timeOfDeparture(double& dep_hour, double& dep_min, bool& dep_AM) {

	//Retrieves AM or PM
	int is_am;
	cout << "\nDEPARTURE TIME INFORMATION\n";
	cout << "Is the departure in AM or PM.\nEnter 1 for AM.\nEnter 2 for PM.\n";
	do {
		cout << "AM (1) or PM (2): ";
		cin >> is_am;
		if (is_am != 1 && is_am != 2) {
			cout << "ERROR: Please enter option 1 or 2.\n";
		}
	} while (is_am != 1 && is_am != 2);

	if (is_am == 1) {
		dep_AM = true;
	}
	else {
		dep_AM = false;
	}
	//Retrieves the hour.
	cout << "Please enter the departure time of the trip.\n";
	do {
		cout << "DEPARTURE TIME (hour): ";
		cin >> dep_hour;
		if (dep_hour > 12 || dep_hour < 1) {
			cout << "ERROR: Please enter hours between 1 - 12.\n";
		}
	} while (dep_hour > 12 || dep_hour < 1);
	//Retrieves the minutes.
	cout << "DEPARTURE TIME (minutes): ";
	do {
		cin >> dep_min;
		if (dep_min < 0 || dep_min > 59) {
			cout << "ERROR: Please enter minutes between 0 - 59.\n";
		}
	} while (dep_min < 0 || dep_min > 59);

	//Retrieves AM or PM

	return;
}

void timeOfArrival(double& arr_hour, double& arr_min, bool& arr_AM) {
	int is_am;
	cout << "\nARRIVAL TIME INFORMATION\n";
	cout << "Is the arrival in AM or PM.\nEnter 1 for AM.\nEnter 2 for PM.\n";
	do {
		cout << "AM (1) or PM (2): ";
		cin >> is_am;
		if (is_am != 1 && is_am != 2) {
			cout << "ERROR: Please enter option 1 or 2.\n";
		}
	} while (is_am != 1 && is_am != 2);
	if (is_am == 1) {
		arr_AM = true;
	}
	else {
		arr_AM = false;
	}
	//Retrieves the hour
	cout << "Please enter the arrival time of the trip.\n";
	do {
		cout << "ARRIVAL TIME (hour): ";
		cin >> arr_hour;
		if (arr_hour > 12 || arr_hour < 1) {
			cout << "ERROR: Please enter hours between 1 - 12.\n";
		}
	} while (arr_hour > 12 || arr_hour < 1);
	//Retrieves the minutes
	cout << "ARRIVAL TIME (minutes): ";
	do {
		cin >> arr_min;
		if (arr_min < 0 || arr_min > 59) {
			cout << "ERROR: Please enter minutes between 0 - 59.\n";
		}
	} while (arr_min < 0 || arr_min > 59);

	return;
}

void roundTripFare(double& round_trip_fare) {
	cout << "\nROUND TRIP INFORMATION\n";
	cout << "Please enter the round-trip airfare.\n";
	cout << "ROUND-TRIP AIRFARE: $";
	do {
		cin >> round_trip_fare;
		if (round_trip_fare < 0) {
			cout << "ERROR: Please enter 0 or a positive number.\n";
		}
	} while (round_trip_fare < 0);
	return;
}
void carRentalExpense(double& car_rental_expense) {
	cout << "\nCAR RENTAL INFORMATION\n";
	cout << "Please enter the expense for car rentals.\n";
	do {
		cout << "CAR RENTAL: $";
		cin >> car_rental_expense;
		if (car_rental_expense < 0) {
			cout << "ERROR: Please enter 0 or a positive number.\n";
		}
	} while (car_rental_expense < 0);
	return;
}
void privateCar(double& miles_driven_expense) {
	double miles_price = 0.27;
	cout << "\nPRIVATE CAR INFORMATION\n";
	cout << "Please enter the miles driven on the private vehicle.\n";
	do {
		cout << "MILES DRIVEN: ";
		cin >> miles_driven_expense;
		if (miles_driven_expense < 0) {
			cout << "ERROR: Please enter 0 or a positive number.\n";
		}
	} while (miles_driven_expense < 0);
	miles_driven_expense *= miles_price;
	return;
}

void parkingFees(double& total_parking_fees_owed, double& total_parking_fees, int days) {
	int fees_days;
	double parking_fees;
	int fees_owed = 0;
	total_parking_fees_owed = 0;
	total_parking_fees = 0;
	cout << "\nPARKING FEE INFORMATION\n";
	cout << "How many days did you incur parking fees?\n";
	do {
		cout << "PARKING FEE DAYS: ";
		cin >> fees_days;
		if (fees_days > days) {
			cout << "The trip is " << days << " days. Please enter a number equal to or less than this number.\n";
		}
		if (fees_days < 0) {
			cout << "Please enter a positive number.\n";
		}
	} while (fees_days > days || fees_days < 0);
		cout << "Please enter parking fees for those days.\n";

	for (int i = 0; i < fees_days; i++) {

		do {
			cout << "PARKING FEES DAY " << i+1 << ": $";
			cin >> parking_fees;
			if (parking_fees < 0) {
				cout << "ERROR: Please enter 0 or a positive number.\n";
			}
		} while (parking_fees < 0);

		if (parking_fees > 6) {
			fees_owed = parking_fees - 6;
			total_parking_fees_owed += fees_owed;
		}

		total_parking_fees += parking_fees;
	}
	return;
}

void taxiFare(double& total_taxi_fees_owed, double& total_taxi_fare, int days) {

	int taxi_days;
	double taxi_fare, fees_owed = 0;
	total_taxi_fees_owed = 0;
	total_taxi_fare = 0;

	cout << "\nTAXIE FARE INFORMATION\n";
	cout << "How many days out of the trip was a taxi used?\n";
	do { //Will acquire the number of days that taxis were used. Won't accept days more than the trip length. Wont accept less than 0
		cout << "TAXI DAYS: ";
		cin >> taxi_days;
		if (taxi_days > days) {
			cout << "The trip is " << days << " days. Please enter a number equal to or less than this number.\n";
		}
		if (taxi_days < 0) {
			cout << "Please enter a positive number.\n";
		}
	} while (taxi_days > days || taxi_days < 0);

	cout << "Please enter parking fees for those days.\n";
	for (int i = 0; i < taxi_days; i++) {

		do { //Will acquire cost of the taxi fare. Won't accept anything less than 0.
			cout << "TAXI FEES DAY " << i + 1 << ": $";
			cin >> taxi_fare;
			if (taxi_fare < 0) {
				cout << "ERROR: Please enter 0 or a positive number.\n";
			}
		} while (taxi_fare < 0);
		if (taxi_fare > 10) { //if the taxi costs are more than $10 then the individual payes the difference;
			fees_owed = taxi_fare - 10;
			total_taxi_fees_owed += fees_owed;
		}
		else if (taxi_fare <= 10) { //if the taxi costs $10 or less then the individual doesn't owe anything
			fees_owed = 0;
			total_taxi_fees_owed += fees_owed;
		}
		total_taxi_fare += taxi_fare;
	}
}

void registrationFees(double& registration_fees) {
	cout << "\nREGISTRATION FEE INFORMATION\n";
	cout << "Please enter any conference or seminar registration fees.\n";
	do {
		cout << "REGISTRATION FEES: $";
		cin >> registration_fees;
		if (registration_fees < 0) {
			cout << "ERROR: Please enter 0 or a positive number.\n";
		}
	} while (registration_fees < 0);
	return;
}

void hotelExpenses(double& hotel_expenses_owed, double& total_hotel_expenses, int days) {
	int hotel_days;
	double expense_owed;
	double hotel_rate;
	hotel_expenses_owed = 0;
	total_hotel_expenses = 0;
	cout << "\nHOTEL EXPENSE INFORMATION\n";
	cout << "Please enter the number of nights spent in a hotel.\n";
	do {
		cout << "HOTEL DAYS: ";
		cin >> hotel_days;
		if (hotel_days > days) {
			cout << "The trip is " << days << " days. Please enter a number equal to or less than this number.\n";
		}
		if (hotel_days < 1) {
			cout << "Please enter a positive number greater than 1.\n";
		}

	} while (hotel_days > days || hotel_days < 1);

	cout << "Please enter the nightly stay rate at the hotel.\n";
	for (int i = 0; i < hotel_days; i++) {
		do {
			cout << "HOTEL RATE DAY " << i+1 <<": $";
			cin >> hotel_rate;
			if (hotel_rate < 0) {
				cout << "ERROR: Please enter 0 or a positive number.\n";
			}
		} while (hotel_rate < 0);

		if (hotel_rate > 90) { // If hotel is more than $90 the idividiual owes the difference;
			expense_owed = hotel_rate - 90;
			hotel_expenses_owed += expense_owed;
		}
		else if (hotel_rate <= 90) { // If hotel expense is less than $90 the individual owes nothing
			expense_owed = 0;
			hotel_expenses_owed += expense_owed;
		}
		total_hotel_expenses += hotel_rate;
	}
	return;
}

void foodExpenses(double& food_expenses_owed, double& total_food_expenses, double arr_hour, double dep_hour, bool arr_AM, bool dep_AM) {
	int num_meal;
	bool arr_check = true, dep_check = true;

	double dep_meal_cost, arr_meal_cost;
	double meal_credit = 0;
	double meal_cost;
	food_expenses_owed = 0;
	total_food_expenses = 0;

	cout << "\nMEAL EXPENSE INFORMATION\n";
	cout << "How many meals were eaten during the business trip.\n";
	cout << "NUMBER OF MEALS: ";
	cin >> num_meal;


	cout << "Please enter the cost of each meal.\n";
	for (int i = 0; i < num_meal; i++) {
		if (dep_check == true) {
			cout << "Please enter the meal cost for the departure date.\n";
			cout << "DEPARTURE MEAL COST: $";
			if (dep_AM == true) {
				if (dep_hour < 7) { // breakfast
					meal_credit = 9;
				}
				else if (dep_hour >= 7 && dep_hour < 12) { //lunch
					meal_credit = 12;
				}
			}
			else if (dep_AM == false) {
				if (dep_hour < 6) { //dinner
					meal_credit = 16;
				}
				else {
					meal_credit = 0;
				}
			}
			cin >> dep_meal_cost;

			total_food_expenses += dep_meal_cost; //collects the total food expenses value

			if (dep_meal_cost < meal_credit) { //If the meal costs less than the credit. The meal be set to 0 for the amount owed.
				meal_credit = 0;
				dep_meal_cost -= meal_credit;
			}
			else if (dep_meal_cost > meal_credit) { //If the meal cost is greater than the credit. The idividual owes the difference.
				dep_meal_cost -= meal_credit;
			}
			dep_check = false; //The IF statement won't execute again since this check sets it to FALSE;
			i++; //Counts this as one meal
		}
		cout << "Please enter the meal cost for the arrival date.\n";
		cout << "ARRIVAL MEAL COST: $";
		if (arr_check == true) {
			if (arr_AM == true){ //AM
				if (arr_hour > 8 && arr_hour < 12) { //breakfast
					meal_credit = 12;
				}
			}
			else if (arr_check == false) { //PM
				if (arr_hour < 1 && arr_hour >= 12) { //breakfast
					meal_credit = 9;
				}
				else if(arr_hour >= 1 && arr_hour < 7) { //lunch
					meal_credit = 12;
				}
				else if (arr_hour >= 7 && arr_hour < 12) { //dinner
					meal_credit = 16;
				}
		}
		cin >> arr_meal_cost;

		total_food_expenses += arr_meal_cost; //collects the total food expenses value

		if (arr_meal_cost < meal_credit) { //If the meal costs less than the credit. The meal be set to 0 for the amount owed.
			meal_credit = 0;
			arr_meal_cost -= meal_credit;
		}
		else if (arr_meal_cost > meal_credit) { //If the meal cost is greater than the credit. The idividual owes the difference.
			arr_meal_cost -= meal_credit;
		}
		arr_check = false; //The IF statement won't execute again since this check sets it to FALSE;
		i++; //Counts this as one meal
		}

		cout << "\nPlease enter the other meals.\n";
		cout << "OTHER MEAL (" << i+1<< "): $";
		cin >> meal_cost;
		total_food_expenses += meal_cost;
		food_expenses_owed += meal_cost;

	}
	food_expenses_owed += (arr_meal_cost + dep_meal_cost);
	return;
}

void totalExpenses(double& total_expense, double round_trip_fare, double car_rental_expense, double miles_driven_expense,
	double total_parking_fees, double total_taxi_fare, double registration_fees, double total_hotel_expenses,
	double total_food_expenses) {

	int width = 30;
	cout << "\nTOTAL TRIP EXPENSE INFORMATION\n";

	cout << setprecision(2) << showpoint << fixed;

	cout << setw(width) << left << "TOTAL ROUND TRIP FARE" <<": $" << round_trip_fare << endl;

	cout << setw(width) << left << "TOTAL CAR RENTAL EXPENSE" << ": $" << car_rental_expense << endl;

	cout << setw(width) << left << "TOTAL MILES DRIVEN EXPENSE" << ": $" << miles_driven_expense << endl;

	cout << setw(width) << left << "TOTAL PARKING FEES" << ": $" << total_parking_fees << endl;

	cout << setw(width) << left << "TOTAL TAXI FARE" << ": $" << total_taxi_fare << endl;

	cout << setw(width) << left << "TOTAL REGISTRATION FEES" << ": $" << registration_fees << endl;

	cout << setw(width) << left << "TOTAL HOTEL EXPENSES" << ": $" << total_hotel_expenses << endl;

	cout << setw(width) << left << "TOTAL FOOD EXPENSES" << ": $" << total_food_expenses << endl;

	cout << setw(width) << left << "" << "   -------" << endl;

	total_expense = round_trip_fare + car_rental_expense + miles_driven_expense + total_parking_fees +
		total_taxi_fare + registration_fees + total_hotel_expenses + total_food_expenses;

	cout << setw(width) << left << "GRAND TOTAL" << ": $" << total_expense << endl;

	return;
}

void totalOwed(double& total_owed, double total_parking_fees_owed, double total_taxi_fees_owed, double hotel_expenses_owed, double food_expenses_owed) {
	int width = 30;
	total_owed = total_parking_fees_owed + total_taxi_fees_owed + hotel_expenses_owed + food_expenses_owed;

	cout << setprecision(2) << showpoint << fixed;
	cout << setw(width) << left << "INDIVIDUAL OWES" << ": $" << total_owed << endl;

	return;
}
