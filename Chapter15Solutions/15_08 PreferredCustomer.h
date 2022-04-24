#pragma once
#include "08 CustomerData.h"
class PreferredCustomer08 : public CustomerData08 {
private:
	
	double purchaseAmount;
	double discountLevel;

	//Mutator
	void setDiscountLevel();

protected:

public:

	//Default Constructor
	PreferredCustomer08();
	PreferredCustomer08(double pAmount, int custNum, int maiLis, std::string ln, std::string fn, std::string add, std::string cit, std::string state, int z, int pho);

	//accessor
	double getPurchaseAmount();
	double getDiscountLevel();

	//Mutators
	void setPurchaseAmount(double pAmount);
	void addPurchase(double pAmount);
};