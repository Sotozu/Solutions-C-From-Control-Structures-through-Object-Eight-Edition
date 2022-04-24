#pragma once
#include <iostream>
#include <string>

class Ship12 {
private:

protected:
	//We may need access to these variables in derived classes and thus we palce them under protected
	std::string name;
	int year_built;

public:
	//Default Constructor
	Ship12();

	//Constructor
	Ship12(std::string n, int yb);

	//Mutator
	void setName(std::string n);
	void setYearBuilt(int y);
	
	//Accessor
	std::string getName();
	int getYearBuilt();

	//Member Function
	virtual void print();

};