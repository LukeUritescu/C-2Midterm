#pragma once
#include <iostream>
#include <cmath>

#ifndef BANKACCOUNT_MATHFORACCOUNTS_H
#define BANKACCOUNT_MATHFORACCOUNTS_H


class MathForAccounts
{
public:
	double withDraw(double amountToWithdrawFrom, double currentBalance); //this will go through similar process 
	double deposit(double amountToDeposit, double currentBalance); //this will return the amount total after the deposit and send back the new balance amount
	void transfer(double givingBalance, double receivingBalance, double amountToTransfer); //
	double updateBalance(double newBalance); //will use this function always for when i use deposit or withdraw
	double updateTransaction(double currentBalance, double newBalance);

	MathForAccounts();
	~MathForAccounts();
};

#endif // !BANKACCOUNT_MATHFORACCOUNTS_H
