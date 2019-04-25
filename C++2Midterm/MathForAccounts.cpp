#include "pch.h"
#include "MathForAccounts.h"

double MathForAccounts::withDraw(double amountToWithdrawFrom, double currentBalance)
{
	double twenty = 20;
	double ten = 10;
	double five = 5;
	if ((currentBalance - amountToWithdrawFrom) < 0)
	{
		std::cout << "This withdrawal is too large for this account's current balance of: " << currentBalance << std::endl;
	}
	else{
		while (amountToWithdrawFrom > 0) {
			if ((amountToWithdrawFrom - twenty) >= 0) {
				currentBalance = currentBalance - twenty;
				amountToWithdrawFrom = amountToWithdrawFrom - twenty;
			}
			else if ((amountToWithdrawFrom - ten) >= 0) {
				currentBalance = currentBalance - ten;
				amountToWithdrawFrom = amountToWithdrawFrom - ten;
			}
			else if ((amountToWithdrawFrom - five) >= 0) {
				currentBalance = currentBalance - five;
				amountToWithdrawFrom = amountToWithdrawFrom - five;
			}
			else {
				amountToWithdrawFrom = 0;
			}
		}
	}
	return currentBalance;
}

double MathForAccounts::deposit(double amountToDeposit, double currentBalance)
{
	double newBalance = currentBalance + amountToDeposit;
	return newBalance;
}


double MathForAccounts::updateBalance(double newBalance)
{
	return newBalance;
}

MathForAccounts::MathForAccounts()
{
}


MathForAccounts::~MathForAccounts()
{
}
