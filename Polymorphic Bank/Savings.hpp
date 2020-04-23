#pragma once
#include"Account.hpp"
#include"Checking.hpp"

class SavingsAccount : public Account {
public:
	SavingsAccount(double intialBalance, double interestRate);
	double computeInterest();
	void credit(double amountToAdd);
	
private:
	double accountInterest;
};

