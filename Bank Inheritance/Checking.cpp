#include "Account.hpp"
#include "Checking.hpp"
#include "Savings.hpp"
#include <iostream>
using namespace std;

CheckingAccount::CheckingAccount(double initialBalance, double initialFee) : Account(initialBalance) {

	feeCharged = initialFee;
}
void CheckingAccount::credit(double amountToAdd) {
	Account::credit(amountToAdd);
	Account::debit(feeCharged);
	
	cout << "$" << feeCharged << " transaction fee charged.\n" << endl;
}


bool CheckingAccount::debit(double amountToWithdraw) {
	if (Account::debit(amountToWithdraw) == true) {
		Account::debit(feeCharged);
		cout << "$" << feeCharged << " transaction fee charged.\n" << endl;
        return true;
	}
    else{
        
        cout << "Debit amount exceeded account balance" << endl;
    }
	return false;
    
}

