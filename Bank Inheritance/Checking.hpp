#pragma once
#include "Account.hpp"

class CheckingAccount : public Account {

public:
	CheckingAccount(double initialBalance, double fee);
	bool debit(double amount);
	void credit(double amount);
private:
	double feeCharged;

};

