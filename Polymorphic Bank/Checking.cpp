#include "Account.hpp"
#include "Checking.hpp"
#include "Savings.hpp"
#include <iostream>
using namespace std;

CheckingAccount::CheckingAccount(double initialBalance, double initialFee) : Account(initialBalance) {

	feeCharged = initialFee;
}
void CheckingAccount::credit(double amountToAdd) {
	if (amountToAdd > 0) {
		Account::credit(amountToAdd);
		Account::debit(feeCharged);
		cout << "$" << feeCharged << " transaction fee is charged." << endl;
	}
}
bool CheckingAccount::debit(double amountToWithdraw) {
	if (Account::debit(amountToWithdraw) == true && amountToWithdraw !=0) {
		Account::debit(getFee());
		cout << "$" << feeCharged << " fee is charged." << endl;
		return true;
	}
	return false;
}
double CheckingAccount::getFee() {
	return feeCharged;
}
