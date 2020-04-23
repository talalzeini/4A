#pragma once
#include "Account.hpp"

class CheckingAccount : public Account {
public:
	CheckingAccount(double initialBalance, double fee);
	bool debit(double);
	void credit(double);
	double getFee();
private:
	double feeCharged;
};

