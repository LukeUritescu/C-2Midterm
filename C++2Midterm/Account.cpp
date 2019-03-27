#include "pch.h"
#include "Account.h"


void Account::getLastTransaction()
{
	std::cout << transactionHistory.back() << std::endl;
}

double Account::getBalance()
{
	return balance;
}

void Account::printEveryTransaction()
{
	for (std::vector<double>::iterator it = transactionHistory.begin(); it != transactionHistory.end(); ++it)
	{
		std::cout << *it << std::endl;
	}
}


void Account::makeWithdraw(double amountToDeposit)
{
	double newBalance = doMath->withDraw(amountToDeposit, balance);
}

void Account::makeDeposit(double amountToDeposit)
{
	double newBalance = doMath->deposit(amountToDeposit, balance);
	
}

void Account::makeTransfer(Account withDrawFrom, Account depositTo)
{

}

Account::Account()
{

}

Account::Account(const Account&&)
{

}

Account::Account(double startingBalance)
{
	balance = startingBalance;
}


Account::~Account()
{
}
