#pragma once
#include <iostream>

class Inventory
{
private:
	int itemNumber;
	int quantity;
	double cost;
	double total_cost;

public:
	//Constructors
	Inventory() {
		itemNumber = 0;
		quantity = 0;
		cost = 0;
		total_cost = 0;
	}
	Inventory(int n, int q, double c) {
		itemNumber = n;
		quantity = q;
		cost = c;
		Inventory::setTotalCost(q, c);
	}

	//Accessors
	int getItemNumber() const {
		return itemNumber;
	}
	int getQuantity() const {
		return quantity;
	}
	double getCost() const {
		return cost;
	}
	double getTotalCost() const {
		return total_cost;
	}


	//Mutators
	void setItemNumber(int n) {
		itemNumber = n;
	}
	void setQuantity(int q) {
		quantity = q;
	}
	void setCost(double c) {
		cost = c;
	}
	void setTotalCost(int q, double c) {
		total_cost = q * c;
	}

	//Other

	bool validData(int x) {
		if (x < 0) {
			std::cout << "ERROR: Please enter a positive number\n";
			return false;
		}
		else {
			return true;
		}
	}
	bool validData(double x) {
		if (x < 0) {
			std::cout << "ERROR: Please enter a positive number\n";
			return false;
		}
		else {
			return true;
		}
	}
};

