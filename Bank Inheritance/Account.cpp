#include "Account.hpp"
#include "Checking.hpp"
#include "Savings.hpp"
#include <iostream>
using namespace std;
#include <string>
Account::Account(double inputedBalance) {
	if (inputedBalance <= 0) {
		cout << "Sorry, balance is not valid" << endl;
		accountBalance = 0.0;
	}
	else {
		accountBalance = inputedBalance;
	}
}

void Account::credit(double amountToAdd) {
	accountBalance += amountToAdd;
}

bool Account::debit(double amountToWithdraw) {
	if (amountToWithdraw <= accountBalance) {
		accountBalance -= amountToWithdraw;
		return true;
	}
	else {
		cout << "Debit amount has exceeded account balance.\n" << endl;
		return false;
	}
}

double Account::getBalance() {
	return  accountBalance;

}
