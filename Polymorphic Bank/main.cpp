#include "Account.hpp"
#include "Checking.hpp"
#include "Savings.hpp"
#include "Overdraft.hpp"
#include <iostream>
#include <new>
#include <vector>
#include <iomanip>
using namespace std;
int main() {
	double amountToWithdraw;
	double amountToDeposit;
	int i{ 0 };
SavingsAccount* account1 =	new SavingsAccount(25.0, 0.030);
CheckingAccount* account2 =	new CheckingAccount(80.00, 1.00);
SavingsAccount* account3 =	new SavingsAccount(200.00, 0.015);
OverdraftAccount* account4=	new OverdraftAccount(400.00, 0.5, 10.00, account3);
	vector <Account *> accounts{  account1,account2,account3, account4 };
    cout << fixed;
    cout << setprecision(2);


	for (Account* accountPtr : accounts) {
		SavingsAccount* derivedSavingsPtr = dynamic_cast<SavingsAccount*>(accounts[i]);
		CheckingAccount* derivedCheckingPtr = dynamic_cast<CheckingAccount*>(accounts[i]);
		OverdraftAccount* derivedOverdraft = dynamic_cast<OverdraftAccount*>(accounts[i]);
		cout << "Account " << i+1<< " balance: $" << accounts[i]->getBalance() << endl;
		do {
			cout << "Enter an amount to withdraw from Account number " << i+1 <<": ";
			cin >> amountToWithdraw;
		} while (amountToWithdraw < 0);

		accounts[i]->debit(amountToWithdraw);
	do {
			cout << "Enter an amount to deposit into Account number " << i+1 <<": ";
			cin >> amountToDeposit;
		} while (amountToDeposit < 0);
		accounts[i]->credit(amountToDeposit);
		if (accounts[i] == derivedSavingsPtr) {
		cout << "Adding $ " << derivedSavingsPtr->computeInterest() << " to Account number " << i+1 <<  " (a Savings account)" << endl;
			accounts[i]->credit(derivedSavingsPtr->computeInterest());
}
cout << "Updated Account number " << i+1 << " Balance: $" <<accounts[i]->getBalance() << endl<< endl;
		i++;
	}
}
	
