#include "08 PreferredCustomer.h"


PreferredCustomer08::PreferredCustomer08() {
	purchaseAmount = 0.0;
	discountLevel = 0.0;
}
PreferredCustomer08::PreferredCustomer08(double pAmount, int custNum, int maiLis, std::string ln, std::string fn, std::string add, std::string cit, std::string state, int z, int pho) : 
	CustomerData08(custNum, maiLis, ln, fn, add, cit, state, z, pho) {
	purchaseAmount = pAmount;
	setDiscountLevel();
}

//accessor
double PreferredCustomer08::getPurchaseAmount() {
	return purchaseAmount;
}

double PreferredCustomer08::getDiscountLevel() {
	return discountLevel;
}

//Mutators
void PreferredCustomer08::setPurchaseAmount(double pAmount) {
	purchaseAmount = pAmount;
	setDiscountLevel();
}
void PreferredCustomer08::addPurchase(double pAmount) {
	purchaseAmount += pAmount - (pAmount * discountLevel);
	setDiscountLevel();

}

void PreferredCustomer08::setDiscountLevel() {
	if (purchaseAmount >= 2000) {
		discountLevel = 0.10;
	}
	else if (purchaseAmount >= 1500) {
		discountLevel = 0.07;
	}
	else if (purchaseAmount >= 1000) {
		discountLevel = 0.06;
	}
	else if (purchaseAmount > 500) {
		discountLevel = 0.05;
	}
	else {
		discountLevel = 0.0;
	}
}