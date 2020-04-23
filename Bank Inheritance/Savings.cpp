#include "Account.hpp"
#include "Checking.hpp"
#include "Savings.hpp"
#include <iostream>
using namespace std;

SavingsAccount::SavingsAccount(double initialBalance, double initialInterest) : Account(initialBalance) {
	
	accountInterest = initialInterest;
}

double SavingsAccount::computeInterest() {
	return (getBalance() * accountInterest);
}
