#pragma once
#pragma once
class Account {
public:
	Account(double initialBalance);
	bool debit(double);
	void credit(double amountToAdd);
    double getBalance();
private:
	double accountBalance;

};


