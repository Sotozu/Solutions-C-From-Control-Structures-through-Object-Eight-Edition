#pragma once
#include <string>
#include <iostream>

class PersonData07;

std::ostream& operator << (std::ostream&, const PersonData07&);

class PersonData07 {
private:
	std::string lastName,
		firstName,
		address,
		city,
		state;
	int zip, 
		phone;


protected:
public:
	//Default Constructor
	PersonData07();

	//Constructor
	PersonData07(std::string ln, std::string fn, std::string add, std::string cit, std::string sta, int z, int pho);

	//Accessor
	std::string getLastName() const;
	std::string getFirstName()const;
	std::string getAddress()const;
	std::string getCity()const;
	std::string getState()const;
	int getZip()const;
	int getPhone()const;

	//Mutators
	void setFirstName(std::string);
	void setLastName(std::string);
	void setAddress(std::string);
	void setCity(std::string);
	void setState(std::string);
	void setZip(int);
	void setPhone(int);


	//overloads
	friend std::ostream& operator << (std::ostream&, const PersonData07&);

};