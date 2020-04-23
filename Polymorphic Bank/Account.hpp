#pragma once
class Account {
public:
	Account(double initialBalance);
virtual bool debit(double);
	virtual void  credit(double amountToAdd) ;
	double getBalance();
private:
	double accountBalance;
};

