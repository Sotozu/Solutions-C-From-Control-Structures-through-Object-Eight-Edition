#pragma once

class FeetInches9
{
private:
	int feet;
	int inches;
	void simplify()
	{
		if (inches >= 12)
		{
			feet += (inches / 12);
			inches = inches % 12;
		}
		else if (inches < 0)
		{
			feet -= ((abs(inches) / 12) + 1);
			inches = 12 - (abs(inches) % 12);
		}
	}
public:
	// Constructor 
	FeetInches9(int f = 0, int i = 0)
	{
		feet = f;
		inches = i;
		simplify();
	}
	// Mutator functions
	void setFeet(int f)
	{
		feet = f;
	}
	//NOTE:Some of the operators in Table   14 - 1    are beyond the scope of this book and are not covered.
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
	// Overloaded operator functions 
	FeetInches9 operator + (const FeetInches9& right)
	{
		FeetInches9 temp;
		temp.inches = inches + right.inches;
		temp.feet = feet + right.feet;
		temp.simplify();
		return temp;
	}

	FeetInches9 operator - (const FeetInches9& right)
	{
		FeetInches9 temp;
		temp.inches = inches - right.inches;
		temp.feet = feet - right.feet;
		temp.simplify();
		return temp;
	}

	bool operator<=(const FeetInches9& right) {
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

	bool operator>=(const FeetInches9& right) {
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


	bool operator!=(const FeetInches9& right) {
		bool status;

		if (feet != right.feet || inches != right.inches) {
			status = true;
		}
		else {
			status = false;
		}
		return status;
	}


	bool operator==(const FeetInches9& right) {
		bool status;

		if (feet == right.feet && inches == right.inches) {
			status = true;
		}
		else {
			status = false;
		}
		return status;
	}

};



