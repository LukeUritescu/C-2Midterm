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
	balance = doMath->withDraw(amountToDeposit, getBalance());
}

void Account::makeDeposit(double amountToDeposit)
{
	balance = doMath->deposit(amountToDeposit, getBalance());
	
	
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
