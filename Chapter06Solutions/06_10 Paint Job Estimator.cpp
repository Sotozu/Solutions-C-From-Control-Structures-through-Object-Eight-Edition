#include <iostream>
#include <iomanip>
using namespace std;


// 18. Paint Job Estimator

void totalWallSpace(int &);
void calcLaborHours(int, double &);
void gallons(int ,double &);
void costOfPaint(double, double&);
void laborCost(double, double&);
void totalCost(double, double, double&);

int main() {
	int total_wall_space;
	double num_gallons;
	double labor_hours;
	double labor_cost;
	double paint_cost;
	double total_cost;

	int width_size1 = 30;
	int width_size2 = 2;
	
	totalWallSpace(total_wall_space); //retrieves total wall space
	gallons(total_wall_space, num_gallons); // retrieves the gallons necessary
	costOfPaint(num_gallons, paint_cost); //retrieve the cost of the paint
	calcLaborHours(total_wall_space, labor_hours); // retrieves the hours required to work on the job
	laborCost(labor_hours, labor_cost); // requires the cost of the labor for the job
	totalCost(paint_cost, labor_cost, total_cost); //calculates the total cost;

	cout << setprecision(2) << fixed << showpoint << endl;
	cout << "\nJOB INFORMATION\n";
	cout << "--------------------------------------------" << endl;
	cout << setw(width_size1) << left << "TOTAL WALL SPACE:" << setw(width_size2) << left << "" << total_wall_space << "(sqft)" << endl;
	cout << setw(width_size1) << left << "GALLONS OF PAINT REQUIRED:" << setw(width_size2) << left << "" << num_gallons << "(gal)" << endl;
	cout << setw(width_size1) << left << "TOTAL COST OF PAINT:" << setw(width_size2) << left << "$" << paint_cost << endl;
	cout << setw(width_size1) << left << "TOTAL LABOR HOURS REQUIRED:" << setw(width_size2) << left << "" << labor_hours <<"(h)" << endl;
	cout << setw(width_size1) << left << "TOTAL LABOR COSTS:" << setw(width_size2) << left << "$" << labor_cost <<  endl;
	cout <<"--------------------------------------------" << endl;
	cout << setw(width_size1) << left << "TOTAL COSTS:" << setw(width_size2) << left << "$" << total_cost << endl;



	return 0;
}
void totalWallSpace(int &total_wall_space) {
	total_wall_space = 0;
	int rooms;
	int sqfeet;
	cout << "How many rooms are there in this job.\n";
	do {
		cout << "ROOMS: ";
		cin >> rooms;
		if (rooms < 1) {
			cout << "ERROR: Please enter 1 or more rooms.\n";
		}
	} while (rooms < 1);

		cout << "\nPlease enter the number of square feet in the rooms.\n";

	for (int i = 0; i < rooms; i++) {
		cout << "Room " << i + 1 << ": ";
		do {
			cin >> sqfeet;
			total_wall_space += sqfeet;
			if (sqfeet < 0) {
				cout << "ERROR: Please enter a positive value for the wall area.\n";
			}
		} while (sqfeet < 0);
	}
}
void calcLaborHours(int total_wall_space, double &labor_hours) {

	labor_hours = (static_cast<double>(total_wall_space) / 110) * 8;

}
void gallons(int total_wall_space, double &num_gallons) {
	num_gallons = (static_cast<double>(total_wall_space) / 110);
}
void costOfPaint(double num_gallons, double& paint_cost) {
	cout << "Please enter the cost of the paint per gallon.\n";
	do {
		cout << "PAINT: $";
		cin >> paint_cost;
		if (paint_cost < 10.00) {
			cout << "ERROR: Paint cant be less than $10.00.\n";
		}
	} while (paint_cost < 10.00);
	paint_cost *= num_gallons;
}
void laborCost(double labor_hours, double& labor_cost) {
	labor_cost = labor_hours * 25;
}

void totalCost(double paint_cost, double labor_cost, double& total_cost) {

	total_cost = paint_cost + labor_cost;
}
