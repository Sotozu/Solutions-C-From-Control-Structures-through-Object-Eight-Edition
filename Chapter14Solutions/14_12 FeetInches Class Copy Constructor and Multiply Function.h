#pragma once
#include <cmath>

class FeetInches12
{
private:
	int feet;// To hold a number of feet
	int inches;// To hold a number of inches

	void simplify()
	{
		if (inches >= 12)
		{
			feet += (inches / 12);
			inches = inches % 12;//gives me the remaining inches over % 12. so if 13 inches then it gives 1.
		}
		else if (inches < 0)
		{
			feet -= ((abs(inches) / 12) + 1);
			inches = 12 - (abs(inches) % 12);

		}
	}
public:
	// Constructor 
	FeetInches12(int f = 0, int i = 0)
	{
		feet = f;
		inches = i;
		simplify();
	}

	//Copy Constructor
	FeetInches12(const FeetInches12& obj) {
		feet = obj.feet;
		inches = obj.inches;
	}


	// Mutator functions
	void setFeet(int f)
	{
		feet = f;
	}
	//NOTE:Some of the operators in T able   14 - 1    are beyond the scope of this book and are not covered.
	void setInches(int i)
	{
		inches = i;
		simplify();
	}
	// Accessor functions
	int getFeet() const
	{
		return feet;
	}
	int getInches() const
	{
		return inches;
	}

	FeetInches12 operator + (const FeetInches12& right)
	{
		FeetInches12 temp;
		temp.inches = inches + right.inches;
		temp.feet = feet + right.feet;
		temp.simplify();
		return temp;
	}
	//********************************************** 
	// Overloaded binary - operator.             * 
	//********************************************** 
	FeetInches12 operator - (const FeetInches12& right)
	{
		FeetInches12 temp;
		temp.inches = inches - right.inches;
		temp.feet = feet - right.feet;
		temp.simplify();
		return temp;
	}

	//********************************************** 
	// Overloaded binary <= operator.             * 
	//********************************************** 
	bool operator<=(const FeetInches12& right) {
		bool status;
		if (inches == right.inches && feet == right.feet) {
			status = true;
		}
		else if (feet <= right.feet && inches < right.inches) {
			status = true;
		}
		else {
			status = false;
		}
		return status;
	}

	//********************************************** 
	// Overloaded binary >= operator.             * 
	//********************************************** 
	bool operator>=(const FeetInches12& right) {
		bool status;
		if (inches == right.inches && feet == right.feet) {
			status = true;
		}
		else if (feet >= right.feet && inches > right.inches) {
			status = true;
		}
		else {
			status = false;
		}
		return status;
	}

	//********************************************** 
	// Overloaded binary != operator.             * 
	//********************************************** 

	bool operator!=(const FeetInches12& right) {
		bool status;

		if (feet != right.feet || inches != right.inches) {
			status = true;
		}
		else {
			status = false;
		}
		return status;
	}

	//********************************************** 
	// Overloaded binary == operator.             * 
	//********************************************** 

	bool operator==(const FeetInches12& right) {
		bool status;

		if (feet == right.feet && inches == right.inches) {
			status = true;
		}
		else {
			status = false;
		}
		return status;
	}

	//********************************************** 
	// Overloaded binary * operator.             * 
	//********************************************** 

	FeetInches12 operator * (const FeetInches12& right)
	{
		double square_area_fraction_inches;
		int square_area_whole_feet;
		double feet_fraction1, feet_fraction2;

		feet_fraction1 = feet + (static_cast<double>(inches) / 12);
		feet_fraction2 = right.feet + (static_cast<double>(right.inches) / 12);



		square_area_fraction_inches = feet_fraction1 * feet_fraction2; //will hold a number (feet) with decimals being the inches

		square_area_whole_feet = square_area_fraction_inches; //truncating the number so it only holds the feet.

		square_area_fraction_inches -= square_area_whole_feet; //subtracting only the feet from the fractional number leaving inches

		square_area_fraction_inches *= 12;

		FeetInches12 temp;
		temp.setFeet(square_area_whole_feet);
		temp.setInches(square_area_fraction_inches);

		return temp;

	}



	void operator = (const FeetInches12& right) {
		inches = right.inches;
		feet = right.feet;
	}


};



