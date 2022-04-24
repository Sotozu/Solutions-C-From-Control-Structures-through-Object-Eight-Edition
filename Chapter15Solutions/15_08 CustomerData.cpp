#include "08 CustomerData.h"

//Default Constructor
CustomerData08::CustomerData08() {
	customerNumber = 0;
	mailingList = false;
}

//Constructor
CustomerData08::CustomerData08(int custNum, int maiLis, std::string ln, std::string fn, std::string add, std::string cit, std::string state, int z, int pho) :
	PersonData08(ln, fn, add, cit, state, z, pho) {
	customerNumber = custNum;
	mailingList = maiLis;
}

//Accessors
int CustomerData08::getCustomerNumber() const {
	return customerNumber;
}
bool CustomerData08::getMailingList() const {
	return mailingList;
}

//Mutators
void CustomerData08::setCustomerNumber(int custNum) {
	customerNumber = custNum;
}
void CustomerData08::setMailingList(bool maiLis) {
	mailingList = maiLis;
}

//overloads
std::ostream& operator << (std::ostream& strm, const CustomerData08& obj) {

	strm << obj.getFirstName() << " " << obj.getLastName() << std::endl;
	strm << obj.getAddress() << " " << obj.getCity() << " " << obj.getState() << " " << obj.getZip() << std::endl;
	strm << "Customer Number: " << obj.customerNumber << std::endl;

	if (obj.mailingList) {
		std::cout << "YES - Subscribed to mailing list." << std::endl;
	}
	else {
		std::cout << "NOT - Subscribed to mailing list." << std::endl;
	}

	return strm;
}