#pragma once
#include "13 BasicShape.h"
class Rectangle13 : public BasicShape13{
private:
	long int width;
	long int length;
protected:

public:
	//Default Constructor
	Rectangle13();

	//Constructor
	Rectangle13(long int w, long int l);

	//Accessors;
	long int getWidth();
	long int getLength();

	//Mutators
	void setWidth(long int w);
	void setLength(long int l);

	//Member Functions
	//Pure virtual function inherated from " 13 BasicShape.h"
	virtual void calcArea();
	
};