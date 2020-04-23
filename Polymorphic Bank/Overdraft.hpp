#pragma once
#include "Account.hpp"
#include "Checking.hpp"
#include "Savings.hpp"
#include <vector>
#include <new>
using namespace std;

class OverdraftAccount : public CheckingAccount {
public:
	OverdraftAccount(double initialBalance, double fee, double overdraftfee, SavingsAccount * sPtr);
	bool debit(double amountTOWithdraw);
	
private:
	SavingsAccount * savingsOverDraftAccount;
	
	double overDraftCharge;

};
