#include "pch.h"
#include "MathForAccounts.h"

double MathForAccounts::withDraw(double amountToWithdrawFrom, double currentBalance)
{
	double twenty = 20;
	double ten = 10;
	double five = 5;

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
	return currentBalance;
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
