#include "pch.h"
#include "Account.h"


double Account::getBalance()
{
	return balance;
}

std::string Account::getName()
{
	return name;
}

void Account::setName(std::string Name)
{
	name = Name;
}

void Account::getLastTransaction()
{
	std::cout << "Transaction: " << std::endl;
	std::cout << "$" << transactionHistory.back() << std::endl;
}


void Account::printEveryTransaction()
{
	for (std::vector<double>::iterator it = transactionHistory.begin(); it != transactionHistory.end(); ++it)
	{
		std::cout << "$" << *it << std::endl;
	}
}


void Account::makeWithdraw(double amountToWithdraw)
{
	double newBalance = 0;
	newBalance = doMath->withDraw(amountToWithdraw, getBalance());
	if (newBalance == getBalance()) {
		std::cout << "No transaction happened" << std::endl;
	}
	else {
		transactionHistory.push_back(0 - amountToWithdraw);
	}
}

void Account::makeDeposit(double amountToDeposit)
{
	balance = doMath->deposit(amountToDeposit, getBalance());
	transactionHistory.push_back(amountToDeposit);
	
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
