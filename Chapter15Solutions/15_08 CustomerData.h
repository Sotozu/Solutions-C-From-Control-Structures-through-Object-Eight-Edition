#pragma once
#include "08 PersonData.h"
#include <iostream>

//forward declaration
class  CustomerData08;

std::ostream& operator << (std::ostream&, const CustomerData08&);

class CustomerData08 : public PersonData08 {
private:
	int customerNumber;
	bool mailingList;
protected:

public:
	//Default Constructor
	CustomerData08();

	//Constructor
	CustomerData08(int custNum, int maiLis, std::string ln, std::string fn, std::string add, std::string cit, std::string state, int z, int pho);

	//Accessors
	int getCustomerNumber() const;
	bool getMailingList() const;

	//Mutators
	void setCustomerNumber(int custNum);
	void setMailingList(bool maiLis);

	//Overloads

	friend std::ostream& operator << (std::ostream&, const CustomerData08&);
};