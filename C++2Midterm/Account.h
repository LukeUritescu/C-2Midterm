#pragma once
#include <string>
#include <vector>
#include <iostream>
#include "MathForAccounts.h"

#ifndef BANKACCOUNT_ACCOUNT_H
#define BANKACCOUNT_ACCOUNT_H


class Account
{
public:
	double getBalance();
	void getLastTransaction(); //returns the back of the transactionhistory vector to get the latest one
	void printEveryTransaction(); //will print out all transaction for the specified account

	void makeWithdraw(double amountToDeposit);
	void makeDeposit(double amountToDeposit);
	void makeTransfer(Account withDrawFrom, Account depositTo);

	Account();
	Account(double startingBalance);
	Account(const Account&&);
	~Account();

protected:
	double balance;
	std::unique_ptr<MathForAccounts> doMath = std::make_unique<MathForAccounts>();
	std::vector<double> transactionHistory;
};

//The transaction history should be a vector on the heap!2!!!!!
#endif // !BANKACCOUNT_ACCOUNT_H