#pragma once
#include <string> 

class InventoryItem
{
private:
	std::string description; // The item description 
	double cost;			 // The item cost 
	int units;				 // Number of units on hand 
public:
// Constructor #1 
	InventoryItem()
	{ // Initialize description, cost, and units. 
		description = "";
		cost = 0.0;
		units = 0;
	}
	// Constructor #2 
	InventoryItem(std::string desc)
	{ // Assign the value to description. 
		description = desc;
	// Initialize cost and units. 
		cost = 0.0;
		units = 0; }
	// Constructor #3 
	InventoryItem(std::string desc, double c, int u)
	{ // Assign values to description, cost, and units. 
		description = desc;
		cost = c;
		units = u; }
	// Mutator functions 

	void setDescription(std::string d)
	{ description = d; }

	void setCost(double c)
	{ cost = c; }

	void setUnits(int u)
	{ units = u; }
	// Accessor functions 

	std::string getDescription() const
	{ return description; }

	double getCost() const
	{ return cost; }

	int getUnits() const
	{ return units; }
};

	

