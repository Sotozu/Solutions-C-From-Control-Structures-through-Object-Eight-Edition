#pragma once

class BasicShape13 {

private:
protected:
	double area;
public:
	//Default Constructor
	BasicShape13() {
		area = 0;
	}

	//Constructor
	BasicShape13(double a) {
		area = a;
	}

	//Accessor
	double getArea() const {
		return area;
	}
	  
	//Member Function 
	virtual void calcArea() = 0; //Pure Virtual Function

};