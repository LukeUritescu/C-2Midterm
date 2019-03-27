#pragma once
#include <string>
#include <iostream>
#include <vector>
#include <memory>
#include "Account.h"

#ifndef BANKACCOUNT_USERPROFILE_H
#define BANKACCOUNT_USERPROFILE_H
class UserProfile
{
public:
	std::string getName();
	std::string getAddress();
	int getUniqueIdentifier();

	double getWithdraw(double amountToWithdraw, int accountNumber);
	double getDeposit(double amountToDeposit, int accountNumber);


	void completeATransfer(double amountToTransfer, int accountNumberThatTransfers, int accountNummberThatReceives);

	void printLastTransaction(int accountNumber);
	void printAllTransactions(int accountNumber);

	void createAnAccount(double startingBalance, std::string nameForAccount, std::string accountName);
	
	UserProfile();
	~UserProfile();
	UserProfile(std::string Name, std::string Address, int UniqueIdetifier);
	void deleteVector();

protected:
	std::vector<std::shared_ptr<Account>> accounts;
	std::string name;
	std::string address;
	int uniqueIdentifier;
};

#endif
//Should have the multiple accounts allocated to the heap
//address 
//name
//unique identifier
//accounts

