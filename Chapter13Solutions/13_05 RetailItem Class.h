#pragma once
#include <string>

class RetailItem
{
private:
	std::string description;
	int units;
	double price;

public:
	//Constructors
	RetailItem() {
		description = "";
		units = 0;
		price = 0;

	}
	RetailItem(std::string d, int u, double p) {
		description = d;
		units = u;
		price = p;
	}

	//Accessors
	std::string getDescription() {
		return description;
	}
	int getUnits() {
		return units;
	}
	double getPrice() {
		return price;
	}

	//Mutators
	void setDescription(std::string d) {
		description = d;
	}
	void setUnits(int u) {
		units = u;
	}
	void setPrice(double p) {
		price = p;
	}

};

