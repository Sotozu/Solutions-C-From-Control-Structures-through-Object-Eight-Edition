#pragma once
#include "07 PersonData.h"
#include <iostream>

//forward declaration
class  CustomerData07;

std::ostream &operator << (std::ostream&, const CustomerData07&);

class CustomerData07 : public PersonData07 {
private:
	int customerNumber;
	bool mailingList;
protected:

public:
	//Default Constructor
	CustomerData07();

	//Constructor
	CustomerData07(int custNum, int maiLis, std::string ln, std::string fn, std::string add, std::string cit, std::string state, int z, int pho);

	//Accessors
	int getCustomerNumber() const;
	bool getMailingList() const;

	//Mutators
	void setCustomerNumber(int custNum);
	void setMailingList(bool maiLis);

	//Overloads

	friend std::ostream& operator << (std::ostream&, const CustomerData07&);
};