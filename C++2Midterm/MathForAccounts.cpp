#include "pch.h"
#include "MathForAccounts.h"

double MathForAccounts::withDraw(double amountToWithdrawFrom, double currentBalance)
{
	double twenty = 20;
	double ten = 10;
	double five = 5;

	double newBalance = 0;
	while (amountToWithdrawFrom > 0) {
		if ((currentBalance - twenty) >= 0) {
			newBalance = currentBalance - twenty;
			amountToWithdrawFrom = amountToWithdrawFrom - twenty;
		}
		else if ((currentBalance - ten) >= 0) {
			newBalance = currentBalance - ten;
			amountToWithdrawFrom = amountToWithdrawFrom - ten;
		}
		else if ((currentBalance - five) >= 0) {
			newBalance = currentBalance - five;
			amountToWithdrawFrom = amountToWithdrawFrom - five;
		}
		else {
			amountToWithdrawFrom = 0;
		}
	}
	return newBalance;
}

double MathForAccounts::deposit(double amountToDeposit, double currentBalance)
{
	double newBalance = currentBalance + amountToDeposit;
	return newBalance;
}

void MathForAccounts::transfer(double givingBalance, double receivingBalance, double amountToTransfer)
{

}

double MathForAccounts::updateBalance(double newBalance)
{
	return newBalance;
}

//double MathForAccounts::updateTransaction(double currentBalance, double newBalance)
//{
//
//}

MathForAccounts::MathForAccounts()
{
}


MathForAccounts::~MathForAccounts()
{
}
