#include "Account.hpp"
#include "Checking.hpp"
#include "Savings.hpp"
#include <iostream>
#include <iomanip>
using namespace std;
#include <string>
Account::Account(double inputedBalance) {
	if (inputedBalance <= 0) {
		cout << "Balance is not valid" << endl;
		accountBalance = 0.0;
	}
	else {
		accountBalance = inputedBalance;
	}
}
double Account::getBalance() {
	return  accountBalance;
}
void Account::credit(double amountToAdd) {
	accountBalance += amountToAdd;
}
bool Account::debit(double amountToWithdraw) {
	if (amountToWithdraw <= accountBalance) {
		accountBalance -= amountToWithdraw;
		return true;
	}
	else{
		cout << "Debit amount of $" << amountToWithdraw << " has exceeded account balance of $" << fixed << setprecision(2) << getBalance() << endl;
		return false;
	}
}


