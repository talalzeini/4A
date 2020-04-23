#pragma once
#include "Account.hpp"
#include "Checking.hpp"
#include "Savings.hpp"
#include "Overdraft.hpp"
#include <vector>
#include <new>
#include <iostream>
using namespace std;

OverdraftAccount::OverdraftAccount(double initialBalance, double initialFee, double initialOverdraftfee , SavingsAccount * savingsPtr): CheckingAccount (initialBalance, initialFee) {
	overDraftCharge = initialOverdraftfee;
	savingsOverDraftAccount = savingsPtr;

}
bool OverdraftAccount::debit(double amountToWithdraw) {

	if (CheckingAccount::debit(amountToWithdraw) == true) {
		return true;
	}
	else {
		if (((getBalance() + savingsOverDraftAccount-> getBalance()) + overDraftCharge >=  amountToWithdraw)) {

			savingsOverDraftAccount->debit(amountToWithdraw - getBalance());
			savingsOverDraftAccount->debit(overDraftCharge);
			cout << "Using Overdraft Protection. (Legal money extraction rip-off!). " << endl;
			cout << "$" << getFee() << " transaction fee charged." << endl;
			Account::debit(getFee());
			Account::debit(getBalance());
			cout << "$" << overDraftCharge << " overdraft transaction fee charged." << endl;
			cout << "Updated OverDraft Savings Account balance: $ " << savingsOverDraftAccount->getBalance() << endl;
		}
		else
		{
            cout << "You unfortunetaly don't have enough money" << endl;
        }
			return false;
		}
	}



