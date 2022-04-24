#pragma once
#include "13 BasicShape.h"

const double PI = 3.14159;

class Circle13 : public BasicShape13 {

private:
	long int centerX;
	long int centerY;
	double radius;
protected:
public:
	//Default Constructor
	Circle13();

	//Constructor
	Circle13(long int centX, long int centY, double r);

	//Accessors
	long int getCenterX() const;
	long int getCenterY() const;
	double getRadius() const;

	//Mutators
	void setCenterX(long int centX);
	void setCenterY(long int centY);
	void setRadius(double r);

	//Member Functions
	virtual void calcArea();
};