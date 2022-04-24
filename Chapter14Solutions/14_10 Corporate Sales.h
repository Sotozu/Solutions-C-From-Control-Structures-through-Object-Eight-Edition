#pragma once
#include <iostream>
#include <string>
class DivSales10;

std::ostream& operator<< (std::ostream&, const DivSales10&);
std::istream& operator>> (std::istream&, DivSales10&);


class DivSales10
{
private:
	/*------------------------------------------
	divison_sales[0] is NORTH DIVISION
	divison_sales[0] is SOUTH DIVISION
	divison_sales[0] is EAST DIVISION
	divison_sales[0] is WEST DIVISION
	------------------------------------------*/
	double division_sales[4];
	const static std::string quarter[4];
	static double total_sales; //static member

	//Process function

public:

	//Constructors
	DivSales10() {
		division_sales[0] = 0;
		division_sales[1] = 0;
		division_sales[2] = 0;
		division_sales[3] = 0;

		for (int i = 0; i < 4; i++) {
			total_sales += division_sales[i];
		}
	}

	DivSales10(double n, double s, double e, double w) {
		division_sales[0] = n;
		division_sales[1] = s;
		division_sales[2] = e;
		division_sales[3] = w;

		for (int i = 0; i < 4; i++) {
			total_sales += division_sales[i];
		}
	}

	//Mutator
	void setSales(double n, double s, double e, double w) {
		for (int i = 0; i < 4; i++) { //first clear the values of this divison from total_sales
			removeQSales(division_sales[i]);
		}

		division_sales[0] = n;
		division_sales[1] = s;
		division_sales[2] = e;
		division_sales[3] = w;

		for (int i = 0; i < 4; i++) { //Add in the new division_sales;
			totalSales(division_sales[i]);
		}
	}


	//Accessor
	double getDivQSal(int index) {
		return division_sales[index];
	}

	//Static member functions
	static void totalSales(double sales) {
		total_sales += sales;
	}

	static double getTotalSales() {
		return total_sales;
	}

	static void removeQSales(double sales) {
		total_sales -= sales;
	}

	//Overloaded >> operator
	friend std::ostream& operator<< (std::ostream& strm, const DivSales10& obj) {
		strm << "--------------REPORT--------------" << std::endl;
		for (int i = 0; i < 4; i++) {
			strm << DivSales10::quarter[i] << " Divison Sales: $"; strm << obj.division_sales[i] << std::endl;


		}
		return strm;
	}

	friend std::istream& operator>> (std::istream& strm, DivSales10& obj) {
		double div_sal[4];
		for (int i = 0; i < 4; i++) {
			do {
				std::cout << DivSales10::quarter[i] << " Divison Sales: $"; strm >> div_sal[i];
				if (div_sal[i] < 0) {
					std::cout << "ERROR: Please enter a positive value.\n";
				}
			} while (div_sal[i] < 0);
		}
		obj.setSales(div_sal[0], div_sal[1], div_sal[2], div_sal[3]);
		return strm;
	}

	//Proccess Functions
	bool isInputValid(double sale) {
		if (sale < 0) {
			return false;
		}
		return true;
	}

};


// Define static private member variable to 0 at the beginning of the program
double DivSales10::total_sales = 0;

const std::string DivSales10::quarter[4] = { "Quarter 1", "Quarter 2", "Quarter 3", "Quarter 4" };



