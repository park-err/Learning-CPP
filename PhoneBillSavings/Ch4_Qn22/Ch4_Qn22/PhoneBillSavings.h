#pragma once
#include <string>
class PhoneBillSavings {
private:
	const double planABasePay = 39.99;
	const double planBBasePay = 59.99;
	const double cBill = 79.99;
	const int planABaseData = 2;
	const int planBBaseData = 8;
	
	int customerDataUsed;
	char customerPlan;
	std::string customerName;
	double savings[3], aBill, bBill;
public:
	void getUserInfo();
	void planABill();
	void planBBill();
	void save();
	void displaySavings();
};