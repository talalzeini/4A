#include "Account.hpp"
#include "Checking.hpp"
#include "Savings.hpp"
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	Account account1(50);
	SavingsAccount account2(25, 0.03);
	CheckingAccount account3(80, 1.0);
    cout << fixed;
    cout << setprecision(2);

    
	cout << "Balance of first account: $" << account1.getBalance() << endl;
	cout << "Balance of second account: $" << account2.getBalance() << endl;
	cout << "Balance of third account: $" << account3.getBalance() << endl << endl;

	cout << "Attempting to debit $25 from account1\n" << endl;
	account1.debit(25);
	cout << "Attemptig to debit $30 from account2" << endl;
	account2.debit(30);
	cout << "Attempting to debit $40 from account3" << endl;
	account3.debit(40);

	cout << "Account1 Balance: $" << account1.getBalance() << endl;
	cout << "Account2 Balance: $" << account2.getBalance() << endl;
	cout << "Account3 Balance: $" << account3.getBalance() << endl << endl;

	cout << "Crediting $40 to the first account.\n" << endl;
	account1.credit(40);

	cout << "Crediting $65 to second account.\n" << endl;
	account2.credit(65);

	cout << "Crediting $20 to third account." << endl;
	account3.credit(20);

	cout << "Balance of first account: $" << account1.getBalance() << endl;
	cout << "Balance of second account: $" << account2.getBalance() << endl;
	cout << "Balance of third account: $" << account3.getBalance() << endl << endl;

	cout << "Adding $" << account2.computeInterest() << " to the second account.\n" << endl;

	cout << "Second account's new balance: $" << account2.getBalance() + account2.computeInterest() << endl;


}
